#include<iostream>
using namespace std;

class Sample{
	int data;
public:
	Sample (int x = 0):data(x){}
	void disp(){
		cout<<"data: "<<data<<endl;
	}
	Sample* operator->(){
		return this;
	}
	void disp(int x){
		data = x;
		cout<<"data: "<<data<<endl;
	}
};

int main(){
	Sample a = 100;
	a.disp();
	a.disp(500);

	a->disp();
	a->disp(500);
}

