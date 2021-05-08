#include <stdio.h>
void sort_array(int* v, int n, int m);

int main() {
	int size, order;
	scanf("%d %d", &size, &order);
	int value[size];
	for (int i = 0; i < size; i++) {
		scanf("%d", &value[i]);
	}
	sort_array(value, size, order);

	return 0;
}

void sort_array(int* v, int n, int m) {
	int tmp;
	if (m == 0) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < (n - 1) - i; j++) {
				if (v[j] > v[j + 1]) {
					tmp = v[j];
					v[j] = v[j + 1];
					v[j + 1] = tmp;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			printf("%d ", v[i]);
		}
	}
	else if (m == 1) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < (n - 1) - i; j++) {
				if (v[j] < v[j + 1]) {
					tmp = v[j];
					v[j] = v[j + 1];
					v[j + 1] = tmp;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			printf("%d ", v[i]);
		}
	}
}