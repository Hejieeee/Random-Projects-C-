#include <iostream>


int  main (void){
    using  namespace std;

    char operation;
    int a, b, result;

    cout << "What operation you wanna use? (/, *, +, -)";
    cin >> operation;

    cout  << "Enter number 1: ";
    cin >> a;

    cout << "Enter number 2: ";
    cin >> b;

    switch(operation){
        case '+':
        result = a + b;
        cout << result;
        break;

        case '-':
        result = a - b;
        cout << result;
        break;

        case '/':
        result = a/b;
        cout << result;
        break;

        case '*':
        result = a * b;
        cout << result;
        break;

        default:
        cout << "Please enter  the desired operation. (/, *, +, -)";
        break;
    }
    return 0;
}
