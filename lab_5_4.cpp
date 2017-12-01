#include <iostream>

using namespace std;

int main() {

    int menu;

    cout << "Choose Program" << endl;
    cin >> menu;

    switch (menu) {
        case 1: cout << "Call Program 1" << endl; break;
        case 2: cout << "Call Program 2" << endl; break;
        case 3: cout << "Call Program 3" << endl; break;
        case 4: cout << "Call Program 4" << endl; break;
        case 5: cout << "Call Program 5" << endl; break;
        default : cout << "Error" << endl;
    }

    return 0;
}
