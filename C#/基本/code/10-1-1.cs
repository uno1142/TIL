using System;

class Book
{
    public string Title{get; set;}
    public string Author{get; set;}
    public string Memo{get; set;}
    public long Pages{get; set;}
    public long Rating{get; set;}

    public void Print()
    {
        Console.WriteLine(this.Title);
        Console.WriteLine(this.Author);
        Console.WriteLine(this.Memo);
        Console.WriteLine(this.Pages);
        Console.WriteLine(this.Rating);
    }

}

namespace ConsoleApp4
{
    class Program
    {
        static void Main(string[] args)
        {
            var book = new Book
            {
                Title = "高田健志の伝説",
                Author = "高田健志",
                Memo = "えらいよなぁ！？",
                Pages = 50000000,
                Rating = 5
            };
        }
    }
}