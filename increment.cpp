#include <iostream>
using namespace std;
int main() {
int i = 10;
int * p;
p = & i;
cout << i<<endl;
cout << "Address of the variable i is " << p << endl;
cout << "Address of the pointer p is " << &p<< endl;

cout << "value of the pointer p is " << *p+1<< endl;
cout << "value of the pointer p is " << *p+1<< endl;

int a[5] = {1, 9,5,2, 3};
  cout << *a<<endl;
    cout << *a+1<<endl; //value at 1st location + 1
  cout << *(a+1)<<endl; //value at 2nd location
    cout << *(a+2)<<endl; //value at 3rd location
     cout << *(a)+2<<endl; //value at 1st location + 2

return 0;
}