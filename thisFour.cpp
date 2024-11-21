#include <iostream>
using namespace std;

class Sample{
	int data;
public:
	Sample(int x = 0):data(x){}

	void disp(){
		cout<<"Data: "<<data<<endl;
	}	
	Sample &Add(const Sample &obj){
		this->data += obj.data;
		return *this;
	}
	Sample &Sub(const Sample &obj){
		this->data -= obj.data;
		return *this;
	}
	Sample &Mult(const Sample &obj){
		this->data *= obj.data;
		return *this;
	}
};

int main(){
	Sample a = 10, b = 20, c = 30;
	a.Add(b).Mult(c).disp();
}
