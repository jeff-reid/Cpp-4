#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int firstNum, secondNum;

    cout << "Enter two integers (1st integer must be < 2nd integer): " << '\n';
    cin >> firstNum >> secondNum;

    // (a)
    while (firstNum > secondNum) {
        cout << "The first int must be LESS THAN the second int: " << '\n';
        cin >> firstNum >> secondNum;
        if (firstNum < secondNum)
            break;
    }

    // (b)
    int odd = firstNum;
    while (odd < secondNum) {
        if (odd % 2 != 0) {
            cout << odd << endl;
        }
        odd++;
    }

    // (c)
    int even = firstNum;
    int evenSum = 0;
    while (even < secondNum) {
        if (even % 2 == 0)
            evenSum += even;
        even++;
    }
    cout << "Sum of all even numbers: " << evenSum << endl;

    // (d)
    cout << firstNum << " and " << secondNum << " and their squares between 1 and 10" << endl;
    int firstNumSquare = firstNum, secondNumSquare = secondNum;
    int counter = 1;
    while (counter <= 10) {
        cout << powl(firstNumSquare,counter) << "    " << powl(secondNumSquare,counter) << '\n';
        counter++;
    }

    // (e)
    int firstTemp = firstNum;
    double oddSquared = 0;
    while (firstTemp < secondNum) {
        if (firstTemp % 2 != 0)
            oddSquared += pow(firstTemp,2);
        firstTemp++;
    }
    cout << "Total sum of the square of the odd numbers between " << firstNum
                                                                  << " and "
                                                                  << secondNum
                                                                  << ":" << endl;
    cout << oddSquared << endl;

    // (f)
    cout << "Print uppercase letters:" << endl;
    char letters = 'A';
    while (firstNum < secondNum) {
        cout << letters << " ";
        firstNum++;
        letters++;
    }
    cout << endl;

}