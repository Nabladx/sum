// sum.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	const int n = 7;
	int a, b;
	double sum = 0;
	int arr[n] = { -1, 2, -3, 99, -5, -6, 7 };
	cout << "Input a:" << endl;
	cin >> a;
	cout << "Input b:" << endl;
	cin >> b;
	for (int i = (a+1); i < (b-1); i++)
	{
		if (arr[i] > 0)
		{
			try {
				sum = sum + arr[i];
			}
			catch (overflow_error err) {
				cout << "Overflow_error: " << err.what() << endl;
			}
		}
	}
	cout << sum << endl;
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"
// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
