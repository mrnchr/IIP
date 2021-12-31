using System;

namespace LabWorks
{
    class MainClass
    {
        public static void Main (string[] args)
        {
            int a, b;

            Console.WriteLine("Введите два числа: ");
            a = Math.Abs(Convert.ToInt32(Console.ReadLine()));
            b = Math.Abs(Convert.ToInt32(Console.ReadLine()));

            Console.WriteLine("Сумма модулей: " + (a + b));
            Console.WriteLine("Разность модулей: " + (a - b));
            Console.WriteLine("Произведение модулей: " + (a * b));
            Console.WriteLine("Частное модулей: " + (a / b));

            Console.Write("Нажмите любую клавишу для продолжения...");
            Console.ReadKey();
        }
    }
}