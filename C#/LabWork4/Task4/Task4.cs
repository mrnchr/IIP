using System;

namespace LabWorks
{
    class MainClass
    {
        public static void Main (string[] args)
        {
            int a, b;

            Console.Write("������� ��� �����: \n");
            a = Convert.ToInt32(Console.ReadLine());
            b = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("����� ���������: " + (a * a + b * b));
            Console.WriteLine("�������� ���������: " + (a * a - b * b));
            Console.WriteLine("������������ ���������: " + (a * a * b * b));
            Console.WriteLine("������� ���������: " + (a * a / b / b));

            Console.Write("������� ����� ������� ��� �����������...");
            Console.ReadKey();
        }
    }
}