#include<iostream>
using namespace std;
int main() {
	int num = 1;
	int sum;
	for (int i = 1; i <= 9; i++) {
		sum = (num + 1) * 2;
		num = sum;
	}
	cout << "�ܹ���" << sum << "����" << endl;
	return 0;
}