#include <iostream>
using namespace std;

class MyDate{
	int dd, mm, yyyy;
public:
	void init(int,int,int);
	void print();

	int dayOfWeek();
	bool isLeap();
	int julianDay();
};

int main(){
	MyDate today;
	today.init(5,11,2024);
	int week = today.dayOfWeek();
	cout<<"is Leap: "<<today.isLeap()<<endl;
	cout <<"Julian :"<<today.julianDay()<<endl;
}

//Encapsulation part you guys do it....
