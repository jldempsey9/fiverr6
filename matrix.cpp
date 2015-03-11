#include "matrix.h"

using namespace std;


Matrix::Matrix()
{
	height = 0;
	width = 0;
}
istream& operator>>(istream& in, Matrix& m)
{
	in >> m.width;
	in >> m.height;
	for (int i = 0; i < m.height; i++)
	{
		vector<int> temp;
		m.entries.push_back(temp);
		for (int j = 0; j < m.width; j++)
		{
			int x;
			in >> x;
			m.entries[i].push_back(x);
		}
	
	}
}

Matrix Matrix::operator+(const Matrix& m)
{
	for (int i = 0; i < this->height; i++)
	{

		for (int j = 0; j < this->width; j++)
		{
			this->entries[i][j] = this->entries[i][j] + m.entries[i][j];
		}
	
	}
	
	Matrix temp = Matrix();
	temp = *this;
	temp.width = this->width;
	temp.height = this->height;
	return temp;
}

ostream& operator<<(ostream& out, Matrix& m)
{
	for (int i = 0; i < m.height; i++)
	{

		for (int j = 0; j < m.width; j++)
		{
			out << m.entries[i][j];
			out << '\t';
		}
		out << endl;
	}
}







