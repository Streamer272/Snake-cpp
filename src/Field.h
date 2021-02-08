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

private:
    mutable int m_direction = 3;

public:
    int field_width = 16;
    int field_height = 8;
    int field_size = field_width*field_height;
    string field[8*16] = {};

private:
    int snake_pos = ((field_height / 2) * field_width) + (field_width / 2);

public:
    int score = 0;
    bool playing = true;

public:
    Field();
    void render() const;
    void move(int direction);
    void generate_apple();
    tuple<int, int, int> get_pos_by_direction(int direction) const;
};

#include "Field.cpp"
