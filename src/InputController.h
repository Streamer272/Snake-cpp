#pragma once

class Listener {
public:
    bool keep_listening = false;

    void listen(void (*callback)(char));
};


class InputController {
private:
    Listener* listener = nullptr;
public:
    void add_listener(void (*callback)(char));
    void remove_listener();
};
