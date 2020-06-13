# queue

- `queue<型> 変数名;`宣言
- `変数.push(値); `追加
- `変数.front()`先頭の要素にアクセス
- `変数.pop()`先頭の要素を削除
- `変数.size()`要素数を取得
- `変数.empty()`キューが空かどうか調べる

# priority_queue

「それまでに追加した要素のうち、最もおおきいものを取り出す」という処理を行うときに用いるデータ構造。  
STLに`priority_queue`がある。  
関連ワード：ダイクストラ法

```
#include <bits/stdc++.h>
using namespace std;

int main() {
  priority_queue<int> pq;
  pq.push(10);
  pq.push(3);
  pq.push(6);
  pq.push(1);

  // 空でない間繰り返す
  while (!pq.empty()) {
    cout << pq.top() << endl;  // 最大の値を出力
    pq.pop();  // 最大の値を削除
  }
}

```

- `変数.push(値)`追加
- `変数.top()`queueではfrontだったが、priority_queueではtopで最大の要素(先頭にくる)を取得。
- `変数.pop()`最大の要素を削除

## 最小の要素を取り出すpriority_queue
`priority_queue<型, vector<型>, greater<型>> 変数;`
