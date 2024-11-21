#include "fun.h"
void fun(){
	extern int gvar; //declaration
	printf("fun() called...global: %d\n", gvar);	
}
