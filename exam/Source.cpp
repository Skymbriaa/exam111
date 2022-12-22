#include <iostream>
#include <algorithm>

using namespace std;

// функція, що обчислює суму непарних елементів масиву
double sumOddElements(double* arr, int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 != 0) { // якщо елемент непарний
			sum += arr[i];
		}
	}
	return sum;
}

// функція, що обчислює добуток елементів масиву, розташованих між максимальним і мінімальним елементами
double productBetweenMinMax(double* arr, int size) {
	double minValue = arr[0];
	double maxValue = arr[0];
	int minIndex = 0;
	int maxIndex = 0;
	// знаходимо максимальний і мінімальний елементи та їх індекси
	for (int i = 1; i < size; i++) {
		if (arr[i] < minValue) {
			minValue = arr[i];
			minIndex = i;
		}
		if (arr[i] > maxValue) {
			maxValue = arr[i];
			maxIndex = i;
		}
	}
	double product = 1;
	// якщо максимальний і мінімальний елементи не розташовані один поруч з одним, то рахуємо добуток елементів між ними
	if (minIndex < maxIndex - 1) {
		for (int i = minIndex + 1; i < maxIndex; i++) {
			product *= arr[i];
		}
	}
	else if (maxIndex < minIndex - 1) {
		for (int i = maxIndex + 1; i < minIndex; i++) {
			product *= arr[i];
		}
	}
	return product;
}

double sumOddElements(double* array, int size);
