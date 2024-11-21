#include<iostream>
using namespace std;

class Num{
	int data;
public:
	Num(int x = 0):data(x){}
	friend ostream& operator <<(ostream& out, const Num &obj){
		cout<<"Data: "<<obj.data<<endl;
		return out;
	}

	friend Num operator+(const Num&, const Num&);
	friend Num operator-(const Num&, const Num&);
};


int main(){
	Num a = 10, b= 50, c = 100;

	Num res = b + c - a; //res = b.operato+(c).operator-(a);
	cout<<a<<b<<c<<res; //insertion operator (<<)
}

Num operator+(const Num &lhs, const Num &rhs){
	Num res(lhs.data + rhs.data);
	return res;
}

Num operator-(const Num &lhs, const Num &rhs){
	Num res(lhs.data - rhs.data);
	return res;
}
