```
#include<bits/stdc++.h>
using namespace std;

int main(){
  int s;
  cin >> s;
  
  cout << s/100 + s%100/10 + s%10 << endl; 
}
```

101みたいな感じの3桁の文字列に1が何個入ってるか出力する問題。  

1. 100で割ると100の位に1があるか分かる。
1. 100で割った余り（10の位+1の位）を10で割ると10の位に1があるかわかる。
1. 10で割った余りは、1の位の数。

追記：これについて別途まとめました  
[リンク](https://github.com/uno1142/TIL/blob/master/%E7%AB%B6%E3%83%97%E3%83%AD/int%E5%9E%8B%E3%81%AEn%E6%A1%81%E7%9B%AE%E3%81%AB%E3%82%A2%E3%82%AF%E3%82%BB%E3%82%B9.md)
