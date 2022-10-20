
#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    //check the number
    for (int i = 2; i*i<=N; i++){
    if(N%i==0){
        cout << 0;
    }
        while (N){
        
            if(N%10 !=2 && N%10 !=3 && N%10 !=5 &&N%10 !=7 )
            cout << 0;
            N = N/10;}
    }
    cout << 1;
}
