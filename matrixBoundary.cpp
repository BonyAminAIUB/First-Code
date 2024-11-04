#include <iostream>
using namespace std;
int main(){
    int r,c;
    cout << "Enter row number: ";
    cin >> r;
    cout << "Enter column number: ";
    cin >> c;
    cout << endl;
    int array[r][c], sum = 0,i,j;
   for(i=0; i<r; i++){
       for(j=0; j<c; j++){
            cin >> array[i][j];
        }
    }
     for(i=0; i<r; i++){
       for(j=0; j<c; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
     }
     
    for(i=0; i<c; i++){
        sum = sum + array[0][i];
    }
   
   for(i=0; i<c; i++){
        sum = sum + array[r-1][i];
    }
    
    for(i=1; i<r-1; i++){
        sum = sum + array[i][0] + array[i][c-1];
    }
    cout << "Sum is : " << sum << endl;
    
    return 0;
}