// Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :
// ******
// *    *
// *    *
// ******

#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"enter the number of rows: ";
    cin>>r;
    cout<<"enter the number of columns: ";
    cin>>c;

    for(int i=1;i<=r;i++){        
        if(i==1 || i==r){
            for(int j=1;j<=c;j++){
                cout<<"*";
                }
            cout<<endl;
        }
        else{
            for(int j=1;j<=c;j++){
                if(j==1 || j==c) cout<<"*";
                else cout<<" ";
                }
            cout<<endl;
        }
    }
    
}