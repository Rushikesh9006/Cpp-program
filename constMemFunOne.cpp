#include <iostream>
using namespace std;

class Sample{
	int data;
public:
	Sample(int x = 0):data(x){ //initializer list
	}

	void disp()const {cout<<"disp()const data: "<<data<<endl;}	

	void disp(){cout<<"disp() data: "<<data<<endl;}	
};

int main(){
	Sample a=100;
	a.disp();
	
	const Sample b = 200;
	b.disp();

}

