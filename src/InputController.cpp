//#pragma once
#include <iostream>
#include <conio.h>
#include "InputController.h"

using namespace std;

void Listener::listen(int (*callback)(char)) {
    char key_press;

    while (keep_listening) {
        key_press = getch();
        
        callback(key_press);
    }
}

void InputController::add_listener(int (*callback)(char)) {
    if (listener != nullptr) {
        cerr << "Error: Listener aleady exists" << endl;
    }

    Listener ls;
    listener = &ls;
    listener->keep_listening = true;
    listener->listen(callback);
}

void InputController::remove_listener() {
    if (listener == nullptr) {
        cerr << "Error: Cant remove non existing listener" << endl;
    }

    listener->keep_listening = false;
    listener = nullptr;
}
