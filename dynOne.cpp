#include <iostream>
using namespace std;

int main(){
	int *ptr = new int(10);//allocating and storing value
	cout <<"Address ptr: "<<ptr<<"\t\tValue *Ptr: "<<*ptr<<endl;
	delete ptr;//de-allocating 
}
