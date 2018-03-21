/*
Imie i nazwisko:         Damian Koss
Numer indeksu:           293128
Prowadzacy laboratorium: Wiktor Kusmirek
Numer projektu:          1
*/

#include <iostream>
using namespace std;

class Calculator
{
    
    int number1,number2,result;
    bool useLastResult;
    char userChoice;

    void chooseCalculatorMode();
    void takeNumbers(char symbol);// gets 2 numbers from user
    void takeNumbers(int lastResult,char symbol); //user wants to use last result; gets one number from user
    void takeNumbers(char symbol,int lastNumber1); //when user wants to divide by 0, program wants him to enter another number


public:
    Calculator();

    void printMenu();
    char takeUserChoice();
    void resetUseLastResult(); //user doesn't want to use last result

    void add();
    void subtract();
    void multiply();
    void divide();

    friend istream& operator>> (istream& input,Calculator& calculator);
    friend ostream& operator<< (ostream& output,Calculator& calculator);

};
