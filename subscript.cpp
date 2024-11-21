#include <iostream>
using namespace std;

class Array{
	int *arr;
	int size;
public:
	Array();//with no arguments 
	Array(int x);//with one argument
	void fillArray(int start = 1);
	int getSize(){return size;}
	int &operator[](int pos){
		return arr[pos];
	}
	~Array();
};	
int main(){
	Array obj(100); 
	obj.fillArray(101);
	for (int cnt = 0; cnt < obj.getSize(); ++cnt)
		cout<<obj[cnt]<<" "; //obj.operator[](cnt);
	cout<<endl;
}

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
Array::~Array(){
	if (size != 0)
		delete []arr;
	size = 0;
	arr = 0;
}
