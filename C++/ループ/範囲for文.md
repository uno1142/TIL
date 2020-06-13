## 便利！範囲for文

範囲for文を使うとfor文を簡潔に書けることがある！  
特に
```
vector<int> a = {1,3,5,4};
for (int x :a){
  cout << x << endl;
}
```

このような時、配列のすべての要素を取り出す処理が簡単に書ける。  
書き方  
`for (配列の要素の型　変数名:配列変数){各要素に対する処理}`  

## 範囲for文でstring型

範囲for文は
*コンテナ*
型に対して使うことが出来る。    

#### コンテナ
> コンテナクラス」とは、クラス、構造体、POD（int 等のいわゆるプレーンな古い型; Plain Old Data）を複数入れることが出来る「入れ物」のことである。  

コンテナはデータ型で、配列やstring型もこれに含まれる。  

要するに、string型の文字1つ1つを処理するときにも使える！  
試しに書いてみた。  
stringの各文字が大文字か小文字か調べて出力する。  
```
#include<bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  
  for (char x :S){
    if(isupper(x)){
      cout << x << "は大文字です"<< endl;
    }
    else{
      cout << x << "は大文字ではない" << endl;
    }
  }
}
```
これ使えるとAB問題をキレイに書けそう！



