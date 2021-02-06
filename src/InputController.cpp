#pragma once
#include <iostream>
#include <conio.h>
#include "InputController.h"

using namespace std;

const bool Listener::is_key_valid(int ascii) {
    if (ascii == 72 || ascii == 75 || ascii == 80 || ascii == 77) {
        return true;
    }

    return false;
}

void Listener::ask_input(void (*callback)(int ascii)) {
    char key_press;
    int ascii;

    do {
        key_press = getch();
        ascii = key_press;
    } while (!is_key_valid(ascii));

    callback(ascii);
}

void InputController::add_listener(void (*callback)(int)) {
    if (listener != nullptr) {
        cerr << "Error: Listener aleady exists" << endl;
    }

    Listener ls;
    listener = &ls;
}

void InputController::remove_listener() {
    if (listener == nullptr) {
        cerr << "Error: Cant remove non existing listener" << endl;
    }

    listener = nullptr;
}
