#include <stdio.h>
#define HEIGHT 10
#define WIDTH 10

void brighten_image(char* p, int n) {
	int i;
	for (i = 0; i < HEIGHT * WIDTH; i++) {
		if (p[i] > 0) {
			p[i]--;
		}
	}
}

int main() {
	char image[HEIGHT * WIDTH] = {
		0,0,0,0,9,0,0,0,0,0,
		0,0,0,9,9,0,0,0,0,0,
		0,0,9,0,9,0,0,0,0,0,
		0,0,0,0,8,0,0,0,0,0,
		0,0,0,0,9,0,0,0,0,0,
		0,0,0,0,7,0,0,0,0,0,
		0,0,0,0,8,0,0,0,0,0,
		0,0,0,0,9,0,0,0,0,0,
		0,0,0,0,9,0,0,0,0,0,
		0,0,6,6,9,7,7,0,0,0
	};
	brighten_image(image, HEIGHT * WIDTH);

	for (int i = 0; i < HEIGHT * WIDTH; i++) {
		printf("%d ",image[i]);
		if (i % 10 == 9) {
			printf("\n");
		}
	}


	return 0;
}