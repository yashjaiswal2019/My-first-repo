// this 

// create a matrix multiplier we will be given with two matrices and we will have to multiply them and print the result

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // creating 2 2D arrays to take in two given matrices 
    // matrix 1
    int r1 , c1;
    cout<<"matrix 1 rows = ";
    cin>>r1;
    cout<<"matrix 1 columns = ";
    cin>>c1;

    int matrix1 [r1][c1];

    for (int i=0 ; i<r1 ; i++){
        for (int j=0 ; j<c1 ; j++){
            cin>>matrix1[i][j];
        }
    }

    //mtrix 2 
    int r2 , c2;
    cout<<"matrix 2 rows = ";
    cin>>r2;
    cout<<"matrix 2 columns = ";
    cin>>c2;

    int matrix2 [r2][c2];

    for (int i=0 ; i<r2 ; i++){
        for (int j=0 ; j<c2 ; j++){
            cin>>matrix2[i][j];
        }
    }

    // matrix multiplication is only defined if matrix1 columns == matrix2 rows else they cant be multiplied

    if (c1!=r2){
        cout<<"matrices cant be multiplied for given input please enter a valid matrices for multiplication.";
        return 0;
    }

    // for matrix multiplication we multiply first matrix row elements with second matrix column elements respectively and add them.
    // resulting matrix will be of r1 x c2 
    int ansMatrix[r1][c2];

    for (int i=0 ; i<r1 ; i++){     // traversing on ans matrix
        for (int j=0 ; j<c2 ; j++){
            int anselement=0;

            // now multiplying the rows by column 
            for (int k=0 ; k<c1 ; k++){                         // becaue c1==r2 we can use any one of those 
                anselement += matrix1[i][k] * matrix2[k][j]; 
            }

            ansMatrix[i][j] = anselement;
        }
    }

    // printing the answer matrix 
    for (int i=0 ; i<r1 ; i++){
        for (int j=0 ; j<c2 ; j++){
            cout<<ansMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// Got it right in Retry - 1. 