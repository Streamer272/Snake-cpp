#include "FieldBase.h"
#include <iostream>


char str_to_char(string s) {
    char* char_arr;
    string str_obj(std::move(s));
    char_arr = &str_obj[0];
    cout << char_arr;
    return 0;
}

void FieldBase::field_init() {
    field[field_size] = {};

    for (int i = 0; i < field_size; i++) {
        field[i] = str_to_char(empty_cell);
    }

    field_init_done = true;
}

void FieldBase::output_field() const {
    if (!field_init_done) {
        return;
    }

    for (int i = 0; i < field_size; i++) {
        cout << field[i];
    }
}

FieldBase::FieldBase(int field_size) {
    field_size = field_size;
    field_init();
}
