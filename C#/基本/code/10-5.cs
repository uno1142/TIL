using System;


namespace ExampleApp2
{

    class Program
    {
        static void Main()
        {

        }
    }

    class Book
    {
        public string Title {get; set;}
        public string Author{get; set;}
        public int Pages{get; set;}

        int _rating;

        //クラスの中で定義された変数をフィールドと呼ぶ 定義されたクラスの内部でのみアクセスできる
        public int Rating
        {
            //getアクセサー　利用者がプロパティの値を取得するための機能
            get
            {
                return _rating;
            }

            //setアクセサー　値が代入されるときに呼び出される。valueは代入される値を示す特別なキーワード
            set
            {
                if(value <= 1) _rating = 1;
                else if(value >=6) _rating = 5;
                else _rating = value;
            }
        }
    }


    //読み取り専用のプロパティ

    class Person
    {
        public string FirstName {get; set;}
        public string LastName {get; set;}

        /*
        ↓ここをこう書き換えるとわかりやすくなる

        public string GetFullName()
        {
            return LastName + FirstName;
        }

        */

        //getアクセサーのみをもった読み取り専用プロパティ

        public string FullName 
        {
            get{ return LastName + FirstName;}
        }

        //こう書くこともできる
        public string FullName2{get; private set;}
    }

}



