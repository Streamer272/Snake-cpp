#pragma once

#include <iostream>

using namespace std;


class FieldBase {
private:
    string empty_cell = " ";
    string wall_cell = "|";
    string floor_cell = "-";

    bool field_init_done = false;
public:
    int field_size{};
    string field;

    explicit FieldBase(int field_size);
    void field_init();
    void output_field() const;
};
