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

void funCaller(Base *ptr){
	ptr->fun();
}

int main(){
	Base bObj;
	Derived dObj; //

	funCaller(&bObj);
	funCaller(&dObj);
}

