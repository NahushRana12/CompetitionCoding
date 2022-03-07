#include <bits/stdc++.h> 
using namespace std;


bool isvovel(char c){
	
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
void solve()
{
	int n,count = 0;
	cin>>n;
	int arr[50];
	unordered_set<int> book;
	int i =0 ;int l = n;
   while(l--){
			int temp;
			cin>>temp;
			arr[i++] = temp;
   }
   for(int i = n-1;i >= 0 ;i--){
	   book.insert(arr[i]);
   }
   cout<<book.size()<<endl;
   for(auto x:book)
	   cout<<x<<" ";
   
}
int main()
{
	solve();
   // int t;
    // cin>>t;
    // for(i,0,t){
      // cout<<solve()<<endl;
    // }
	//cout<<solve()<<endl;
	
}
