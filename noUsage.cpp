#include "numOpsAbstraction.h"

int main(){
	NumOps var;//usage 
	var.init(10);
	int res = var.factorial();
	cout<<"Factorial is :"<<res<<endl;
	var.fibonacci();
	int sqr = var.square();
	cout<<"Square  is :"<<sqr<<endl;
}
