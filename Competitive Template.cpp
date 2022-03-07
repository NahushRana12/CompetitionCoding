#include <bits/stdc++.h> 
using namespace std;
 
 
bool isvovel(char c){
	
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

template <typename T>
void readVector(vector<T> &arr, int n){
	arr.resize(n);
	for(int i = 0;i< n;i++){
		T temp;
		cin>>temp;
		arr[i] = temp;
	} 
}
template <typename T>
void writeVector(vector<T> &arr){
	for(auto x: arr){
		cout<<x<<" ";
	}
	cout<<endl;
}
template <typename T>
void swapVector(T &a1,T &a2){
	T temp = a1;
	a1 = a2;
	a2 = temp;
}

void solve()
{
	int n,k;
	cin>>n>>k;
	unordered_set<int> map[n];
	vector<pair<int,int>> book;
	for(int i = 0;i< n;i++){
		int temp;
		cin>>temp;
		book.push_back(make_pair(temp,i));
	}
	while(k--){
		int i,j;
		cin>>i>>j;
		i--;j--;
		map[j].insert(i);
		map[i].insert(j);
	}
	/* for(auto x: map){
		for(auto y:x){
			cout<<"->"<<y<<" ";
		}
		cout<<endl;
	} */
	
	sort(book.begin(),book.end());
	int i =0;
	vector<int> ans(n);
	int min = 0;
	vector<int> match;
	for(auto x:book){
/* 		if(i == 0){
			min = x.first;
			ans[x.second] = 0;
			match.push_back(min);
			continue;
		} */
		int n = i -1;int count = 0;
		while(n >= 0){
			//cout<<i<<" "<<n;
			if(book[n].first < x.first && map[x.second].find(book[n].second) == map[x.second].end()){
				count = ans[book[n].second] + 1;break;
			}
			n--;
			//cout<<"***"<<endl;
		}
		ans[x.second] = count;
		i++;
	}
	writeVector(ans);
	
}
int main()
{
	solve();
    /* int t;
     cin>>t;
    while(t--){
      cout<<solve()<<endl;
	  //solve();
    } */
	//cout<<solve()<<endl;
	
}
