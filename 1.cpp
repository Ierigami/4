#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	float arr[10];
	setlocale(0, "");
	ofstream fout("./numbers.txt");
	cout << "Введите 10 чисел\n";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		fout << arr[i] << " ";
	}
	fout.close();
	ifstream fin("./numbers.txt");
	float sum = 0;
	for (int i = 0; i < 10; i++) {
		fin >> arr[i];
		sum += arr[i];
	}
	fin.close();
	cout << sum;
	return 0;
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Priva
