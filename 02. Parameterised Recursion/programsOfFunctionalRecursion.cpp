
// // 01. Reverse an array
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
// // 02. Check if a string is palindrome or not
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
