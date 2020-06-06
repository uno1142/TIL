//深さ優先探索で点sからtに


#include<bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

//深さ優先探索
vector<bool>seen;
void dfs(const Graph &G, int v){
  seen[v] = true; //vを訪問済にする
  
  // vから行ける各頂点next_vについて
  for(auto next_v : G[v]){
    if(seen[next_v])continue; //next_vが探索済みだったらスルー
    dfs(G, next_v); //再起的に探索
  }
}


int main(){
  //頂点数と辺数，s,t
  int N , M , s , t; cin >> N >> M >> s >> t;
  
  //グラフ入力受け取り
  Graph G(N);
  for(int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    G[a].push_back(b); //グラフの頂点aの位置につながっている頂点bを追加していく
  }
  
  //頂点sをスタートとした探索
  seen.assign(N,false); //全頂点をfalseに初期化
  dfs(G,s);
  
  //tに辿り着けるのかどうか
  if(seen[t]) cout << "Yes" << endl; //訪問済みなので
  else cout << "No" << endl;
  
}
