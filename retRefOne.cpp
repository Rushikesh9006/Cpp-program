#include <iostream>
using namespace std;

int &fun(int &);


int main(){
	int var = 10;
	cout<<"Returned: "<<fun(var)<<endl;
	fun(var) += 100;
	cout<<"Returned: "<<fun(var)<<endl;
}

int &fun(int &arg){
	//logic here
	return arg;
}
