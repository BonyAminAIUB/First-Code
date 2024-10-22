#include <iostream>
using namespace std;
namespace test{
    int myNumber = 10;
}
int main(){
    int myNumber = 100;
    cout << myNumber << endl;
    cout << test:: myNumber << endl;
    return 0;
}