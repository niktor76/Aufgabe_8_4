#include <iostream>

using namespace std;

void hexadecimal(int number) {
    cout << "Die Zahl lautet hexadezimal: " << hex << number << endl;
}

void octal(int number) {
    cout << "Die Zahl lautet oktal: " << oct << number << endl;
}

void decimal(int number) {
    cout << "Die Zahl lautet dezimal: " << dec << number << endl;
}

int main() {
    int number;
    int numberSystem;
    void (*pfunk[])(int) = {hexadecimal, octal, decimal};

    cout << "Bitte eine Zahl eingeben: ";
    cin >> number;

    do {
        cout << "1: hex" << endl;
        cout << "2: okt" << endl;
        cout << "3: dez" << endl;
        cout << "0: exit" << endl;
        cout << "Welche Umwandlung (1..3): ";
        cin >> numberSystem;

        if (numberSystem == 0) {
            return 0;
        }

        if ((numberSystem > 0) && (numberSystem < 4)) {
            pfunk[numberSystem - 1](number);
            cout << endl;
        } else {
            cout << "Ungueltige Eingabe!" << endl << endl;
        }
    } while (true);
}
