// this solution is buggy and wrong I have to retry it.

// find matrice multiplication of two given matrices

#include <iostream>
using namespace std;

int main()
{
    int r1 , c1 , r2 , c2;

    r1=r2=c1=c2=2;

    // we know how to take input for 2d vector so i am not writing code for that 
    // lets not increase code complexity. 

    int matrice1[r1][c1]={{1, 2 , 3} , {4 , 5, 6}};     // put matrice1 input here

    int matrice2[r2][c2]={{1, 2} , {3 , 4} , {5, 6}};   // put matrice2 input here


    if (c1!=r2){
        cout<<"marrices are invalid for matrice multiplication , please enter valid matrices";
        return 1;
    }

    // if given matrices are of r1 x c1 and r2 x c2 -> c1==r2 then 
    //  for M1-> row is fixed , column is iterating from 0 to c1-1 ==> M1 -> [0][0 to c1-1]
    // for M2 -> colunmn is fixed and row iterate from 0 to r2-1 ==>M2 -> [0 to r2-1 ][0]
    // all this for first element

    int ansMatrice[r1][c2];

    for (int i=0 ; i<r1 ; i++){
        for (int j=0 ; j<c2 ; j++){
            int anselement=0;
            // ansMatrice[i][j] = 
            // for the ans matrice's element have to use two elements 
            // one that goes on matrice one column and 2nd on second matrice rows

            // for (int k=0 ; k<c1 ; k++){          // iterates on matrice1 columns     }
            //     for (int l=0 ; l<r2 ; l++){      // iterates on matrice2 rows        }
            //         anselement += matrice1[i][k] * matrice2[l][j];                   }  ===> this was my first loop i written but this was wrong it multiplying for each element of matrice1 by
            //     }                                                                    }       every element of the respective column of matrice2
            // }                                                                        }

            for (int k=0 ; k<c1 ; k++){
                anselement += matrice1[i][k] * matrice2[k][j];
            }
            
            // assigning value to ans matrix element 
            ansMatrice[i][j]=anselement;
            
        }
    }

    // printing the ans matrice 

    for (int i=0 ; i<r1 ; i++){
        for (int j=0 ; j<c2 ; j++){
            cout<<ansMatrice[i][j]<<"  ";
        }
        cout<<endl;
    }
}

