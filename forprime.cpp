#include<iostream>
using namespace std;

int main() {

    int n ;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    bool isprime = 1;

    for( int i = 2; i<=n; i++) {

        // rem = 0, Not a prime
        if(n%i == 0){
            // cout<<"Not a Prime Number"<< endl;
            isprime = 0;
            break;
        }
       
    }

    if(isprime == 0){
        cout<<"Not a Prime Number"<< endl;
    }
    else{
        cout<<"is a Prime Number"<< endl;
    }



}

