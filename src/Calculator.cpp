/*
Imie i nazwisko:         Damian Koss
Numer indeksu:           293128
Prowadzacy laboratorium: Wiktor Kusmirek
Numer projektu:          1
*/

#include <iostream>
#include "../include/Calculator.h"

using namespace std;



Calculator::Calculator()
{
    resetUseLastResult();
}

void Calculator::printMenu()
{
    std::system("clear"); // in windows system("cls");

    cout<<"==Octagonal Calculator==";
    if(useLastResult)
    {
        cout<<endl<<"Your result for numbers: "<<std::oct<<number1<< " and "<<std::oct<<number2;
        cout<< " is " <<std::oct<<result<<endl;
    }
    else cout<<endl<<endl;

    cout<<"Choose action that you want to commit by pressing appriopraite number"<<endl; 
    cout<<"0 - Reset result"<< endl << "1 - Add" <<endl << "2 - Subtract" <<endl << "3 - Multiply"<<endl; 
    cout<<"4 - Divide"<< endl <<"5 - Exit"<<endl;
}
char Calculator::takeUserChoice()
{
    return userChoice;
}
void Calculator::chooseCalculatorMode()
{

    if(useLastResult)
    {
        takeNumbers(result,userChoice);
    }
    else
    {
        useLastResult = true;
        takeNumbers(userChoice);
    }

    takeNumbers(userChoice,number1);
}
void Calculator::takeNumbers(char symbol)//function takes two numbers from user 
{
    cout<<"Enter first octagonal number: ";
    cin>>std::oct>>number1;
    cout<<"Enter second octagonal number: ";
    cin>>std::oct>>number2;
}
void Calculator::takeNumbers(int lastResult,char symbol) //function takes one number from user and last result 
{
    number1 = lastResult;
    cout<<"Your first nubmer is your result:" <<std::oct<<number1<<endl;
    cout<<"Enter second octagonal number"<<endl;
    cin>>std::hex>>number2;
}
void Calculator::takeNumbers(char symbol,int lastNumber1)//if user wanted to divide by 0
{
    number1 = lastNumber1;
    while(symbol=='4' && number2 == 0)
    {
        std::system("cls");
        printMenu();
        cout<<'/'<<endl<<"You can not divide by 0, enter another octagonal number: "<<endl;
        cin>>std::oct>>number2;
    }
}
void Calculator::resetUseLastResult()
{
    useLastResult = false;
}
void Calculator::add()
{
    chooseCalculatorMode();
    result = number1+number2;
}

void Calculator::subtract()
{
    chooseCalculatorMode();
    result = number1-number2;
}

void Calculator::multiply()
{
    chooseCalculatorMode();
    result = number1*number2;
}

void Calculator::divide()
{
    chooseCalculatorMode();
    result = number1/number2;
}
