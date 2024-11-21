#include <iostream>
using namespace std;

class Sample{
	const int data;
public:
	Sample(int x = 0):data(x){ //initializer list
		//inside/body the function 
	}

	void disp(){cout<<"data: "<<data<<endl;}	
};

int main(){
	Sample a=100;// default or single parameterized ctor
	Sample b = a; //copy ctor
	a.disp();
	b.disp();
}

