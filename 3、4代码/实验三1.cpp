#include<iostream>
using namespace std;
int max(int a, int b) {
	if (b == 0)
		return a;
	else
		return max(b, a % b);
}

int min(int a, int b) {
	return (a * b) / max(a, b);
}

int main() {
	int m, n;
	cout << "������������Ȼ��" << endl;
	cin >> m >> n;
	int maxg = max(m, n);
	int ming = min(m, n);
	cout << "���Լ��Ϊ��" << maxg << endl;
	cout << "��С������Ϊ��" << ming << endl;

	return 0;
}