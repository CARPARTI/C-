// Arrayss.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

double power(double num1, double num2) {
    int result = 1;

    for (int i = 0; i < num2; i++) {
        result = result * num1;
    }

    return result;
}


int main()
{
    double num1, num2;
    char op;
    double answer{};
    string reset;



    while (reset != "yes")
    {
        cout << "Enter first number: " << endl;
        cin >> num1;
        cout << "Enter Operator: " << endl;
        cin >> op;
        cout << "Enter first number:" << endl;
        cin >> num2;

        if (op == '+') {
            answer = num1 + num2;
        }
        else if (op == '-') {
            answer = num1 - num2;
        }
        else if (op == '*') {
            answer = num1 * num2;
        }
        else if (op == '/') {
            answer = num1 / num2;
        }
        else if (op == '^') {
            answer = power(num1,num2);
        }
        cout << "Answer is: " << answer << endl;
    }

    main();


}

