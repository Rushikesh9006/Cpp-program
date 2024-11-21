#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream obj("fileOne.cpp");
	char ch;
	while(!obj.eof()){
		obj.get(ch);
		cout<<ch;
	}
}

