#include<iostream>
using namespace std;

class Num{
	int data;
public:
	Num(int x = 0):data(x){}
	void disp(){cout<<"Data: "<<data<<endl;}

	Num operator+(const Num &obj){
		Num res(data + obj.data);
		return res;
	}
	Num operator-(const Num &obj){
		Num res(data - obj.data);
		return res;
	}
	Num operator*(const Num &obj){
		Num res(data * obj.data);
		return res;
	}
	Num operator/(const Num &obj){
		Num res(data / obj.data);
		return res;
	}
	Num operator%(const Num &obj){
		Num res(data % obj.data);
		return res;
	}
};


int main(){
	Num a = 10, b= 50, c = 100;

	Num res = b + c - a; //res = b.operato+(c).operator-(a);
   	a.disp();	
   	b.disp();	
   	c.disp();	
	res.disp();
}

