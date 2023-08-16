#include <iostream>

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int Largest = 0;
    string username = "username";


    cout << "\n\n Hi Welcome to Largest of three program! \n\n";
//Get user name
    cout << "\n\n Please enter your name: ";
    cin >> username;

    cout << "\n\n Welcome, lets get started " << username;

    cout << "\n\n Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;


if (num1 >= num2 & num1>= num3){
    cout << "The largest number is: " << num1;
} if (num2 >= num1 & num2 >= num3) {
    cout << "The largest number is:" << num2;
    }
    {if (num3 >= num1 & num3 >= num2)
        cout << "The largest number is: " << num3;
    }
     cout << "\n\n Congrats you got your answer! \n\n";








    return 0;
}
