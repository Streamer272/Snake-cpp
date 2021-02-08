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
    int m_direction = 3;
    vector<int> tail_pos;
    vector<int> old_tail_pos;

public:
    int field_width = 16;
    int field_height = 8;
    int field_size = field_width*field_height;
    string field[8*16] = {};

private:
    int snake_pos = ((field_height / 2) * field_width) + (field_width / 2);
    bool last_move_hit_apple = false;

public:
    int score = 0;
    bool playing = true;

public:
    Field();
    void render() const;
    void move(int direction);
    void generate_apple();
};

#include "Field.cpp"
