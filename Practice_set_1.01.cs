using System;
 
class Program
{
    static void Main(string[] args)
    {
        /*Practice 01.1*/
        Console.WriteLine("Enter number to check if even:");

        double a = Convert.ToDouble(Console.ReadLine());

        if (a % 2 == 0)
        {
            Console.WriteLine("The number " + a + " is even");
        }
        else
        {
            Console.WriteLine("The number " + a + " is not even");
        }
        

    }

        
    }