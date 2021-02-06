#pragma once

class Listener {
public:
    bool keep_listening = false;

    void listen(int (*callback)(char));
};


class InputController {
private:
    Listener* listener = nullptr;
public:
    void add_listener(int (*callback)(char));
    void remove_listener();
};
