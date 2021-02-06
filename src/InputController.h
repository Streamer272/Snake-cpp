#pragma once

class Listener {
public:
    const bool is_key_valid(int ascii);
    void ask_input(void (*callback)(int ascii));
};


class InputController {
private:
    Listener* listener = nullptr;
    void* callback;
public:
    void add_listener(void (*callback)(int ascii));
    void remove_listener();
};
