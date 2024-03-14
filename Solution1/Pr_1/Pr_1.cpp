#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "TASK 1.\n";
    int array[3];
    for (int i = 0; i < 3; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "Numbers belonging to the interval from 1 to 6: ";
    for (int i = 0; i < 3; i++) {
        if (array[i] > 0 && array[i] < 7) {
            cout << array[i] << " ";
        }
    }
    cout << endl;


    cout << endl << "TASK 2.\n";
    int arr[3];
    for (int i = 0; i < 3; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
    }

    int minIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    cout << "Minimum: " << arr[minIndex] << endl;


    cout << endl << "TASK 3.\n";
    int n;
    do {
        cout << "Type the number of numbers: ";
        cin >> n;
        if (n < 1) {
            cout << "Incorrect value. ";
        }
    } while (n < 1);

    double sum = 0;
    for (int i = 0; i < n; i++) {
        double val = pow(-2, -i);
        cout << val << " ";
        sum += val;
    }
    cout << endl << "Their sum: " << sum << endl;


    cout << endl << "TASK 4.\n";
    int number;
    do {
        cout << "Type a number: ";
        cin >> number;
        if (number < 2) {
            cout << "Incorrect value. ";
        }
    } while (number < 2);

    int i = 2;
    while (i <= number) {
        if (number % i == 0) {
            cout << "Smallest natural divisor: " << i << endl;
            break;
        }
        i++;
    }


    cout << endl << "TASK 5.\n";
    int N;
    do {
        cout << "Type the number of numbers: ";
        cin >> N;
        if (N < 1) {
            cout << "Incorrect value. ";
        }
    } while (N < 2);

    int* fibonacciSeries = new int[N];
    fibonacciSeries[0] = 0;
    fibonacciSeries[1] = 1;
    for (int i = 2; i < N; i++) {
        fibonacciSeries[i] = fibonacciSeries[i - 1] + fibonacciSeries[i - 2];
    }
    for (int i = 0; i < N; i++) {
        cout << fibonacciSeries[i] << " ";
    }
    cout << endl;
    delete[]fibonacciSeries;


    cout << endl << "TASK 6.\n";
    cout << "Guess a number from 0 to 20.\n";

    srand(time(0));
    int randomNumber = rand() % 21;
    int propNum, count = 0;
    do {
        cout << "Enter a number from 0 to 20: ";
        cin >> propNum;
        if (propNum < 0 || propNum > 20) {
            cout << "Wrong value. ";
        }
        else if (propNum < randomNumber) {
            cout << "Proposed number is less than the planned one. ";
            count++;
        }
        else if (propNum > randomNumber) {
            cout << "Proposed number is higher than the planned one. ";
            count++;
        }
    } while (propNum < 0 || propNum > 20 || propNum != randomNumber);

    cout << "You guessed the number out of " << count + 1 << " times.";

    return 0;
}



