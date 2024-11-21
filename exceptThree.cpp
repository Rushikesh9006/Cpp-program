#include <iostream>
using namespace std;

void createArray(int);

int main(){
	try {
		createArray(10);
		createArray(100);
		createArray(-10);
		createArray(20);
   	}catch(int size){
		cout<<"Exception: Size cannot be "<<size<<endl;
	}

}

void createArray(int size){
	if (size<=0)
		throw size;
	int *ptr = new int[size];

	for(int cnt = 0; cnt < size;++cnt)
		ptr[cnt] = 101 + cnt;

	
	for(int cnt = 0; cnt < size;++cnt)
		cout<<ptr[cnt]<< "  ";
	cout<<endl;

	delete []ptr;
}
