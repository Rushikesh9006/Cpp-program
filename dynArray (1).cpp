#include <iostream>
using namespace std;

int main(){
	cout<<"Enter the size of array: ";
	int size;
	cin>>size;

	int *ptr = new int[size];

	for(int cnt = 0; cnt < size;++cnt)
		ptr[cnt] = 101 + cnt;

	
	for(int cnt = 0; cnt < size;++cnt)
		cout<<ptr[cnt]<< "  ";
	cout<<endl;

	delete []ptr;
}
