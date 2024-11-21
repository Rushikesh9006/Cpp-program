#include <iostream>
using namespace std;

void fun(int &&); //rvalue reference

int main(){
	fun(100);
}

void fun(int &&ref){ //rvalue reference
	ref+=10;
}

