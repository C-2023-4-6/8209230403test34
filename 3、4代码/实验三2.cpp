#include<iostream>
#include<iomanip>
using namespace std;
 bool is_prime(int num) {
	 for (int i = 2; i < sqrt(num) + 1; i++) {
		 if (num % i == 0)
			 return false;
	}
	 return true;
}
 void printPrimeNumber(int numofprime) {
	 const int numberprime = 200;
	 const int line = 10;
	 int count = 0;
	 int number = 2;
	 while (count < numofprime) {
		 if (is_prime(number)) {
			 count++;
			 if (count % line == 0) {
				 cout << setw(5) << number << endl;
			 }
			 else
				 cout << setw(5) << number;
		 }
		 number++;
	 }
 }
 int main() {
	 cout << "前200个素数为" << endl;
	 printPrimeNumber(200);
	 return 0;
	 
 }