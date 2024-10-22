// Take two strings as input and compare them
#include <iostream>
using namespace std;
int main(){
    string str1,str2;
    cout << "Enter sample input 1: ";
    getline(cin, str1);
    cout << "Enter sample input 2: ";
    getline(cin, str2);
    if(str1 == str2){
        cout << "Same" << endl;
        }
    else{
        cout << "Not Same" << endl;
        }
    return 0;
}