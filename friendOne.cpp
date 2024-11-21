#include <iostream>
using namespace std;

class Sample{
	int data;
	Sample(int x=0):data(x){}
	void disp(){cout <<"Data: "<<data<<endl; }

	friend int main();
};

int main(){
	Sample s = 100;
	s.disp();
	s.data = 200;
	s.disp();
}
