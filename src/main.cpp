#include <iostream>
#include <string>
#include <unistd.h>
#include <vector>
#include <ctime> // dont delete, needed, just bug is IDE
#include "InnerSystem.cpp"
#include "Field.h"
#include "InputController.cpp"

using namespace std;


void start() {
    Field field;
    field.generate_apple();

    while (field.playing) {
        sleep(2);
        clear();
        field.render();
        usleep(250000);
        int keyboard_input = InputController::ask_input();
        field.move(keyboard_input);

    }

    cout << "GAME OVER WITH SCORE " << field.score << endl;
    system("pause");
}


int main() {
    start();

    return 0;
}
