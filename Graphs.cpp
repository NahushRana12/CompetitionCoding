#include <bits/stdc++.h> 
using namespace std;

#define FOR(i, a, n) for (register int i = (a); i < (int)(n); ++i)
    
vector<string> SplitbyRegex(string s,string Regex){
    vector<string> tokens;
    regex re(Regex);
    sregex_token_iterator begin(s.begin(), s.end(), re),end;
    copy(begin, end,back_inserter(tokens));
    return tokens;
}
//graph size
int size;
//List graph
//#region adjacentlist
//weigth Adjacency list
vector<pair<int,int>> *Wadj;
void WeigthReadGraph(int x,int edge){
    size =x;
   Wadj = new vector<pair<int,int>>[size];
   while(edge--){
   int x,y,z;
   cin>>x>>y>>z;
   Wadj[x].push_back(make_pair(y,z));
   //if it is bidirectional
   //Wadj[y].push_back(x);
   }
}
void WeightWriteGraph(){
    for(int i = 0;i<size;i++){
        for(auto y: Wadj[i]){
            cout<<y.first << " "<<y.second<< " nextnode ";
        }
        cout<<endl;
    }
}

//graph Adjacency list
vector<int> *adj;
vector<bool> visited;
void readGraph(int x,int edge){
    size =x;
   visited =vector<bool>(size,0);
   adj = new vector<int>[size];
   while(edge--){
   int x,y;
   cin>>x>>y;x--;y--;
   adj[x].push_back(y);
   //if it is bidirectional
   adj[y].push_back(x);
   }
}
void WriteGraph(){
    for(int i = 0;i<size;i++){
        for(auto y: adj[i]){
            cout<<y<< " ";
        }
        cout<<endl;
    }
}

void dfslist(int x){
      //  visited = vector<bool>(size,0);
      //  for(auto x: visited)cout<<x<<" a";
        if(visited[x] == 1) return;
        visited[x] = 1;visited[x] = 1;
        cout<<x<<" ";
        
        for(auto u : adj[x]){
            dfslist(u);
        }
}
//*/
/*//matrix representation
vector<vector<int>> matrixi;
void readMatrixGraph(int N,int Egde){
    size = N;
    matrixi= vector<vector<int>>(size,vector<int>(size,0));
    while(Egde--){
        int x,y;
        cin>>x>>y;x--;y--;
        matrixi[x][y] = 1;
        //if bidirectional
        //matrixi[y][x] = 1;
    }  
} 
void readWeightMatrixGraph(int N,int Egde){
    size = N;
    matrixi= vector<vector<int>>(size,vector<int>(size,0));
    while(Egde--){
        int x,y,z;
        cin>>x>>y>>z;x--;y--;
        matrixi[x][y] = z;
        //if bidirectional
        //matrixi[y][x] = z;
    }  
} 
void writeMatrixGraph(){
    FOR(i,0,size){
        FOR(j,0,size){
            cout<<matrixi[i][j]<<" ";
        }
        cout<<endl;
    }
}   
*/
int Solve()
{
   
   readGraph(5,5);
   WriteGraph();
   dfslist(0);
    
}
int main()
{
   
    Solve();
   /* int T;
    cin>>T;
    FOR(i,0,T){
      cout<< Solve()<<endl;
    }*/
    return 0;
}
