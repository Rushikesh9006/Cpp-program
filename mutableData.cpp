#include <iostream>
using namespace std;

class Sample{
	mutable int data;
public:
	Sample(int x = 0):data(x){ 
	}
	void disp(){
		data+=10;
		cout<<"data: "<<data<<endl;
	}	
	void disp()const {
		data+=10; //updating data inside const function
		cout<<"data: "<<data<<endl;
	}	
};

int main(){
	Sample a=100;
	a.disp();
	const Sample b = 200;
	b.disp();
}

