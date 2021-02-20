# Fileクラス

Fileクラスを使うと、テキストファイルを読み書きできる。

## テキストファイル作成

File.WriteAllLine静的メソッドを使う。

```
var lines = new string[]
{
    "高田健志って",
    "えらいよ",
    "なぁ！？"
};
File.WriteAllLine("ファイルパス",lines);

```

ファイルパスの書き方だが、文字列の前に`@`を書くと逐語的文字列になり、楽に書ける。

```
File.WriteAllLine(@"C:\temp\高田健志.txt",lines);
```
ならば、Cドライブ直下のtempフォルダのなかに高田健志.txtが生成される。


## テキストファイル読み込み

File.ReadAllLine静的メソッドを使うと、テキストファイルを読み込んで文字列配列として返してくれる。

```
var lines = File.ReadAllLines(@"c:\temp\高田健志.txt");

foreach(var line in lines){
    Console.WriteLine(line);
}
```