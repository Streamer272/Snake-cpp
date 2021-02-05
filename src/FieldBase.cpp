#pragma once
#include "FieldBase.h"

using namespace std;

char stoch(string s) {
    char* char_arr;
    string str_obj(std::move(s));
    char_arr = &str_obj[0];
    return *char_arr;
}

void FieldBase::field_init() {
    for (int i = 0; i < field_size; i++) {
        field[i] = stoch(empty_cell);
    }

    cout << "init success";
}

void FieldBase::output_field() const {
    cout << "starting output field" << endl;

    if (field_size == 0) {
        cout << "field is empty" << endl;
        return;
    }

    for (int i = 0; i < field_size; i++) {
        cout << field[i];
    }

    cout << "field outputed successfuly" << endl;
}
