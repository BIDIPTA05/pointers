#include <iostream>
using namespace std;
int main() {
int i = 10;
int * p;
p = & i;
cout << "Address of the variable i is " << p << endl;
cout << "Address of the pointer p is " << &p<< endl;

int *a = NULL;
cout <<"null- "<< a << endl;
return 0;
}