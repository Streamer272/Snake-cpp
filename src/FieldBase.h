#pragma once

using namespace std;

class FieldBase {
private:
    string empty_cell = " ";
    string wall_cell = "|";
    string floor_cell = "-";
public:
    int field_size;
    string field;

    FieldBase(int field_s);
    void field_init();
    void output_field() const;
};
