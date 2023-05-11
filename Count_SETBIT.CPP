#include <bits/stdc++.h> 


using namespace std;

    int countBits(int n)
    {
        int ct=0;
        for(int i=31;i>=0;i--){
            if((n&(1<<i))!=0){
                ct++;
            }
        }
        return ct;
    }

int main() {
    int n;
    cin >> n;
    int num=countBits(n);
    cout<<"The number of set bits are : "<<num<<endl;
    return 0;
}