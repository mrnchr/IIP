using System;

namespace LabWorks
{
    class MainClass
    {
        public static void Main (string[] args)
        {
            int a, b;

            Console.Write("Введите два числа: \n");
            a = Convert.ToInt32(Console.ReadLine());
            b = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("Сумма квадратов: " + (a * a + b * b));
            Console.WriteLine("Разность квадратов: " + (a * a - b * b));
            Console.WriteLine("Произведение квадратов: " + (a * a * b * b));
            Console.WriteLine("Частное квадратов: " + (a * a / b / b));

            Console.Write("Нажмите любую клавишу для продолжения...");
            Console.ReadKey();
        }
    }
}