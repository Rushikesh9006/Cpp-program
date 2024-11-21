#include <iostream>
using namespace std;

class Num{
	int num;
public:
	Num(int x=0):num(x){}

	Num operator+(int num); // a + 100
	Num operator+(const Num&);// a + b
	friend Num operator+(int , const Num &); // 100 + a

	void disp(){
		cout<<"Num: "<<num<<endl;
	}
};

int main(){
	Num a = 10, b = 20;

	Num c = a + b; // a.operator+(b) 
	Num d;// = a + 100; //a.operator(100); //member function 
	d = 100  + a; //operator(int , a); //non-member function

	a.disp();  b.disp(); 
	c.disp();  d.disp(); 
	//cout << a;//non-member << member
	
}



Num operator+(int n, const Num &rhs){
	Num Res(n + rhs.num);
	return Res;
}

Num Num::operator+(int n){
	Num Res(num + n);
	return Res;
}

Num Num::operator+(const Num& rhs){
	Num Res(num + rhs.num);
	return Res;
}
