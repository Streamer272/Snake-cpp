#pragma once
#include <iostream>
#include <conio.h>
#include "InputController.h"

using namespace std;


const void InputController::ask_input(void (*callback)(int ascii)) {
    char key_press;
    int ascii;

    key_press = getch();
    ascii = key_press;

    callback(ascii);
}
