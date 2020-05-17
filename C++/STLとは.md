## STLって？

C++に標準で用意されている(自分でプログラムを書かなくても使える)関数がまとまっているもの。 
STL(Standard Template Library)という。    
[ライブラリ周りについて](https://github.com/uno1142/TIL/blob/master/C%2B%2B/stdc%2B%2B.h%E3%81%A3%E3%81%A6%E3%81%AA%E3%82%93%E3%81%AA%E3%81%AE.md)  

### 呼び出し方  

`関数名(引数1,引数2,...)`  
引数・・・関数に渡す値  
返り値（戻り値）・・・計算結果の値

STLはこんなのがあるよ！   
- min(a,b)　→a,bの中で小さい値を返す
- max(a,b)　→a,bの中で大きい値を返す
- swap(a,b)　→a,bの2つの引数の値を交換する  

※max,minは3つ以上の場合(A, B, C)  
max( max(A,B), C)といった形にする必要がある。

### reverse関数

配列の要素の並びを逆にできる。

```
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {1, 5, 3};
    reverse(vec.begin(), vec.end()); // {3, 5, 1}

    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
}
```
次の形式で呼び出す  
`reverse(配列変数.begin(),配列変数.end());`

### sort関数

データ列を順番に並び替える。sort関数だと小さい順。  

次の形式で呼び出す
`sort(配列変数.begin(),配列変数.end());`

sort関数もreverse関数も返り値はない。  

**sort関数を使ってからreverse関数を使うと大きい順にソートできる！**
便利  



### 配列を渡す形式

`関数名(配列変数.begin(), 配列変数.end())`  
このパターンが多い。詳しくは[イテレータ](https://atcoder.jp/contests/apg4b/tasks/APG4b_ai)

その他の関数はリンク先参照  
- [STL入門](http://kaitei.net/cpp/stl-intro/)
- [AtCoder(APEG4b)](https://atcoder.jp/contests/apg4b/tasks/APG4b_o)
- [C++マニアック](http://stlalv.la.coocan.jp/STL.html)

追記：どうやらリンク先を見ているとコンテナやmapといった単語が多い。 
コンテナはhtml程度の知識しかないしmapは写経でよく見るので後々別記事に。
