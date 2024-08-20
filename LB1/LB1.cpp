#include "Train.h"
#include "Source.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "Введите количество поездов: ";
	cin >> x;
	cin.ignore();

	Train* arr = new Train[x]; //Массив объектов
	VS(arr, x);
	return 0;
}
