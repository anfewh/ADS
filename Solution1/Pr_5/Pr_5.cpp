#include <iostream>
using namespace std;

void showArr(int array[], int N) {
	for (int i = 0; i < N; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

void bubbleSort(int array[], int N) {
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0;j < N - 1 - i;j++) {
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

int binarySearch(int array[], int N, int whatFind) {
	int left = 0, right = N - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (array[mid] == whatFind) {
			return mid;
			break;
		}

		if (array[mid] < whatFind)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}

int interpolSearch(int array[], int N, int whatFind) {
	int a = 0;
	int b = N - 1;

	while(a <= b && whatFind >= array[a] && whatFind <= array[b])
	{
		int x = a + ((whatFind - array[a]) * (b - a)) / (array[b] - array[a]);

		if (array[x] == whatFind)
			return x;
		else if (array[x] < whatFind)
			a = x + 1;
		else 
			b = x - 1;
	}
	return -1;
}

int main() {
	srand(time(NULL));
	int N;
	do {
		cout << "Enter the number of array elements: ";
		cin >> N;
	} while (N < 1 && N > 100);
	
	int* array = new int[N];
	for (int i = 0; i < N; i++) {
		array[i] = rand() % 201 - 100;
	}
	bubbleSort(array, N);
	showArr(array, N);
	
	int whatFind;
	cout << "The value you want to find: ";
	cin >> whatFind;
	
	if (N <= 20) {
		int result = binarySearch(array, N, whatFind);
		if (result == -1) cout << "Not found.\n";
		else  cout << whatFind << " founded in element " << result << endl;
		
		cout << "The value you want to find: ";
		cin >> whatFind;

		result = binarySearch(array, N, whatFind);
		if (result == -1) cout << "Not found.\n";
		else  cout << whatFind << " founded in element " << result << endl;
	}
	else if (N <= 100 && N > 20) {
		int result = interpolSearch(array, N, whatFind);
		if (result != -1) cout << whatFind << " founded in element " << result << endl;
		else cout << "Sorry. Not found.\n";

		cout << "The value you want to find: ";
		cin >> whatFind;

		result = interpolSearch(array, N, whatFind);
		if (result != -1) cout << whatFind << " founded in element " << result << endl;
		else cout << "Sorry. Not found.\n";
	}



	delete[] array;
	return 0;
}


