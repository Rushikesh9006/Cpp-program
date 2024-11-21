#include <iostream>
using namespace std;

int main(){
	string mesg;
	cout<<"Enter a lengthy string: ";
	getline(cin, mesg); //this cannot take multiple words
	cout<<"The lengthy mesg :"<<mesg<<"\t wit length: "<<mesg.size()<<endl;
}
