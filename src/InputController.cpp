#pragma once
#include <windows.h>

#define UP_K 0x57
#define RIGHT_K 0x44
#define DOWN_K 0x53
#define LEFT_K 0x41

#define UP_V 0
#define RIGHT_V 1
#define DOWN_V 2
#define LEFT_V 3

#define None -1

using namespace std;


class InputController {
public:
    static int ask_input() {
        if (GetAsyncKeyState(UP_K) < 0) {
            return UP_V;
        }
        else if (GetAsyncKeyState(RIGHT_K) < 0) {
            return RIGHT_V;
        }
        else if (GetAsyncKeyState(DOWN_K) < 0) {
            return DOWN_V;
        }
        else if (GetAsyncKeyState(LEFT_K) < 0) {
            return LEFT_V;
        }

        return None;
    }
};
