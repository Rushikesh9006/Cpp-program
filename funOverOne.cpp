#include <iostream>
using namespace std;

void fun();
		
void fun(char);
void fun(int);
		
void fun(int, int);
void fun(int, double);
void fun(double, int);
void fun(double, double);

int main(){
	fun();

	fun('A');
	fun(123);

	fun(1234,345);
	fun(222, 234.34543);
	fun(123.234, 456);
	fun(123.345, 4444.33);
}
void fun(){
	cout<<"void fun()"<<endl;
}
void fun(char){
	cout<<"void fun(char)"<<endl;
}
void fun(int){
    cout<<"void fun(int)"<<endl;
}
void fun(int, int){
    cout<<"void fun(int,int)"<<endl;
}
void fun(int, double){
    cout<<"void fun(int,double)"<<endl;
}
void fun(double, int){
    cout<<"void fun(double,int)"<<endl;
}
void fun(double, double){
    cout<<"void fun(double,double)"<<endl;
}
