#include <iostream>
using namespace std;

void change(int &);

int main(){
	int var = 10;
	cout<<"Before: "<<var<<endl;
	change(var);
	cout<<"After : "<<var<<endl;
}

void change(int &var){
	var+=10;
}
