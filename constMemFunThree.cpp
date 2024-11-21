#include <iostream>
using namespace std;
/*
 * This code has error where b.disp() on line 20 cannot call function
 * on line 12.
 *
 */
class Sample{
	int data;
public:
	Sample(int x = 0):data(x){ //initializer list
	}
	void disp(){cout<<"disp() data: "<<data<<endl;}	
};

int main(){
	Sample a=100;
	a.disp();
	
	const Sample b = 200;
	b.disp();

}

