#include "numOpsAbstraction.h"

//encapsulation
void NumOps::init(int var){
	num = var;
}
void NumOps::disp(){
	cout<<"Num : "<<num<<endl;
}
int NumOps::factorial(){
	int res = 1;
	if (num >= 2)
		for (int cnt = 2 ; cnt <= num ; ++cnt)
			res *= cnt;
	return res;
}
void NumOps::fibonacci(){
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
int NumOps::square(){
	return num * num;
}

