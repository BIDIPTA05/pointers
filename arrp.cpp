#include<iostream>
using namespace std;
int main(){
   int n;
     
    cout << "Enter the size of the array " << endl;
    cin >> n;
    
 
    
    
 int arr[n];
    
    cout << "Enter the values of the array - "<<endl;
    for (int i = 0; i < n;i++){
        cin >> arr[i];

    }


    cout << "The values of the array are - ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        }

        return 0;
}