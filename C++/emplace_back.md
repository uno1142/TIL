# push_backとemplace_back

push_backは言わずとしれた配列の要素を追加する関数だが、これを特定の条件でより早くできるものがある。  
それがemplace_back

## emplace_back

> emplace_backは実引数がコンテナの要素型と異なるときに、push_backよりも動作が早くなり、
それ以外の場合ではほとんど変わりません。（実引数が単に変数のときなど）

要はpairとかtupleの時に早くなるよ！ってこと。詳しい原理については[ここ](https://qiita.com/brackss1/items/e92da6458172397f7225)

とりあえずこういう便利なものもあるよって覚えておこう！
