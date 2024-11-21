#include <iostream>
using namespace std;

int main(){
	int row,col;
	cout<<"Enter row and col size: ";
	cin>>row>>col;

	int **mat;
	//memory allocation part
	mat = new int *[row];
	for (int rCnt = 0; rCnt < row; ++rCnt)
		mat[rCnt] = new int[col];

	//filling part
	int num = 1;
	for (int rCnt = 0; rCnt < row; ++rCnt)
		for (int cCnt = 0; cCnt < col; ++cCnt)
			mat[rCnt][cCnt] = num++;

	//printing part
	cout<<"Matrix: "<<endl;
	for (int rCnt = 0; rCnt < row; ++rCnt){
		for (int cCnt = 0; cCnt < col; ++cCnt)
			cout<<mat[rCnt][cCnt]<<"  ";
		cout<<endl;
	}
	//de-allocation part
	for (int rCnt = 0; rCnt < row; ++rCnt)
		delete []mat[rCnt];
	delete []mat;
}
