#include <iostream>
using namespace std;

class Sample{
	int data;
	static int statData; //shareable member declared here
public:
	Sample(int x = 0):data(x){ 
	}
	static int &getStatData(){
		return statData;
	}
	void disp(){cout<<"data: "<<data<<"\t\tstatData: "<<statData<<endl;}	
};

int main(){
	Sample a=100;// default or single parameterized ctor
	a.disp();

	Sample b = 200;
	b.disp();

	cout<<"Printing stat data: "<< Sample::getStatData()<<endl;
}

int Sample::statData; //definition
