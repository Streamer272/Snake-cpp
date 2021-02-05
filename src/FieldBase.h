#pragma once

using namespace std;

class FieldBase {
private:
    string empty_cell = "w";
    string wall_cell = "|";
    string floor_cell = "-";
public:
    int field_width = 8;
    int field_size = field_width*field_width;
    string field[field_size] = {};

    void field_init();
    void output_field() const;
};
