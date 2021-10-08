#include <set>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

class Calculator {
    public:
        multiset<char> arguments;
    public:
        void initialize();
        void loop();
        void add();
        void multiply();

};

int main() {
    Calculator calc;
    // calc.initialize();
    calc.loop();
    return 0;
};

void Calculator::loop() {
    char run = 'y';
    char lc = tolower(run);

    while (lc == 'y') {
        initialize();
        int choice;
        cout << "Select operation\n";
	    cout << "[1] Addition\n";
	    cout << "[2] Substraction\n";
	    cout << "[3] Product\n";
	    cout << "[4] Division\n";
        cin >> choice;

        switch (choice) {
            case 1: 
                add();
                break;
            case 3:
                multiply();
        }

        cout << "Do you want to continue? [Y/n]\n";
        cin >> run;
        if (tolower(run) == 'n') break;
    }

    cout << "Exiting program\n";
}

void Calculator::initialize() {
    arguments.clear();
    cout << "Enter your numbers seperated by a space :" << endl;
    cin.ignore();
    char str[500];
    cin.getline(str, 500);
    char * point = strtok(str, " ");
    while (point != NULL) {
        int num = stoi(point);
        arguments.insert(num);
        point = strtok(NULL, " ");
    };
};

void Calculator::add() {
    int sum = 0;
    for (int i : arguments) 
        sum += i;
    cout << "your sum is " << sum << endl;
};

void Calculator::multiply() {
    int mult = 1;
    for (int i : arguments) 
        mult *= i;

    cout << "your answer is " << mult << endl;
};
