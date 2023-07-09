// 01. Understand recursion by printing something N times: https://takeuforward.org/recursion/in...
// 02. Print name N times using recursion: https://takeuforward.org/recursion/pr...
// 03. Print 1 to N using recursion: https://takeuforward.org/recursion/pr...
// 04. Print N to 1 using recursion: https://takeuforward.org/recursion/pr...
// 05. Sum of first N numbers: https://takeuforward.org/data-structu...
// 06. Factorial of N numbers: https://takeuforward.org/data-structu...
// 07. Reverse an array: https://takeuforward.org/data-structu...
// 08. Check if a string is palindrome or not: https://takeuforward.org/data-structu...
// 09. Fibonacci Number: https://takeuforward.org/arrays/print...


// 01. Understand recursion by printing something N times
// #include<bits/stdc++.h>
// using namespace std;


// void solve(int n){
//     if(n==0){
//         return ; 
//     }
//     cout<<"Sandy"<<endl; // print "Sandy" for each iteration
//     solve(n-1);// recursive call with decremented value of 'n'
    
// }

// int main() {
//     cout<< " 01. Understand recursion by printing something N times" <<endl;
//     int n =5;  
//     solve(n);

// }
// 02. Print name N times using recursion
// #include<bits/stdc++.h>
// using namespace std;

// void solve(int n){
//     if(n==0) return ;

//     cout<<"name"<<endl;
//     solve(n-1);
// }

// int main() {
//     cout<<"02. Print name N times using recursion" <<endl;
//     int n =5;  
//     solve(n);

// }
// // 03. Print 1 to N using recursion
// #include<bits/stdc++.h>
// using namespace std;

// void solve(int n){
//     if(n==0){
//         return ; 
//     }
//     solve(n-1);
//     cout<<n<<endl;
// }

// int main() {
//     int n =20;  
//     solve(n);

// }

// // 04. Print N to 1 using recursion
// #include<bits/stdc++.h>
// using namespace std;

// void solve(int n){
//     if(n==0) return;

//     cout<<n<<endl;
//     solve(n-1);
// }

// int main() {
//     int n =20;  
//     solve(n);

// }
// // 05. Sum of first N numbers
// #include<bits/stdc++.h>
// using namespace std;

// int solve(int n){
//     if(n==0) 
//     return n;
//     return n + solve(n-1);

// }

// int main() {
//     int n =10;  
//     int sum = 0;
//     cout<< solve(n);

// }

// // 06. Factorial of N numbers
#include<bits/stdc++.h>
using namespace std;

// int solve(int n){
//     if(n==0) return 1;

//     return n*solve(n-1);
// }

// int main() {
//     int n =5;  
//     cout<<"factorial is" << solve(n);

// }

// // 07. Reverse an array
// #include<bits/stdc++.h>
// using namespace std;

// void solve(int arr[],int n, int i ){
//     if(i<n){
//         swap(arr[i],arr[n]);
//     solve(arr,n-1,i+1);
//     }
// }

// int main() {
//     int n =5;  
//     int i =0;
//     int arr[5] = {1,4 ,5,6,9};
//     for(int i = 0 ;  i< n ; i++){
//         cout<<arr[i]<<" ";
//     }
//     solve(arr , n-1 , i );

//         cout<< "reversed array : ";
//     for(int i = 0 ;  i< n ; i++){
//         cout<<arr[i]<<" ";
//     }    
// }
// // 08. Check if a string is palindrome or not
// #include<bits/stdc++.h>
// using namespace std;

// bool solve(string str,int i){
//     if(i>=str.length()/2) return true;
//     if(str[i]!=str[str.length()-1-i]) return false;
//     return solve(str,i+1);
// }

// int main() {
//     int n =5; 
//      int i =0;
//     string str = "sandy ydnas";
//     if(!solve(str,i))
//         cout<<"not Palindrome";
//     else
//         cout<<"palindrome";
// }

// // 09. Fibonacci Number
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

