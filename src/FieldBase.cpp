#pragma once

using namespace std;

FieldBase::FieldBase() {
    for (int i = 0; i < field_size; i++) {
        field[i] = stoch(empty_cell);
    }

    field[((field_height/2)*field_width)+field_width/2] = snake_cell;
}

void FieldBase::output_field() const {
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

void FieldBase::set_field(int index, string str) {
    field[index] = str;
}

void FieldBase::move(string direction) {
    int current_pos;

    for (int i = 0; i < field_size; i++) {
        if (field[i] == snake_cell) {
            current_pos = i;
        }
    }
}
