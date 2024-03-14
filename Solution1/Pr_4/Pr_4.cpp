#include <iostream>
using namespace std;

void showArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

bool isSorted(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] < arr[i + 1])
			return false;
	}
	return true;
}

void bubbleSort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0;j < size - 1 - i;j++) {
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int binarySearch(int arr[], int n, int x) {
	int left = 0, right = n - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;
		cout << "Left: " << left << " Right: " << right << " Middle: " << mid << endl;
		if (arr[mid] == x) {
			return mid;
		}

		if (arr[mid] > x)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}


int main()
{
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 51 - 25;
	}

	cout << "Initial array: ";
	showArr(arr, size);

	if (isSorted(arr, size)) {
		cout << "The array is sorted.\n";
	}
	else {
		cout << "The array is not sorted.\n";
		bubbleSort(arr, size);
		cout << "Sorted array: ";
		showArr(arr, size);
	}

	int x;
	cout << "The number you need to find: ";
	cin >> x;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, n, x);

	if (result == -1) cout << "The number is not found.\n";
	else  cout << "The number is found in " << result + 1 << "th position.\n";

	return 0;
}
