#include <stdio.h>	// подключение библиотеки stdio для ввода и вывода данных
#include <math.h>	// подключение библиотеки math для мат функций

// Функция для проверки нахождения точки

int check(float x, float y) {
	return ((pow(x, 2) + pow(y, 2) <= 1) && (y <= (x + 1)) && (y <= (-1 * x + 1))) ? printf("Point (%f, %f) lying in area\n", x, y): printf("Point (%f, %f) not lying in area\n", x, y);
}



int main() {
	float x, y;	// объявление вещественных переменных х и у
	printf("Input x and y: ");
	scanf_s("%f %f", &x, &y);	// ввод значений х и у


	// Решение 1. Вложенные условия

	printf("Solution 1\n");
	if (pow(x, 2) + pow(y, 2) <= 1) {
		if (y <= (x + 1)) {
			if (y <= (-1 * x + 1)) {
				printf("Point (%f, %f) lying in area", x, y);
			}
			else {
				printf("Point (%f, %f) not lying in area", x, y);
			}
		}
		else {
			printf("Point (%f, %f) not lying in area", x, y);
		}
	}
	else {
		printf("Point (%f, %f) not lying in area", x, y);
	}

	// Решение 2. Сложное условие

	printf("\nSolution 2\n");
	if ((pow(x, 2) + pow(y, 2) <= 1) && (y <= (x + 1)) && (y <= (-1 * x + 1))) {
		printf("Point (%f, %f) lying in area", x, y);
	}
	else {
		printf("Point (%f, %f) not lying in area", x, y);
	}

	// Решени 3. Проверка через функцию

	printf("\nSolution 3\n");
	check(x, y);
	float x, y;
	scanf_s("%f %f", &x, &y);
	if (x >= -1 && x <= 0) {
		if (pow(x, 2) + pow(y, 2) <= 1) {
			printf("+");
		}
	}
	else if (x >= 0 && x <= 0.5) {
		if (y <= -2 * x + 1 && y >= 2 * x - 1) {
			printf("+");
		}
	}
	return 0;
}
