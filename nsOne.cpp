#include <iostream>
using namespace std;

namespace Mine{
	int var = 100;
	int fun();
}

namespace Yours{
	int var = 200;
	int fun();
}

namespace Ours{
	int var= 300;
	int fun();
}

int var = 500;
int fun();

int main(){
	cout<<"Mine..."<<Mine::var<<"\t: "<<Mine::fun()<<endl;
	cout<<"Yours..."<<Yours::var<<"\t: "<<Yours::fun()<<endl;
	cout<<"Ours..."<<Ours::var<<"\t: "<<Ours::fun()<<endl;
	cout<<"Global..."<<::var<<"\t: "<<::fun()<<endl;
}

int Mine::fun(){
	return 1;
}
int Yours::fun(){
	return 2;
}
int Ours::fun(){
	return 3;
}
int fun(){
	return 5;
}
