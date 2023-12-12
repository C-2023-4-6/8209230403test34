#include<iostream>
#include<iomanip>
#include "mytriangle.h"

using namespace std;


int main() {
	double side1, side2, side3;

	cout << "输入三角形三边长" << endl;
	cin >> side1 >> side2 >> side3;

	if (is_valid(side1, side2, side3)) {
		area(side1, side2, side3);
		cout << "三角形面积为" << area(side1, side2, side3) << endl;
	}
	else {
		cout << "error" << endl;
	}
	return 0;
}
