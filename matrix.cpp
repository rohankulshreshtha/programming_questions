/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define r 3
#define c 3


using namespace std;

void printMatrix(int arr[][c]) {

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}

void transposeMatrix(int arr[][c]){

    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

}

void rotateMatrix(int arr[][c]) {
    //considering square matrix
    int n = c;

    for(int i=0;i<n/2;i++){
        //first loop for square
        for(int j=i;j<n-i-1;j++){
            //now selecting four items to replace
            int temp = arr[i][j];
            arr[i][j] = arr[j][n-i-1];
            arr[j][n-i-1] = arr[n-i-1][n-j-1];
            arr[n-i-1][n-j-1] = arr[n-j-1][i];
            arr[n-j-1][i] = temp;
        }
    }
}

int main()
{
    int arr[][c] = {{1,2,3},{4,5,6},{7,8,9}};
    // transposeMatrix(arr);
    rotateMatrix(arr);
    printMatrix(arr);
    return 0;
}
