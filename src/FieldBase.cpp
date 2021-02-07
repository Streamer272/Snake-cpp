#pragma once
#include <iostream>


char stoch(string s) {
    char* char_arr;
    string str_obj(std::move(s));
    char_arr = &str_obj[0];
    return *char_arr;
}

FieldBase::FieldBase() {
    for (int i = 0; i < field_size; i++) {
        field[i] = stoch(empty_cell);
    }
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
