#include <iostream>
#include <stdexcept>
using namespace std;
//handling multiple exceptions in a single catch block
void createArray(int);

int main(){
	try{
		createArray(10);
		createArray(0);
		createArray(-10);
		createArray(20);
	}catch(const exception &e){
		cout<<"My message: "<<e.what()<<endl;
	}	
}

void createArray(int size){
	if (size<0)
		throw invalid_argument("No negatives please");
	else if (size == 0)
		throw runtime_error("always zeroes are heroes");
	else {
		cout<<"AT last a valid input"<<size<<endl;
		cout<<"I will let you know when array is created..."<<endl;
	}
}
