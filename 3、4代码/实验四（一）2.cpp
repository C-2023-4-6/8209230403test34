#include<iostream>
using namespace std;
void bubblesort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main() {
	int a[10];
	cout << "输入10个数：" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	int n = sizeof(a) / sizeof(a[0]);
	bubblesort(a, n);
	cout << "排序后";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}