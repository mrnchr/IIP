using System;

namespace LabWorks
{
    class MainClass
    {
        public static void Main (string[] args)
        {
            int a, b;

            Console.WriteLine("������� ��� �����: ");
            a = Math.Abs(Convert.ToInt32(Console.ReadLine()));
            b = Math.Abs(Convert.ToInt32(Console.ReadLine()));

            Console.WriteLine("����� �������: " + (a + b));
            Console.WriteLine("�������� �������: " + (a - b));
            Console.WriteLine("������������ �������: " + (a * b));
            Console.WriteLine("������� �������: " + (a / b));

            Console.Write("������� ����� ������� ��� �����������...");
            Console.ReadKey();
        }
    }
}