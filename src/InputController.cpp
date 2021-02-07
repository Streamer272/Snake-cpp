#pragma once
#include <iostream>
#include <windows.h>
#include "KeyDefinition.h"

using namespace std;


class InputController {
public:
    static const int ask_input() {
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
