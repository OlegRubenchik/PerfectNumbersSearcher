/** /file perf_nums.cpp
* /brief Search for perfect number.
* /version 1.0
* /date 12/03/2024
* /author Oleg Rubenchik
*/

#include <iostream>
using namespace std;


//	PROTOTYPES
void searchForPerfNums(const int UpBorder);


/**
* Function <code>main</code> Interface.
* <BR>
* @return Returns 0.
*/
int main() {
	int num;
	cout << "Enter till what number you want to search: ";
	cin >> num;
	searchForPerfNums(num);
	return 0;
	
}
/**
* Function <code>searchForPerfNums</code> Searches for perfect numbers.
* <BR>
* @param UpBorder Upper border of the range of numbers.
*/
void searchForPerfNums(const int UpBorder) {
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