# next_permutation

C＋＋のSTLにある関数。与えられた配列の範囲で順列を生成し、辞書順で次の配列に置き換える関数。

### 辞書順ってそもそもなに？

> 2つの数列X,Yについて、ある整数kが存在し、X<sub>i</sub> = Y<sub>i</sub> (1 <= i < k)かつX<sub>k</sub> < Y<sub>k</sub>が成り立つとき、  
XはYより辞書順で小さいと定義される

例えば辞書順に[1,2,3]の数列を並べ替えると、  
[1,2,3]  
[1,3,2]  
[2,1,3]  
[2,3,1]  
[3,1,2]  
[3,2,1]

## 使用例

- [AtCoder ABC150-C](https://atcoder.jp/contests/abc150/tasks/abc150_c)  
- [解説(けんちょんさん)](https://drken1215.hatenablog.com/entry/2020/01/12/122100)  
- [自分のAC](https://atcoder.jp/contests/abc150/submissions/14677257)

## 実装例

```
#include<iostream>
#include<algorithm>//next_permutation
using namespace std;

int main(){
    int array[]={1,2,3,4};
    do{
        for(int i=0; i<4; i++){
            cout<<array[i];
            if(i!=3)cout<<" ";
        }
        cout<<endl;
    }while(next_permutation(array,array+4));
    return 0;
}
```
①初期の配列を用意する  
②do while文の処理を書く  
③条件式をnext_permitationで埋める。vector vなら(next_permitation(v.begin(),v.end()))など


## 参考記事

[next_permutationについて](https://qiita.com/siser/items/a91022071b24952d27d9)
