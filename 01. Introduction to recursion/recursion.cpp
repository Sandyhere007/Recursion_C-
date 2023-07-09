// Recursion : When a function calling itself until a specific condition fulfils (is met).
    // or technically we can say "Recursive function is a function which solves a particular problem by calling copy of itself with changed parameters And solving smaller subproblems of the original problem ".
// Base Case: Base Case is the condition till which a function will run recursively and ASAP it reaches base    condition it stops. or we can say "It is the condition which prevents a recursion from stack overflow".
// Stack Overflow : when a function runs for infinite time (likely a recursive function without base case) at a moment it reaches the max limit of the memory stack and it gets overflowed. After that program crashes .

// Recursion Tree : It is a representation of the recursive calls made in the whole recursive function. Likely how functions are called and returned as a series of events happening consecutively


#include<bits/stdc++.h>
using namespace std;
int rec(int n){
    if(n==0)
    return 1; // Base case
    
    cout<<n<<" ";

    rec(n-1);
}

int main(){

int n = 5;
rec(n);

    return 0;
}
