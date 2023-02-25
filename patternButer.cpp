#include<iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int s=2*a -2*(i);
        for(int j=1;j<=s;j++){
            cout<<" ";
        }
       for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i=a;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int s=2*a -2*(i);
        for(int j=1;j<=s;j++){
            cout<<" ";
        }
       for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}