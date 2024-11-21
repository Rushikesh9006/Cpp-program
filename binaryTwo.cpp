#include<iostream>
using namespace std;

class Num{
	int data;
public:
	Num(int x = 0):data(x){}
	void disp(){cout<<"Data: "<<data<<endl;}

	friend Num operator+(const Num&, const Num&);
	friend Num operator-(const Num&, const Num&);
};

int main(){
	Num a = 10, b= 50, c = 100;
			
	Num res = b + c - a; //res = operator-(operator+(b, c), a);
   	a.disp();	
   	b.disp();	
   	c.disp();	
	res.disp();
}

Num operator+(const Num &lhs, const Num &rhs){
	Num res(lhs.data + rhs.data);
	return res;
}
Num operator-(const Num &lhs, const Num &rhs){
	Num res(lhs.data - rhs.data);
	return res;
}
