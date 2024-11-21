#include <iostream>
using namespace std;

int main(){
	int var = 10;
	cout<<"var: "<<var<<"\t\t&var: "<<&var<<endl;
	int &ref = var;
	cout<<"ref: "<<ref<<"\t\t&ref: "<<&ref<<endl;
	var += 10;
	cout<<"var: "<<var<<"\t\t&var: "<<&var<<endl;
	cout<<"ref: "<<ref<<"\t\t&ref: "<<&ref<<endl;
	ref+=10;
	cout<<"var: "<<var<<"\t\t&var: "<<&var<<endl;
	cout<<"ref: "<<ref<<"\t\t&ref: "<<&ref<<endl;
}
