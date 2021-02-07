#pragma once
#include <iostream>

using namespace std;


class FieldBase {
private:
    string empty_cell = " ";
    string wall_cell = "|";
    string floor_cell = "-";
    string snake_cell = "@";
    string tail_cell = "#";
public:
    int field_width = 16;
    int field_height = 8;
    int field_size = field_width*field_height;
    string field[8*16] = {};

    FieldBase();
    void output_field() const;
};

#include "FieldBase.cpp"
