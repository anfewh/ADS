#include <iostream>
using namespace std;
int linSearch(int arr[], int requiredKey, int arrSize) {
	for (int i = 0; i < arrSize; i++) {
		if (arr[i] == requiredKey)
			return i;
	}
	return -1;
}

int numPair(int arr[], int count, int arrSize) {
	for (int i = 0; i < arrSize; i++) {
		if (arr[i] % 2 == 0)
			count++;
	}
	return count;
}

void showArr(int arr[], int arrSize) {
	for (int i = 0; i < arrSize; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{ 
	const int arrSize = 10;
	int arr[arrSize];
	for (int i = 0; i < arrSize; i++) {
		cout << "arr[" << i + 1 << "] = ";
		cin >> arr[i];
	}

	showArr(arr, arrSize);

	int requiredKey = 0;
	cout << "The number you need to find: ";
	cin >> requiredKey;

	int elementIndex = 0;
	elementIndex = linSearch(arr, requiredKey, arrSize);

	if (elementIndex != -1) {
		cout << "Number found in the " << elementIndex + 1 << "th position.\n";
	}
	else {
		cout << "Number not found.\n";
	}

	int count = 0;
	int numberOfPaired = numPair(arr, count, arrSize);
	cout << "The number of paired elements: " << numberOfPaired << endl;

	return 0;
}
