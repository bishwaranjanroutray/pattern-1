// Print the following pattern
// Input: n = 4
// Output:
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main(){
    cout<<"enter the number: ";
    int n;
    cin>>n;
    n+=1;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=1;j<=i;j++){
                cout<<char(j+64)<<" ";
            }
            cout<<endl;
        }
    }
}