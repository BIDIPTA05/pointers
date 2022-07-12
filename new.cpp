#include<iostream>
using namespace std;
int main(){

int a = 10;
int *b = &a;
cout << &a<<endl;
cout << b;

//can also be done.
int p = 50;
int *x = 0;
x = &p;
cout<<p<<endl;

int *y = x;
cout << y;

cout << endl;
cout << "New Examples: --- "<<endl;
//examples of pointers
int abc = 1900;
int *s = &abc;
cout << "Address of abc - "<<&abc<<endl;
cout << "Address of abc - (another way)"<<s<<endl;
cout << "Value of abc - "<<*s<<endl;

return 0;
}