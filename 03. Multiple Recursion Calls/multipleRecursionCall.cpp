// Multiple recursion calls is a concept which use multiple recursion calls together in order to get the combined result of the recursive call. All recursive calls are made in one call and contribute same for the actual answer.
// Example can be fibonacci series where f(n) = f(n-1) + f(n-2)  two recursive call as one(multiple recursive call)


// Fibonacci Number
#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n==1 || n==0) return n;
    return solve(n-1) + solve (n-2);
}

int main() {
    int n =5;  
    for(int i = 0 ; i<n ; i++){

    cout<<solve(i) <<" ";
    }

}

// Time Complexity : O(2^n) nearly exponential as not every time its 2^n like for f(4) we have f(3) and f(2) which are not getting to have the same number of recursive calls