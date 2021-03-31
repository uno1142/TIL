using System;

namespace ExampleApp
{
    class Program
    {
        static void Main()
        {
          var pet = new VirtualPet("unchi");
          pet.MoodUp();
          pet.MoodUp();
          pet.MoodUp();
          pet.MoodUp();
          pet.MoodUp();
          pet.MoodUp();
          pet.MoodUp();
          pet.MoodDown();
          
          
          Console.WriteLine(pet.Mood);

        }
    }

    class VirtualPet{

        //=値で初期値設定可能
        public string Name {get; private set;}
        public int Mood {get; private set; } = 5;
        public int Energy {get; set;} = 100;
        
        public VirtualPet(string name)
        {
            Name = name;
        }

        public void MoodUp()
        {
            if( Mood < 10)Mood++;
        }
        public void MoodDown()
        {
            if(Mood >= 0)Mood--;
        }
    }

    //課題p300

    class Sale
    {
        string _productname;
        public string ProductName {
            get{return _productname;}
            set{_productname = value;}
        }

        int _unitprice;

        public int UnitPrice 
        {
            get{return _unitprice;}
            set{_unitprice = value;}
        }

        int _quantity
        {
            get{return _quantity;}
            set{_quantity = value;}

        }
        
    }

    class ArrayUtils
    {
        public static int Total(int[] numbers)
        {
            var total = 0;
            foreach(var n in numbers)total += n;
            return total;
        }

        public static double Average(int[] numbers)
        {
            var total = Total(numbers);
            return (double)total / numbers.Length;
        }

        public int GetMin(int[] numbers, bool isPositive = false)
        {
            Array.Sort(numbers);
            if(isPositive = false)return numbers[0];
            else{
                for(var i = 0; i < numbers.Length; i++){
                    if(numbers[i] >= 0)return numbers[i];
                }
                //存在しないときは-1を返す
                return -1;
            }

        }
    }
}