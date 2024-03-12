#include <iostream>
using namespace std;

void searchForPerfNums(int UpBorder);

int main() {
	int num;
	cout << "Enter till what number you want to search: ";
	cin >> num;
	searchForPerfNums(num);
	return 0;
	
}
void searchForPerfNums(int UpBorder) {
	bool flag = false;
	if (UpBorder >= 100000) flag = true;
	for (int i = 2; i <= UpBorder; i = i + 2) {
		if (flag){if (i == (UpBorder / 2)) cout << "Halfway there!" << '\n';}
			
		int sum = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				sum = sum + j;
			}
		}
		if (sum == i) {
			cout << i << endl;
		}

	}

}