using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Hello
{
    class Program
    {
        static void Main(string[] args)
        {
            string sayHello = "Hello World!";
            Console.WriteLine(sayHello);
            // Hello World!
            sayHello = sayHello.Replace("Hello","Greetings");
            Console.WriteLine(sayHello);
            // Greetings World!
        }
    }
}