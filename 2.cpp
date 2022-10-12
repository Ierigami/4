#include <iostream>;
#include <string>;
using namespace std;


void Check_sign(float x) {
	
	if (x < 0) {
		cout << "Минус";
	}
	else if (x == 0) {
		cout << "Ноль";
	}
	else {
		cout << "Плюс";
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите число: \n";
	float z;
	cin >> z;
	Check_sign(z);
	return 0;
}


