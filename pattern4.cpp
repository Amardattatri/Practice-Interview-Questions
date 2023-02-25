#include<iostream>

using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        int count=1;
        for(int j=1;j<=5-i+1;j++){
            cout<<count;
            count=count+1;
        }
        cout<<endl;
    }
}