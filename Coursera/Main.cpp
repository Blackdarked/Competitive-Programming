#include<iostream>
#include<cstdlib>
using namespace std;

void clear_screen(void) {
#ifndef _WIN32
    system("cls");
#else
    system("clear");
#endif
}


void pause(void) {
    cin.clear();
    cin.ignore(256, '\n');
    cin.get();
}

int main(int argc, char* argv[]) {
    bool exit = false;
    while (!exit) {
        clear_screen();
        cout << "1: Print help\n"
            << "2: Print exchange stats\n"
            << "3: Place an ask\n"
            << "4: Place a bid\n"
            << "5: Print wallet\n"
            << "6: Exit"
            << "Type in 1-6:";

        int userOption;
        cin >> userOption;
        clear_screen();

        switch (userOption) {
        case 1:
            cout << "Help - your aim is to make money, analyze the market, and make bids and offers.\n";
            pause();
            break;
        case 2:
            cout << "Market looks great.\n";
            pause();
            break;
        case 3:
            cout << "Make an ask - Enter the amount:\n";
            pause();
            break;
        case 4:
            cout << "Make a bid - Enter the amount:\n";
            pause();
            break;
        case 5:
            cout << "Your wallet is empty.\n";
            pause();
            break;
        case 6:
            cout << "Goodbye.\n";
            exit = true;
        default:
            cout << "Invalid Input\n";
            pause();
            break;
        }
    }
    return 0;
}