/* EXERCISE 

Write a program verifySymmetry that checks if a matrix is symmetric. The function returns true if the matrix passed as argument is symmetric, false otherwise. Then it prints the result of the check to the output. [HINT: a symmetric matrix is a SQUARE matrix whose elements are symmetric with respect to the main diagonal.] Example:
					1 2 3
					2 0 5
					3 5 4
*/

#include <iostream>
using namespace std;

const int N = 4;

int main()
{
	int matrix[N][N];
	
	cout << "Enter the elements of a " << N << " x " << N << " matrix: " << endl;
	
	// FILL THE MATRIX
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			cin >> matrix[i][j];
	
	bool verifySymmetry = true;
	
	// CHECK IF IT IS SYMMETRIC
	for (int i = 0; i < N; ++i)
		for (int j = 0; j < N; ++j)
			if (matrix[i][j] != matrix[j][i])
				verifySymmetry = false;
			
	cout << "The given matrix " << (verifySymmetry ? "is" : "is not") << " symmetric \n";

}

/*int verifySymmetry(int matrix)
{
	int i, j = 0;
	if (matrix[i] = matrix[j]);

}*/
