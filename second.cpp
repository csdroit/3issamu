#include<iostream>
using namespace std;

void HourToMinute(float n){
	n*=60;
	cout << n;
};

void MinuteToSeconde(float n){
	n*=60;
	cout << n;
}

void HourToSeconde(float n) {
	n*=3600;
	cout << n;
}

int main(){
	int c;
	float x, y;
	
	cout << "Availabel choices : \n";
	cout << "\t1- Hour to minute \n";
	cout << "\t2- Minute to seconde \n";
	cout << "\t3- Hour to seconde \n";
	cin >> c;
	switch (c) {
		case 1:
			cout << "Enter the hour : ";
			cin >> x;
			HourToMinute(x);
			break;
		case 2:
			cout << "Enter the minute to change to seconde : ";
			cin >> x;
			MinuteToSeconde(y);
			break;
		case 3:
			cout << "Enter the hour to change to seconde : ";
			cin >> x;
			HourToSeconde(x);
			break;
		default:
			cout<< "the choice is inavailabel now" << endl;
			break;
	}
	return 0;
}


