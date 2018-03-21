/*
Imie i nazwisko:         Damian Koss
Numer indeksu:           293128
Prowadzacy laboratorium: Wiktor Kusmirek
Numer projektu:          1
*/

/*
In the project there is none protection of wrong input. 
Calculator is working properly only for positive octagonal numbers.
*/

#include <iostream>
#include "../include/Calculator.h"

using namespace std;

istream& operator>> (istream& input,Calculator& calculator)
{
    input>>calculator.userChoice;
    return input;
}
ostream& operator<< (ostream& output,Calculator& calculator)
{
    output<<calculator.number1<<" and "<<calculator.number2;
    return output;
}

Calculator calculator;

int main()
{
    while(1)
    {
        calculator.printMenu();

        cin>>calculator;

        switch(calculator.takeUserChoice())
        {
 	case '0':

            calculator.resetUseLastResult();
            break;

        case '1':

            calculator.add();
            break;

        case '2':

            calculator.subtract();
            break;

        case '3':

            calculator.multiply();
            break;

        case '4':

            calculator.divide();
            break;

        case '5':
	    
	    cout<<"Last to numbers that you've used are: "<<calculator<< endl; 
            cout<<"Thank you for using my calculator. Have a nice day!."<<endl; 
            return 0;
            break;

        default:


            continue;

        }
    }

    return 0;

}
