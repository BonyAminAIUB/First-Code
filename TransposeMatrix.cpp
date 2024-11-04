#include <iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout << "Enter row number: ";
    cin >> r;
    cout << "Enter column number: ";
    cin >> c;
    int array1[r][c], array2[r][c];
    cout << "Enter array: ";
    for(i = 0; i<r; i++){
        for(j = 0; j<c; j++){
            cin >> array1[i][j];
        }
    }
    cout << "Initial Matrix: " << endl;
    for(i = 0; i<r; i++){
        for(j = 0; j<c; j++){
           cout << array1[i][j] << " ";
        }
        cout << endl;
    }
    for(i = 0; i<r; i++){
        for(j = 0; j<c; j++){
           array2[j][i] = array1[i][j];
        }
    }
    cout << "Transpose Matrix: " << endl;
    for(i = 0; i<r; i++){
        for(j = 0; j<c; j++){
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }
   
    return 0;
}