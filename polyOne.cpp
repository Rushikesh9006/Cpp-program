#include <iostream>
using namespace std;
class Base{
	public:
	virtual	void fun(){cout<<"Base::fun()"<<endl;}
};

class Derived:public Base{
public:			
	void fun(){cout<<"Derived::fun()"<<endl; }
};

int main(){
	Base *ptr, bObj;
	Derived dObj; //
	ptr = &bObj; //addr of Base class object is stored
	ptr->fun();

	ptr = &dObj; //addr of Derived class object is stored
	ptr->fun();
}

