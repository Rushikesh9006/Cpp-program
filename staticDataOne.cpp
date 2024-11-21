#include <iostream>
using namespace std;

class Sample{
	int data;
	static int statData; //shareable member declared here
public:
	Sample(int x = 0):data(x){ 
	}

	void disp(){cout<<"data: "<<data<<"\t\tstatData: "<<statData<<endl;}	
};

int main(){
	Sample a=100;// default or single parameterized ctor
	a.disp();
}

int Sample::statData; //definition
