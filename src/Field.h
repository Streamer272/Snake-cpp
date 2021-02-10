#pragma once

using namespace std;


class Field {
private:
    string empty_cell = " ";
    string wall_cell = "|";
    string floor_cell = "-";
    string snake_cell = "@";
    string tail_cell = "#";
    string apple_cell = "+";

public:
    int field_width = 16;
    int field_height = 8;
    int field_size = field_width*field_height;
    mutable string field[8*16] = {};

private:
    int snake_pos = ((field_height / 2) * field_width) + (field_width / 2);
    mutable int m_direction = 3;
    vector<int> tail_pos;

public:
    int score = 0;
    bool playing = true;

public:
    Field();
    void render() const;
    void move(int direction);
    void generate_apple();
    bool check_if_dead(int new_x_pos, int new_y_pos);
    void get_pos_by_direction(int direction, int& m_new_x_pos, int& m_new_y_pos, int& new_pos) const;
};

#include "Field.cpp"
