#include <iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout << "Enter row number: ";
    cin >> r;
    cout << "Enter column number: ";
    cin >> c;
    int array[r][c], sum1 = 0, sum2 = 0;
    cout << "Enter array: ";
    for(i = 0; i<r; i++){
        for(j = 0; j<c; j++){
            cin >> array[i][j];
        }
    }
    for(i = 0; i<r; i++){
        for(j = 0; j<c; j++){
           cout << array[i][j] << " ";
        }
        cout << endl;
    }
    for(i = 0; i<r; i++){
        for(j = i; j<=i; j++){
            sum1 = sum1 + array[i][j];
        }
    }
    cout << "Primary diagonal sum: " << sum1 << endl;
    
     for(i = 0; i<r; i++)
        {
            sum2 = sum2 + array[i][c-i-1];
        }
    
    cout << "Secondary diagonal sum: " << sum2 << endl;
    return 0;
}