#include <iostream>
using namespace std;

class Sample{
	int data;
	Sample(int x=0):data(x){}
	void disp(){cout <<"Data: "<<data<<endl; }
	~Sample(){ }
	friend class Pointer;
};
class Pointer{
	Sample *sptr;
public:
	Pointer(int x = 0):sptr(new Sample(x)){}
	void disp(){ 
		sptr->disp(); 
	}
	~Pointer(){ delete sptr; }
};
int main(){
	Pointer obj=100;
	obj.disp();
}
