#include<iostream>
#include<iomanip>
using namespace std;
bool is_valid(double side1, double side2, double side3) {
	if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
		cout << "可构成三角形" << endl;
		return true;
	}
	else
	{
		cout << "不构成三角形" << endl;
		return false;
	}
}
double area(double side1, double side2, double side3) {
	double S, p;
	p = (side1 + side2 + side3) / 2;
	S = sqrt(p * (p - side1) * (p - side2) * (p - side3));
	return S;
}