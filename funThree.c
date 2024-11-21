#include "fun.h"

static int svar = 100;
int gvar = 200;

void funThree(int a,int b, int c){
	printf("funThree(%d,%d, %d) called...\n",  a, b, c);	
}

void funFour(){
	printf("funFour() called with static: %d\t global:%d\n", svar, gvar);
}

