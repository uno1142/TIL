# std::uniqueについて

競プロで座標圧縮が必要になったとき、以下のようなコードを見かけた

```
using namespace std;
int main(){
    int N;
    cin >> N;

    vector<int>val(N);
    sort(val.begin(),val.end());

    //↓これ！

    erase(unique(vals.begin(),vals.end()), vals.end());

}
```

まずerase関数、unique関数を知らなかったし、ぱっと見で何をしているかもわからない。

わからないときはリファレンスを読もう！ということでリンク↓

[std::unique- C++日本語リファレンス](https://cpprefjp.github.io/reference/algorithm/unique.html)  
[std::erase- C++日本語リファレンス](https://cpprefjp.github.io/reference/vector/vector/erase.html)



結論としては以下のように理解

>unique関数は隣接する要素を削除してくれるけど配列の長さは変えずにゴミを後ろに集める(消したあとその先頭のポインタを返す)だけなので、
erase(unique(A.begin(),A.end()) , A.end())してあげると要素を削除→ゴミを後ろに集める→ゴミの先頭~配列末尾までerase　で配列が小さくなる


また、飲み込んだ後にいつも競プロで非常に有益な記事を書いてくれているえびちゃんさんの記事を読んだらわかりやすくまとめてあった


[えびちゃんの日記](https://rsk0315.hatenablog.com/entry/2020/05/09/170315#%E9%87%8D%E8%A4%87%E3%82%92%E5%8F%96%E3%82%8A%E9%99%A4%E3%81%8F%E3%82%84%E3%81%A4)

特にC++の仕様で謎が生まれたとき、このブログは非常にわかりやすく解説してくれているので参考になる

以上！