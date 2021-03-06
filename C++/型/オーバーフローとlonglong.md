# longlongについて

別記事に1000000007について書いたが、今回はlong logn型について覚えていく。

## long long型って？

普段よく使うint型は整数を扱う型だが、修飾子なしではあまり大きな数は扱えないことが多い。  
具体的には最低でも16bitの幅を持つことが保証されている。16bitはバイナリで最大65,536までの数だ。  
ただし、32bitまたは64bitのシステムでは少なくとも32bitの幅を持つことが保証される。  
#### バイナリって？

>コンピュータ用語としては、データが「0」と「1」で表現されている形式のこと。  
もともとは「2進数の」という意味である。

<br>

ちなみに32bitでは符号なし(負の数を考慮しない)4,294,967,295(42億ちょっと)が上限。  
これを超えるとオーバーフローを引き起こし不正な数値になってしまう。  
防ぐためには？→[1000000007](https://github.com/uno1142/TIL/blob/master/%E7%AB%B6%E3%83%97%E3%83%AD/1000000007.md)

## そこで使える long long型

競プロでよく見るこの型。long long 型を修飾子として使うと、なんと64bitまで表示できるのだ！  
64bitもあれば、符号なしで18,446,744,073,709,551,615までの数を扱うことが出来る。  

え、じゃあ大きな数字を扱いそうになったらとりあえずlong long型にすればいいのでは？  
と思ったが、当然デメリットもある。デメリットはメモリを食うこと。  
昔に比べてPCの性能がいい（メモリが豊富にある）ので割と気軽に使えてしまうが、  
本当に必要な時以外はそんなに使わないようにしておいたほうがいいかもしれない  
<br>
ただ、これを使うだけでWAになっていた問題がACできることもあるので覚えておいて損はない。  
というか、覚えておこう。

参考
- [[C++] 整数型の使い分け](https://teratail.com/questions/76294)
- [基本型](https://ja.cppreference.com/w/cpp/language/types)

