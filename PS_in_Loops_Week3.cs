using System;
class Program
{

    static void Main(string[] args)
    {
        //1.Countdown from 10 to 1
        for (int i = 10; i >= 1; i--)
        {
            Console.WriteLine(i);
        }
        //2. Print Odd numbers.
        for (int j = 1; j <= 50; j++)
        {
            if (j % 2 == 1)
            {
                Console.WriteLine(j);
            }
        }
        //3. Power of a number.
        Console.Write("Enter the Base: ");
        int baSe = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter the Exponent: ");
        int exp = Convert.ToInt32(Console.ReadLine());
        int holder = 1;

        for (int initial = 1; initial <= exp; initial++)
        {
            holder *= baSe;
        }
        Console.WriteLine(holder);
        //4. Sum of the squares.
        int totalSum = 0;

        for (int i = 1; i <= 10; i++)
        {
            int hold = i * i;
            totalSum += hold;
        }
        Console.WriteLine(totalSum);
        //5.Sum of Odd digits.
        int carrier = 0;
        for (int givenNum = 50; givenNum >= 1; givenNum--)
        {
            if (givenNum % 2 == 1)
            {
                carrier += givenNum;
            }
        }
        Console.WriteLine(carrier);
    }
}
