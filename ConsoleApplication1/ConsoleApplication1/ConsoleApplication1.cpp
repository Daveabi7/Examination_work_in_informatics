#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int SIZE = 10;
	int mas[SIZE];

	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		mas[i] = rand() % 21 - 10;
	}

	cout << "Всі елементи масиву:  ";
	for (int i = 0; i < SIZE; i++) {
		cout << mas[i] << "\t";
	}

	std::cout << endl;

	{
		int a = mas[0];
		int b = mas[1];
		int c = mas[2];
		int d = mas[3];
		int e = mas[4];
		int f = mas[5];
		int g = mas[6];
		int h = mas[7];
		int i = mas[8];
		int j = mas[9];

		std::cout << "Cуму елементів масиву: " << a + b + c + d + e + f + g + h + i + j << "\n"; }

	{
		int a = mas[0];
		int b = mas[1];
		int c = mas[2];
		int d = mas[3];
		int e = mas[4];
		int f = mas[5];
		int g = mas[6];
		int h = mas[7];
		int i = mas[8];
		int j = mas[9];

		std::cout << "Добуток елементів масиву: " << a * b * c * d * e * f * g * h * i * j << "\n"; }

	for (int startIndex = 0; startIndex < SIZE - 1; ++startIndex)
	{
		int smallestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < SIZE; ++currentIndex)
		{
			if (mas[currentIndex] < mas[smallestIndex])
				smallestIndex = currentIndex;
		}
		std::swap(mas[startIndex], mas[smallestIndex]);
	}

	cout << "Порядок елементів масиву: ";
	for (int i = 0; i < SIZE; i++) {
		cout << mas[i] << "\t";
	}

	return 0;
}