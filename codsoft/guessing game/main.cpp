/* **********************************************************************
 Author name : Habiba Hatem Mohamed
   Project   : Number Guessing Game
   Task 1
************************************************************************ */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <thread>
#include <chrono>

void sleep(int milliseconds)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

using namespace std;
int main() {
    int randomNumber, guess, attempts = 0;
    string sent = "Welcome to the Number Guessing Game!\n" ;

    // Set the seed for the random number generator
    srand(time(0));
    // Generate a random number between 1 and 100
    randomNumber = rand() % 100 + 1;

    // To print sent with animation
    for ( int i = 0 ; i < 37 ; ++i)
   {
    cout << sent[i];
    sleep(30);
   }
    cout << "*************************************************\n\n";

    do {
        cout << "Enter your guess (1-100): ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber)
            {
            cout << "Too high! Try again.\n\n";
            }
        else if (guess < randomNumber)
            {
            cout << "Too low! Try again.\n\n";
            }
        else
            {
            cout << "\nCongratulations! You guessed the correct number in " << attempts << " attempts!\n\n";
            }
    } while (guess != randomNumber);

    // to print sent with animation
    sent = "GAME OVER";
     for ( int i = 0 ; i < 9 ; ++i)
   {
    cout << sent[i];
    sleep(80);
   }
   cout << "\n\n\n\n";
    return 0;
}
