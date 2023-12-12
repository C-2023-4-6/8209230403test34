#include<iostream>
using namespace std;
void count(char* s1) {
	int j;
	int counts[26] = {};
	j = strlen(s1);

	for (int i = 0; i < 26; i++) {
		for (int k = 0; k < j; k++) {

			if ((s1[k] == 'a' + i) || (s1[k] == 'A' + i)) {
				counts[i]++;

			}
		}

	}
	for (int i = 0; i < 26; i++) {
		if (counts[i] > 0) {
			cout << (char)('a' + i) << ":" << counts[i] << "times" << endl;
	}
}
	
}
int main() {
	int size = 999;
	char* s1=new char[size];
	cout << "ÊäÈëÒ»´®×Ö·û£º" << endl;
	cin.getline(s1,size);
	count(s1);
	return 0;
}


