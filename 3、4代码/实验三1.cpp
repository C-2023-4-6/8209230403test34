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
	cout << "请输入两个自然数" << endl;
	cin >> m >> n;
	int maxg = max(m, n);
	int ming = min(m, n);
	cout << "最大公约数为：" << maxg << endl;
	cout << "最小公倍数为：" << ming << endl;

	return 0;
}