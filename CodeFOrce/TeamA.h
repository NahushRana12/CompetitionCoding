#include <bits/stdc++.h> 
using namespace std;

int Solve()
{
    int arr[3],count  = 0;;
    for(int i = 0;i< 3;i++){
        cin>>arr[i];
        if(arr[i] == 1){
                count++;
        }
    }
     if(count >= 2)return 1;
     else return 0;
 
    
    
}
int main()
{
    
    int T;int x = 0;
    cin>>T;
    for(int i = 1 ;i <=  T;i++){
       x += Solve();
       
    }
    cout<< x<<endl;
}
