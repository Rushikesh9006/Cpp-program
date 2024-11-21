#include <iostream>
using namespace std;

class Num{
	int num;
public:
	Num(int x=0):num(x){}

	Num operator++(int);//post-fix
	Num& operator++();//pre-fix

	void disp(){
		cout<<"Num: "<<num<<endl;
	}
};

int main(){
	Num a = 10, b = 20;
	
	Num c = ++a;//c = 11, a = 11
	Num d = b++;//d = 20, b = 21

	a.disp();  b.disp(); 
	c.disp();  d.disp();
}

Num Num::operator++(int){
	Num res = *this;
	num++;
	return res;
}

Num& Num::operator++(){
	num++;
	return *this;
}

