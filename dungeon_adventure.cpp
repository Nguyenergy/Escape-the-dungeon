#include <iostream>
#include <string>
using namespace std;

int main() {
    string choice;
    int action;

    // Introduction
    cout << "Welcome to 'Escape the Dungeon'!\n";
    cout << "You awaken in a cold, damp dungeon with only faint torchlight illuminating the stone walls.\n";
    cout << "Your mission: find a way out before it's too late.\n\n";

    // First decision point (nested if-else)
    cout << "You see two paths in front of you: Left or Right. Which way do you go? (left/right): ";
    cin >> choice;

    // Input validation for direction
    while (choice != "left" && choice != "right") {
        cout << "Invalid choice. Please type 'left' or 'right': ";
        cin >> choice;
    }

    if (choice == "left") {
        cout << "\nYou walk cautiously down the left corridor and find a heavy wooden door.\n";
        cout << "It's slightly open and you hear something inside...\n";

        // Second decision point using switch
        cout << "What do you do?\n";
        cout << "1. Enter the room quietly.\n";
        cout << "2. Slam the door open and surprise whatever is inside.\n";
        cout << "3. Turn around and go back.\n";
        cout << "Enter your choice (1-3): ";
        cin >> action;

        // Input validation for switch
        while (cin.fail() || action < 1 || action > 3) {
            cin.clear(); // clear input buffer
            cin.ignore(1000, '\n'); // ignore remaining input
            cout << "Invalid choice. Please enter a number between 1 and 3: ";
            cin >> action;
        }

        switch (action) {
            case 1:
                cout << "\nYou slip into the room quietly and find a sleeping guard. You sneak past him and escape. You win!\n";
                break;
            case 2:
                cout << "\nYou burst in loudly. The guard wakes up and captures you. Game over.\n";
                break;
            case 3:
                cout << "\nYou turn back but get lost in the maze-like dungeon. You wander until you collapse. Game over.\n";
                break;
        }
    } else if (choice == "right") {
        cout << "\nYou walk into a dark tunnel. The floor gives out beneath you and you fall into a pit of spikes. Game over.\n";
    }

    return 0;
}
