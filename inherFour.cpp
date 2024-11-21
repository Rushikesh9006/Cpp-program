#include <iostream>
using namespace std;
class Base{
	public:
		Base(){cout<<"Base() called"<<endl;}
		Base(int x){cout<<"Base("<<x<<")called "<<endl;}
		void fun(){cout<<"Base::fun()"<<endl;}
		
		~Base(){cout<<"~Base() called"<<endl;}
};

class Derived:public Base{
public:
	Derived(){cout<<"Derived() called"<<endl; }
	Derived(int x):Base(x) {cout<<"Derived("<<x<<")called "<<endl;}

	~Derived(){cout<<"~Derived() called"<<endl; }
};

int main(){
	Derived d = 100; //
}
