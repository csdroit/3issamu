#include<iostream>
#include<string>
using namespace std;

class car {
	public:					//public access specifier
	int year;
	string model;
	int speed;
	car(int y, string m, int Speed);
	};

car::car(int y, string m, int Speed){
		year = y;
		model = m;
		speed = Speed -= 10;
	};


int main(){
	car Mycar(2018, "porche", 320);
	car Yourcar(2017, "tesla", 260);
	cout << "My car : " << Mycar.year << "  " << Mycar.model << "  " << Mycar.speed << "\n";
	cout << "Your car : " << Yourcar.year << "  " << Yourcar.model << "  " << Yourcar.speed << "\n";
	return 0;
}
