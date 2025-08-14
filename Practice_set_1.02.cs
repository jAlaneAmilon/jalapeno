using System;
 
class Program
{
    static void Main(string[] args)
    {
        
        /*Practice 01.2:*/

        Console.WriteLine("Enter a number to check if negative or positive");
        int num = Convert.ToInt32(Console.ReadLine());
        if (num < 0)
        {
            Console.WriteLine("The number " + num + " is negative");
        }
        else if (num > 0)
        {
            Console.WriteLine("The number " + num + " is positive");
        }
        else
        {
            Console.WriteLine("The number " + num + " is neither positive or negative");
        }

    }

        
    }