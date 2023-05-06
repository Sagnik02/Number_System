# include <bits/stdc++.h> 
using namespace std ;
    
/*You are given two positive integers n and k. A factor of an integer n is defined as an integer i where n % i == 0.

Consider a list of all factors of n sorted in ascending order, return the kth factor in this list or return -1 if n has less than k factors.

Input: n = 12, k = 3
Output: 3
Explanation: Factors list is [1, 2, 3, 4, 6, 12], the 3rd factor is 3.

*/  
int kthFactor(int n, int k) {
    vector<int> vec;
    for(int i=1;i<=n;i++){
        if(n%i==0){
           vec.push_back(i);
        }
    }
  
    if(k<=vec.size())
        return vec[k-1];
    else
        return -1;
    }
int main(){
    int n,k;
    cout<<"Enter the number n : ";
    cin>>n;
    cout<<"Enter the number k : ";
    cin>>k;   
    int ans=kthFactor(n,k);
    cout<<" The k th factor of "<<n<< " is "<<ans;
}