#include <iostream>;
using namespace std;
void removeEven(int a[], int size) {
	int newSize = 0, count = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] % 2 != 0) { a[newSize++] = a[i]; count++; }
	}
	for (int i = 0; i < count; i++) {cout << a[i] << " ";}
}
int main() {
	setlocale(LC_ALL, "Ru"); const int size = 5; int a[size];
	srand(time(0));
	for (int i = 0; i < size; i++) { a[i] = rand() % 100 + 1; };
	for (int i = 0; i < size; i++) { cout << a[i] << " "; };
	cout << endl; removeEven(a, size);
}

