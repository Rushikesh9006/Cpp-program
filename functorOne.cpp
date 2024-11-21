#include<iostream>
using namespace std;

class Sample{
	int data;
public:
	Sample (int x = 0):data(x){}
	void operator()(){
		cout<<"data: "<<data<<endl;
	}

	void operator()(int x){
		data = x;
		cout<<"data: "<<data<<endl;
	}
};

int main(){
	Sample a = 100;
	a();
	a(500);
}

