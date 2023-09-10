/* ********************************************************************
 Author name : Habiba Hatem Mohamed
   Project   : Simple Calculator
   Task 2
********************************************************************** */

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

void sleep(int milliseconds)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

int main() {
    float no1, no2;
    char arithmetic;
    string sent = "C A L C U L A T O R\n" ;

     for ( int i = 0 ; i < 20 ; ++i)
   {
    cout << sent[i];
    sleep(30);
   }

    cout << "\n\n\n\n\n";

    cout << "Enter first number:\t ";
    cin >> no1;
    cout << "\n\n";

    cout << "Enter operator (+, -, *, /):\t ";
    cin >> arithmetic ;
    cout << "\n\n";

    cout << "Enter second number:\t ";
    cin >> no2;
    cout << "\n\n";


    switch(arithmetic) {
        case '+':
            cout << no1 << " + " << no2 << " = " << no1 + no2;
            break;
        case '-':
            cout << no1 << " - " << no2 << " = " << no1 - no2;
            break;
        case '*':
            cout << no1 << " * " << no2 << " = " << no1 * no2;
            break;
        case '/':
            if(no2 != 0) {
                cout << no1 << " / " << no2 << " = " << no1 / no2;
            } else {
                cout << "Error: Division by zero!";
            }
            break;
        default:
            cout << "Error: Invalid operator!";
            break;
    }
    cout << "\n\n\n\n\n";

    return 0;
}
