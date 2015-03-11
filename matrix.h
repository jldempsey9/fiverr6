#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Matrix
{
public:
	Matrix();
	friend istream& operator>>(istream& in, Matrix& m);
	Matrix operator+(const Matrix& m);
	friend ostream& operator<<(ostream& out, Matrix& m);

private:
	vector < vector < int > > entries;
	int height;
	int width;


};

#endif
