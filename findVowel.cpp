// Take a string as input and find how many vowels appers in it
#include <iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter your sample input: ";
    getline(cin,str);
    int count = 0;
    for(int i : str){
        if(i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U' || i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'){
            count ++; 
        } 
    }
    cout << "Vowels appeared "<< count << " times.";
    return 0;
}