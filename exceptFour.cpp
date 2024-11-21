#include <iostream>
using namespace std;

void createArray(int);

int main(){
	createArray(10);
	createArray(100);
	createArray(-10);
	createArray(20);
}

void createArray(int size){
	try {
		if (size<=0)
			throw size;
		int *ptr = new int[size];
	
		for(int cnt = 0; cnt < size;++cnt)
			ptr[cnt] = 101 + cnt;

	
		for(int cnt = 0; cnt < size;++cnt)
			cout<<ptr[cnt]<< "  ";
		cout<<endl;

		delete []ptr;
   	}catch(int size){
		cout<<"Exception: Size cannot be "<<size<<endl;
	}
}
