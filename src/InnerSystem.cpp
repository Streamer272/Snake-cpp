#pragma once

using namespace std;

char stoch(string str) {
    char* char_arr;
    string str_obj(std::move(str));
    char_arr = &str_obj[0];
    return *char_arr;
}

void clear() {
    system("clear");
}
