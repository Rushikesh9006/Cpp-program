#include <iostream>
using namespace std;

class Array{
	int *arr;
	int size;
public:
	Array();//with no arguments 
	Array(int x);//with one argument
	void fillArray(int start = 1);
	void printArray();
	~Array();
};	
int main(){
	Array obj(100); //constructor with one argument is called
	obj.fillArray(101);
	obj.printArray();
}//obj object goes out of scope so destructor is called

Array::Array(){
	size = 0;
	arr = nullptr;
}
Array::Array(int x){
	size = x;
	arr = new int[size];	
}
void Array::fillArray(int start){
	for (int cnt = 0 ; cnt < size; ++cnt)	
		arr[cnt] = start + cnt;
}
void Array::printArray(){
	cout<<"Array: ";	
	for (int cnt = 0 ; cnt < size; ++cnt)	
		cout<<arr[cnt]<<" ";
	cout<<endl;
}		
Array::~Array(){
	if (size != 0)
		delete []arr;
	size = 0;
	arr = 0;
}
