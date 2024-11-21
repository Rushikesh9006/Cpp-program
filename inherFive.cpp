#include <iostream>
using namespace std;

class A{
	int a;
};

class B:public A{
	double c;
};

class C: public B{
	float b;
};

int main(){
	cout<<"Size A: "<<sizeof(A)<<endl;
	cout<<"Size B: "<<sizeof(B)<<endl;
	cout<<"Size C: "<<sizeof(C)<<endl;
}
