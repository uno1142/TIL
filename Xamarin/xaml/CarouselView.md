# CarouselViewでViewCellはサポートされていない


ListViewの横版みたいなやつなんだけど、そのままコピペして波線部分を修正するだけだとダメだった。
下記のエラーが出る

System.InvalidCastException


原因は、CarouselViewがViewCellをサポートしていないというものだった。
参考までに問題だったコード



解決に導いてくれたページ
https://github.com/alexrainman/CarouselView/issues/49
