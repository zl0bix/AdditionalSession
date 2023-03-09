#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
void formula(double a, double b) {
	std::cout << "x=-b/a\nx = " << -b / a << "\n";
}

void formula(double a, double b, double c) {
	double D = b * b - 4.0*a * c;
	if (D < 0)
		std::cout << "Корней нет\n";
	else if (D == 0)
		std::cout << "x = " << -b / (2.0 * a) << "\n";
	else {
		std::cout << "x1 = " << (-b -sqrt(D))/(2.0*a)<<"\n";
		std::cout << "x2 = " << (-b +sqrt(D))/(2.0*a) << "\n";
	}

}

template <typename T>//вывод массива в консоль
void print_arr(T arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
		std::cout << std::endl;
}

template <typename T>//заполнение массмива случайными числамии
void fill_arr(T arr[],const int length,int left,int right){
	static unsigned int add = 0;//генирация разных эл-ов массива
	srand(time(NULL)+add);
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
	add++;
}


int main() {
	setlocale(LC_ALL, "rus");

// Задача сложение массивов

	const int size=10;
	int arr1[size], arr2[size];

	std::cout << "Массив 1 \n";
	fill_arr(arr1, size, 10, 21);
	print_arr(arr1, size);
	
	std::cout << "Массив 2 \n";
	fill_arr(arr2, size, 10, 21);
	print_arr(arr2, size);

	std::cout << "Итог:\n";

	for (int i = 0; i < size; i++) 
		std::cout << arr1[i] + arr2[i] << ' ';
	std::cout << std::endl;
	std::cout << std::endl;


// Задача перегруженнаям функция квадратного уравнения
	std::cout << "\tEx2\n\n" << "7*X^2+3X-2=0\n"; formula(7, 3, -2); std::cout << std::endl;
	std::cout << "\tEx2\n\n" << "6*X+18=0\n"; formula(6, 18); std::cout << std::endl;


	return 0;
}