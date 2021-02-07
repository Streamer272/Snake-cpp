#pragma once
#include "InnerSystem.cpp"

using namespace std;


class FieldBase {
private:
    string empty_cell = " ";
    string wall_cell = "|";
    string floor_cell = "-";
    string snake_cell = "@";
    string tail_cell = "#";
    string apple_cell = "+";
    int m_direction = 3;
    bool apple_exists = false;
public:
    int field_width = 16;
    int field_height = 8;
    int field_size = field_width*field_height;
    string field[8*16] = {};
    int score = 0;

    FieldBase();
    void output_field() const;
    void move(int direction);
    void generate_apple();
private:
    int snake_pos = ((field_height / 2) * field_width) + (field_width / 2);
};

#include "FieldBase.cpp"
