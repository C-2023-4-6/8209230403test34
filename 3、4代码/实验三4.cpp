#include<iostream>
#include<iomanip>
#include "mytriangle.h"

using namespace std;


int main() {
	double side1, side2, side3;

	cout << "�������������߳�" << endl;
	cin >> side1 >> side2 >> side3;

	if (is_valid(side1, side2, side3)) {
		area(side1, side2, side3);
		cout << "���������Ϊ" << area(side1, side2, side3) << endl;
	}
	else {
		cout << "error" << endl;
	}
	return 0;
}
