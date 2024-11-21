#include <iostream>
using namespace std;

class Sample{
	int data;
public:
	Sample():data(0){cout<<"Sample() called"<<endl; }
	Sample(int x):data(x){cout<<"Sample("<<x<<") called"<<endl; }

	Sample(const Sample &obj):data(obj.data){cout <<"copy Ctor"<<endl;}
	Sample(Sample &&obj):data(obj.data){cout <<"move Ctor"<<endl;}
	~Sample(){cout<<"~Sample()"<<endl;}
};

int main(){
	Sample a;
}
