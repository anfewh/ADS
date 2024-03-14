#include <iostream>
#include <math.h>
using namespace std;

int main() {
	cout << "TASK 1.\n";
	srand(time(NULL));
	const int size = 16;
	int X[size];
	for (int i = 0; i < size; i++) {
		X[i] = rand() % 51 - 25;
	}

	int M;
	cout << "Type M: ";
	cin >> M;
	int Y[size];
	int ySize = 0;
	for (int i = 0; i < size; i++) {
		if (abs(X[i]) > M) {
			Y[ySize] = X[i];
			ySize++;
		}
	}
	cout << "M = " << M << endl;
	cout << "Array X: ";
	for (int i = 0; i < size; i++) {
		cout << X[i] << " ";
	}
	cout << endl << "Array Y: ";
	for (int i = 0; i < ySize; i++) {
		cout << Y[i] << " ";
	}
	cout << endl;


	cout << endl << "TASK 2.\n";
	cout << "Input array: ";
	for (int i = 0; i < size; i++) {
		cout << X[i] << " ";
	}
	for (int i = 0; i < size; i++) {
		if (X[i] < 0)
			X[i] *= -1;
	}
	cout << endl << "Output array: ";
	for (int i = 0; i < size; i++) {
		cout << X[i] << " ";
	}
	cout << endl;


	cout << endl << "TASK 3.\n";
	int bills[] = { 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
	int amount;
	cout << "Enter the amount: ";
	cin >> amount;
	cout << "Disbursement of the amount:\n";
	for (int i = 0; i < 10; ++i) {
		int count = amount / bills[i];
		if (count > 0) {
			cout << bills[i] << ": " << count << " pcs.\n";
			amount -= count * bills[i];
		}
	}


	cout << endl << "TASK 4.\n";
	const int sizeFirArr = 5;
	const int sizeSecArr = 9;

	int firstArr[sizeFirArr];
	int secondArr[sizeSecArr];
	for (int i = 0; i < sizeFirArr; i++) {
		firstArr[i] = rand() % 51 - 25;
	}
	for (int i = 0; i < sizeSecArr; i++) {
		secondArr[i] = rand() % 51 - 25;
	}

	cout << "First array: ";
	for (int i = 0; i < sizeFirArr; i++) {
		cout << firstArr[i] << " ";
	}
	cout << endl << "Second array: ";
	for (int i = 0; i < sizeSecArr; i++) {
		cout << secondArr[i] << " ";
	}

	int thirdArr[sizeFirArr + sizeSecArr];
	for (int i = 0; i < sizeFirArr; i++) {
		thirdArr[i] = firstArr[i];
	}
	for (int i = 0; i < sizeSecArr; i++) {
		thirdArr[sizeFirArr + i] = secondArr[i];
	}

	for (int i = 0; i < sizeFirArr + sizeSecArr - 1; i++) {
		for (int j = 0; j < sizeFirArr + sizeSecArr - i - 1; j++) {
			if (thirdArr[j] > thirdArr[j + 1]) {
				int temp = thirdArr[j];
				thirdArr[j] = thirdArr[j + 1];
				thirdArr[j + 1] = temp;
			}
		}
	}

	cout << endl << "Sorted third array: ";
	for (int i = 0; i < sizeFirArr + sizeSecArr; i++) {
		cout << thirdArr[i] << " ";
	}
	cout << endl;

	return 0;
}


