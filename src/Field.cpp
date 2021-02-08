#pragma once

using namespace std;


Field::Field() {
    for (int i = 0; i < field_size; i++) {
        field[i] = stoch(empty_cell);
    }

    field[snake_pos] = snake_cell;
    srand(time(nullptr));
}

void Field::render() const {
    for (int i = 0; i < field_width*1.1; i++) {
        cout << floor_cell;
    }
    cout << endl;

    for (int i = 0; i < field_height; i++) {
        cout << wall_cell;
        for (int x = 0; x < field_width; x++) {
            cout << field[(field_width*i)+x];
        }
        cout << wall_cell << endl;
    }

    for (int i = 0; i < field_width*1.1; i++) {
        cout << floor_cell;
    }
}

void Field::move(int direction) {
    int x_pos, y_pos;
    x_pos = snake_pos % field_width;
    y_pos = (snake_pos - x_pos) / field_width;

    int new_x_pos, new_y_pos;
    if (direction < 0 || direction > 3) {
        direction = m_direction;
    }
    if (direction == 0) {
        new_x_pos = x_pos;
        new_y_pos = y_pos - 1;
    }
    else if (direction == 1) {
        new_x_pos = x_pos + 1;
        new_y_pos = y_pos;
    }
    else if (direction == 2) {
        new_x_pos = x_pos;
        new_y_pos = y_pos + 1;
    }
    else {
        new_x_pos = x_pos - 1;
        new_y_pos = y_pos;
    }

    int new_pos = (new_y_pos * field_width) + new_x_pos;

    if (new_x_pos < 0 || new_x_pos > (field_width - 1) || new_y_pos < 0 || new_y_pos > (field_height - 1)
            || field[new_pos] == tail_cell) {
        clear();
        playing = false;
    }

    if (field[new_pos] == apple_cell) {
        score += 1;
        last_move_hit_apple = true;
        generate_apple();
    }

    if (last_move_hit_apple) {
        tail_pos.insert(tail_pos.begin(), new_pos);
    }
    else {
        for (int i = 0; i < tail_pos.size(); i++) {
            if (i == tail_pos.size()) {
                field[tail_pos[0]] = empty_cell;
                tail_pos[0] = new_pos;
            }
            else {
                field[tail_pos[-i - 1]] = empty_cell;
                tail_pos[-i - 1] = tail_pos[-i - 2];
            }
        }
    }

    for (int tail_po : tail_pos) {
        field[tail_po] = tail_cell;
    }

    field[snake_pos] = empty_cell;
    field[new_pos] = snake_cell;
    snake_pos = new_pos;
    m_direction = direction;
}

void Field::generate_apple() {
    int random_num;

    do {
        random_num = 0 + rand() % ((field_size + 1) - 0);
    } while (field[random_num] != empty_cell);

    field[random_num] = apple_cell;
}
