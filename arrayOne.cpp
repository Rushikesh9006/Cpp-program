#include <iostream>
using namespace std;

class Array{
	int *arr;
	int size;
public:
	void init(int x=1);
	void fillArray(int start = 1);
	void printArray();
	void deInit();
};	

int main(){
	Array obj;
	obj.init(100);
	obj.fillArray(101);
	obj.printArray();
	obj.deInit();
}

void Array::init(int x){
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
void Array::deInit(){
	if (size != 0)
		delete []arr;
	size = 0;
	arr = 0;
}
