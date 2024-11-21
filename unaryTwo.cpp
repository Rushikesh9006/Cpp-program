#include <iostream>
using namespace std;

class Num{
	int num;
public:
	Num(int x=0):num(x){}
	friend Num operator++(Num&, int);//fix
	friend Num& operator++(Num&);//pre-fix

	void disp(){
		cout<<"Num: "<<num<<endl;
	}
};

int main(){
	Num a = 10, b = 20;
	
	Num c = ++a;
	Num d = b++;

	a.disp();  b.disp(); 
	c.disp();  d.disp();
}

Num operator++(Num& obj,int){
	Num res = obj;
    obj.num++;
	return res;
}

Num& operator++(Num &obj){
	obj.num++;
	return obj;
}

