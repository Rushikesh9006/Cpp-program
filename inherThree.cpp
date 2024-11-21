#include <iostream>
using namespace std;
class Base{
	public:
		Base(){cout<<"Base() called"<<endl;}
		void fun(){cout<<"Base::fun()"<<endl;}
		~Base(){cout<<"~Base() called"<<endl;}
};

class Derived:public Base{
public:
	Derived(){cout<<"Derived() called"<<endl; }
	~Derived(){cout<<"~Derived() called"<<endl; }
};

int main(){
	Derived d; //
}
