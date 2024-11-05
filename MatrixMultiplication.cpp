#include <iostream>
using namespace std;
int main(){
    int r1,r2,c1,c2,i,j,k;
    cout << "Enter 1st matrix row and column number: ";
    cin >> r1 >> c1;
    cout << "Enter 2nd matrix row and column number: ";
    cin >> r2 >> c2;
    if(c1 != r2) {
        cout << "Matrix dimension do not match for multiplication" << endl;
        return 1;
    }
    
    // 1st matrix column number = 2nd matrix row number then it do multiply (c1=r2)
    int array1[r1][c1], array2[r2][c2], result[r1][c2];
    // Initialize the result matrix to zero
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
   
    cout << "Enter matrix 1: ";
    for(i = 0; i<r1; i++){
        for(j = 0; j<c1; j++){
            cin >> array1[i][j];
        }
    }
    cout << "Enter matrix 2: ";
    for(i = 0; i<r2; i++){
        for(j = 0; j<c2; j++){
            cin >> array2[i][j];
        }
    }
    cout << "Print Matrix 1: " << endl;
    for(i = 0; i<r1; i++){
        for(j = 0; j<c1; j++){
           cout << array1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "Print Matrix 2: " << endl;
    for(i = 0; i<r2; i++){
        for(j = 0; j<c2; j++){
           cout << array2[i][j] << " ";
        }
        cout << endl;
    }

    for(i = 0; i<r1; i++){ 
        for(j = 0; j<c2; j++){
            for(k = 0; k<c1; k++){
                result[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }
    cout << "Matrix Multiplication Result: " << endl;
    for(i = 0; i<r1; i++){
        for(j = 0; j<c2; j++){
            cout << result[i][j] << " ";// Result matrix = 1st matrix row and 2nd matrix column (r1=c2)
        }
        cout << endl;
    }
    
   
    return 0;
}