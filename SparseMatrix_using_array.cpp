//Implementation of Array Representation of Sparse Matrix using C++
#include<iostream>

using namespace std;

int main()
{
    // sparse matrix of class 5x6 with 6 non-zero values
    int sparseMatrix[5][6] =
    {
        {0 , 0 , 0 , 0 , 9, 0 },
        {0 , 8 , 0 , 0 , 0, 0 },
        {4 , 0 , 0 , 2 , 0, 0 },
        {0 , 0 , 0 , 0 , 0, 5 },
        {0 , 0 , 2 , 0 , 0, 0 }
    };
    
    
    // Printing original Matrix 
	cout<<"Original Matrix :\n";            
    for (int row = 0; row < 5; row++)
	{
        for (int column = 0; column < 6; column++)
         cout<<sparseMatrix[row][column]<<" ";
         cout<<endl;
		 }

   // Finding total non-zero values in the sparse matrix
    int size = 0;
    for (int row = 0; row < 5; row++)
        for (int column = 0; column < 6; column++)
            if (sparseMatrix[row][column] != 0)
                size++;
    
    // Defining result Matrix
    int resultMatrix[size][3];

    // Generating result matrix
    int k = 0;
    for (int row = 0; row < 5; row++)
        for (int column = 0; column < 6; column++)
            if (sparseMatrix[row][column] != 0)
            {
                resultMatrix[k][0] = row;
                resultMatrix[k][1] = column;
                resultMatrix[k][2] = sparseMatrix[row][column];
                k++;
            }

    // Displaying result matrix
    cout<<"Triplet Representation : "<<endl;
    for (int column=0; column<3; column++)
    {
        for (int row = 0; row<size; row++)
            cout<<resultMatrix[row][column]<<" ";

        cout<<endl;
    }
    return 0;
}

