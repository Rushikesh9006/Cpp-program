#include <iostream>
#include <stdexcept>
using namespace std;
//having multiple catch blocks
void createArray(int);

int main(){
	try{
		createArray(10);
		createArray(0);
		createArray(-10);
		createArray(20);
	}catch(const invalid_argument &e){
		cout<<"My message: "<<e.what()<<endl;
	}catch(const runtime_error &e){
		cout<<"Your message: "<<e.what()<<endl;
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
