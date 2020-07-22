#include <iostream>
using std::cout;

void scoped_enum() {
    enum class Color {
        white,
        black,
        red,
        green
    };
    Color myColor;
    myColor = Color::red;

    if (myColor == Color::red) {
        cout << "The color of my car is red!" << "\n";
    } else {
        cout << "The color of my car is not red." << "\n";
    }
}

void unscoped_enum() {
    enum Color {
        red,
        green,
        yellow,
        black
    };
    Color myColor;
    myColor = black;

    cout << myColor << "\n";
    
    if (myColor == black) {
        cout << "The color of my car is red!" << "\n";
    } else {
        cout << "The color of my car is not red." << "\n";
    }
}

void enum_switch() {
    enum class Keypad {up, down, left, right};

    Keypad input;
    input = Keypad::down;

    switch (input)
    {
    case Keypad::up:
        /* code */
        break;
    case Keypad::down:
        /* code */
        break;
    case Keypad::left:
        /* code */
        break;
    case Keypad::right:
        /* code */
        break;
    default:
        break;
    }
}

int main() {
    scoped_enum();
    unscoped_enum();
    enum_switch();
}