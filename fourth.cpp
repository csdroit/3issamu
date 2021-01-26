
#include<iostream>
using namespace std;

int main() {
	int x = 0;
	for(int i; i < 1001; i++) {
		x += 2;
		cout << x << endl;
		if (x <= 2001) {
			cout << "Program finished" << "\n";
			break;
		}
	}
	return 0;
}

