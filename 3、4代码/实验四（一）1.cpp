#include<iostream>
using namespace std;
int main() {
	cout << "enter ten numbers" << endl ;
	int a[10];
	int b[10];
	int c = 0;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < 10; i++) {
		bool isUnique = true;
		for (int j = 0; j < c; j++) {
			if (a[i] == b[j]) {
				isUnique = false;
				break;
			}
		}
		if (isUnique) {
			b[c] = a[i];
			c++;
		}
	}
	cout << "The distinct numbers are: " << endl;
	for (int i = 0; i < c; i++) {
		cout << b[i] << " ";
	}
	return 0;
}