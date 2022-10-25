#include <iostream>
using namespace std;


int main() {
	int y = 0;
	int k = 0;
	for (int i = 0; i <= 3; i++) {
		while (y < 49) {
			while (y % 12 != 0) {
				cout << '*';
				y++;
			}
			for (int j = 0; j <= 25; j++) {
				if (k > 0){
					cout << "-";
				}
			}
			y++;
			cout << "\n";
			if (y != 49) {
				cout << "*";
			}
			k++;
		}
		for (int e = 0; e <= 37; e++) {
			cout << "-";
		}
		cout << "\n";
	}
}
