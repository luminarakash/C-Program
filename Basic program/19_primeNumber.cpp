#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}

int main(){
    int n, c, y;
    c ='y';
    while(c=='y')
    {
        
    cout<<"enter the no of n:";
    cin>>n;
    if(isPrime(n)){
        cout<<"Is a prime number"<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }
    cout<<endl;
    }
}