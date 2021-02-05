#pragma once
#include <iostream>
#include "FieldBase.h"

using namespace std;

char stoch(string s) {
    char* char_arr;
    string str_obj(std::move(s));
    char_arr = &str_obj[0];
    cout << char_arr;
    return 0;
}

void FieldBase::field_init() {
    field[field_size] = {};

    for (int i = 0; i < field_size; i++) {
        field[i] = stoch(empty_cell);
    }
}

void FieldBase::output_field() const {
    if (field.length() == 0) {
        return;
    }

    for (int i = 0; i < field_size; i++) {
        cout << field[i];
    }
}

FieldBase::FieldBase(int field_s) {
    field_size = field_s;
}
