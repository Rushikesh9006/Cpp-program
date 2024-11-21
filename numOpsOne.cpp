#include <iostream>
using namespace std;

int factorial(int );
void fibonacci(int);
int square(int);

int main(){
	int num = 10;
	int res = factorial(num);
	cout<<"Factorial of "<<num <<" is :"<<res<<endl;
	fibonacci(num);

	int sqr = square(num);
	cout<<"Square of "<<num <<" is :"<<sqr<<endl;
}

int factorial(int num){
	int res = 1;
	if (num >= 2)
		for (int cnt = 2 ; cnt <= num ; ++cnt)
			res *= cnt;
	return res;
}
void fibonacci(int num){
	int a=0, b=1;
	cout<<"Fibo of "<<num<<"\n"<<a<<" "<<b<<" ";
	for (int cnt = 2; cnt < num; ++cnt){
		int c = a + b;
		a = b;
		b = c;
		cout<<c<<" ";
	}
	cout<<endl;
}
int square(int num){
	return num * num;
}
