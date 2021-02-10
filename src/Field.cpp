#pragma once

using namespace std;


Field::Field() {
    for (int i = 0; i < field_size; i++) {
        field[i] = stoch(empty_cell);
    }

    field[snake_pos] = snake_cell;
    srand(time(nullptr));
}

void Field::get_pos_by_direction(int direction, int& m_new_x_pos, int& m_new_y_pos, int& m_new_pos) const {
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

    m_direction = direction;

    m_new_x_pos = new_x_pos;
    m_new_y_pos = new_y_pos;
    m_new_pos = (new_y_pos * field_width) + new_x_pos;
}

bool Field::check_if_dead(int new_x_pos, int new_y_pos) {
    if (new_x_pos < 0 || new_x_pos > (field_width - 1) || new_y_pos < 0 || new_y_pos > (field_height - 1)) {
        return true;
    }

    int new_pos = (new_y_pos * field_width) + new_x_pos;

    for (int i = 0; i < score; i++) {
        if (tail_pos[i] == new_pos) {
            return true;
        }
    }

    return false;
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
    for (int i = 0; i < score; i++) {
        field[tail_pos[i]] = empty_cell;
    }

    int new_x_pos;
    int new_y_pos;
    int new_pos;
    get_pos_by_direction(direction, new_x_pos, new_y_pos, new_pos);

    if (check_if_dead(new_x_pos, new_y_pos)) {
        clear();
        playing = false;
    }

    if (field[new_pos] == apple_cell) {
        score += 1;
        generate_apple();
    }

    tail_pos.insert(tail_pos.begin(), snake_pos);
    field[snake_pos] = empty_cell;
    field[new_pos] = snake_cell;
    snake_pos = new_pos;

    for (int i = 0; i < score; i++) {
        field[tail_pos[i]] = tail_cell;
    }

    while (tail_pos.size() > (score + 1)) {
        tail_pos.pop_back();
    }
}

void Field::generate_apple() {
    int random_num;

    do {
        random_num = 0 + rand() % ((field_size + 1) - 0);
    } while (field[random_num] != empty_cell);

    field[random_num] = apple_cell;
}
