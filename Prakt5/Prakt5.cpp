
#include "func.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	//Сравнение двух целых чисел
	std::cout << "Два целых числа. Первое = 10, второе = 5" << std::endl;
	std::cout << "Максимум: " << maxNumber(10, 5) << std::endl;

	//Сравнение трех целых чисел
	std::cout << "Три целых числа. Первое = 30, второе = 35, третье = 4" << std::endl;
	std::cout << "Максимум: " << maxNumber(30, 35, 4) << std::endl;

	//Сравнение двух чисел типа float
	std::cout << "Два числа float. Первое = 2.34, второе = 1.8" << std::endl;
	std::cout << "Максимум: " << maxNumber(2.34f, 1.8f) << std::endl;

	//Сравнение трех чисел типа double
	std::cout << "Три целых double. Первое = 52.52, второе = 13.5, третье = 12.2" << std::endl;
	std::cout << "Максимум: " << maxNumber(52.52, 13.5, 12.2) << std::endl;

	return 0;
}


