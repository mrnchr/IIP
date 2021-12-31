using System;

namespace LabWorks
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            double a, b;

            Console.WriteLine("Введите два числа: ");
            a = Convert.ToDouble(Console.ReadLine());
            b = Convert.ToDouble(Console.ReadLine());

            Console.Write("Среднее арифметическое равно: " + (a + b) / 2 + "\n");

            Console.Write("Нажмите любую клавишу для продолжения...");
            Console.ReadKey();
        }
    }
}