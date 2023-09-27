// Print the following pattern
// Input: n = 4
// Output:
//    *
//   **
//  ***
// ****
//  ***
//   **
//    *

#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number: ";
    int n;
    cin>>n;
    // upper triangle
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    n=n-1;
    // lower triangle
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n-i+1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}