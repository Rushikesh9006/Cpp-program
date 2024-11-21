#include <iostream>
#include <cstring>
using namespace std;

class MyString{
	int len;
	char *str;
public:
	MyString(){
		len = 0;
		str = nullptr;
	}
	MyString(const char *st){
		len = strlen(st);
		str = new char[len + 1];
		strcpy(str, st);
	}
	void disp(){
		cout<<"Len: "<<len;
		if (len != 0)	
			cout<<"\t\tStr: "<<str<<endl;
		else 
			cout<<"Empty string"<<endl;
	}	
	~MyString(){
		if (len!=0)
			delete []str;
		str = nullptr; 
		len = 0;
	}
};

int main(){
	MyString a = "Hello how are you"; //parameterized ctor
	a.disp();
}

