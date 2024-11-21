#include <iostream>
using namespace std;

int var = 100;

int main(){
	int var = 200;
	cout<<"Local var: "<<var<<"\tGlobal var "<<::var<<endl;
}
