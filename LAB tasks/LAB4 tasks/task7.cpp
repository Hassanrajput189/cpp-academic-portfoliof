#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any number"<<endl;cin>>num;
    if(num%2==0){
        cout<<num<<" is Even"<<endl;
    }
    else {
        cout<<num<<" is Odd"<<endl;
    }
    return 0;
}