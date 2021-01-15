#include<bits/stdc++.h>
using namespace std;

long long cnt;
int l;
int A[1000000];
int n;
vector<int>G;

void insertionSort(int A[], int n, int g){
  for(int i =g; i <n ; i++ ){
    int v = A[i]; //一時的に保存し
    int j= i -g; // g-i のところと比較する
    while(j >= 0 && A[j] > v){ //A[j]の値の方が大きいなら
      A[j + g] = A[j]; //j+gの位置，つまりもともとA[i]があった位置にA[j]を入れ
      j -= g; //jをj-gにする．これでjが負になったらループを抜ける
      cnt ++;
    }
    A[j + g] = v; //変更がなければそのままだし，入れ替わっていたらもともと保存しておいた値vを入れる
  }
}

void shellsort (int A[],int n){
  //数列Gを生成
  for(int h = 1; ;){ //無限ループ　外でint h= 1;while(1){でも多分いい
    if(h > n)break;//②ｈがnより大きければ，追加する前にループを抜ける
    G.push_back(h);//配列の後ろにhを追加する
    h = 3*h + 1; //①hを3倍し，1足す　ループ
  }
  
  for(int i = G.size()-1; i >=0; i--){ //Gを逆順にし，挿入ソートを行う
    insertionSort(A, n , G[i]);
  }
}

int main(){
  cin >> n;
  for(int i = 0; i <n ; i++){
    scanf("%d",&A[i]);
  }
  cnt = 0;
  
 shellsort(A, n);
  
  cout << G.size() << endl;
  for(int i= G.size() -1; i >= 0; i--){
    cout << G[i];
    if(i == 0) cout << endl;
    else cout << " ";
  }
  cout << cnt << endl;
  for(int i = 0; i < n; i++)cout << A[i] << endl;
}
  

