#include<iostream>
using namespace std;
int main()
{

    int a[5][5]={{1,2,3,4,5},
                 {6,7,8,9,10},
                 {1,2,3,4,5},
                 {6,7,8,9,10},
                 {2,2,3,4,5}};
    int PrimaryDiagonalSum =0;
    int SecondaryDiagonalSum = 0;
    for(int i=0;i<5;i++)
    {
       PrimaryDiagonalSum+= a[i] [i];
       SecondaryDiagonalSum+=a[4-i][i];

    }
    /*for(int i=0;i<5;i++)
    {
        SecondaryDiagonalSum+=a[i][4-i];
    }*/
    cout<<"Primary Diagonal Sum : " <<PrimaryDiagonalSum<<endl;
    cout<<"Secondary Diagonal sum : " <<SecondaryDiagonalSum<<endl;
}