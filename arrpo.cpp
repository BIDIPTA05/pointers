#include<iostream>
using namespace std;
int main(){

    int a[9] = {1, 2, 3};
    cout << a<<endl;
    cout << &a[0]<<endl;
    int *b  = &a[1];
    cout <<*b<<endl;
    cout << sizeof(a) << endl;
    cout << &a[2] << endl;

    cout << "character"<<endl;
    char ch[6] = "abcde";
    char *cs = &ch[0];
    char *cw = &ch[1];
    cout << cs<<endl;
    cout << cw<<endl;
    return 0;
}