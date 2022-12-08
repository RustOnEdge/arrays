#include <iostream>
using namespace std;

// int main() {
// 	int a[5];
// 	int sum = 0;
// 	int value;
// 	int largest = INT_MIN;
// 
// 	for (int i = 0; i < 5; i++) {
// 
// 		cout << i + 1 << ": ";
// 		cin >> a[i];
// 		
// 		sum += a[i];
// 	}
// 	cout << endl;
// 
// // 	for (int i = 0; i < 5; i++) {
// // 		if (a[i] > largest) {
// // 			largest = a[i];
// // 		}
// // 	}
// 
// //	cout << largest;
// 
// 	for (int i = 0; i < 5; i++)
// 	{
// 		value = a[i];
// 		a[i] = a[4 - i];
// 		a[4 - i] = value;
// 	}
// 
// 	for (int i = 0; i < 5; i++) {
// 		cout << a[i];
// 	}
// 
// }

int* evenOddTransform(int arr[], int n) {
	int count = 1;

	while (count <= n) {
		for (int i = 0; i < 3; i++) {
			if (arr[i] % 2 == 0) {
				arr[i] -= 2;
			}

			else {
				arr[i] += 2;
			}
		}
		count++;
	}
	return arr;
}

int cars(int wheels, int bodies, int figures) {
	int c = 0;
	bool e = true;

	while (e) {
		if (wheels > 4) {
			if (bodies > 1) {
				if (figures > 2) {
					c++;
					wheels -= 4;
					bodies--;
					figures -= 2;
				}
				
				else {
					e = false;
				}
			}
			
			else {
				e = false;
			}
		}
		else {
			e = false;
		}
	}
	return c;
}


int main() {
	/*
	int arr[3] = { 3, 4, 9 };

	evenOddTransform(arr, 3);

	for (int i = 0; i < 3; i++) {
		cout << arr[i] << " ";
	}
	*/

	
	cout << cars(2, 48, 76) << endl;
	cout << cars(43, 15, 87);

}