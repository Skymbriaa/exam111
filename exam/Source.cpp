#include <iostream>
#include <algorithm>

using namespace std;

// �������, �� �������� ���� �������� �������� ������
double sumOddElements(double* arr, int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 != 0) { // ���� ������� ��������
			sum += arr[i];
		}
	}
	return sum;
}

// �������, �� �������� ������� �������� ������, ������������ �� ������������ � ��������� ����������
double productBetweenMinMax(double* arr, int size) {
	double minValue = arr[0];
	double maxValue = arr[0];
	int minIndex = 0;
	int maxIndex = 0;
	// ��������� ������������ � ��������� �������� �� �� �������
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
	// ���� ������������ � ��������� �������� �� ���������� ���� ����� � �����, �� ������ ������� �������� �� ����
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
