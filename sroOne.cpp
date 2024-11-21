#include <iostream>
using namespace std;

int var = 100;

int main(){
	int var = 200;
	cout<<"var: "<<var<<endl;
	{//C Style
		extern int var;
		cout<<"var: "<<var<<endl;
	}
}
