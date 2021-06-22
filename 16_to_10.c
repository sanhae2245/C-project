#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int num(char* bit) {	//입력한 문자열(16bit)의 길이 확인
	int count = 1, i = 0;
	while (bit[i]!= 0) {
		count++; i++;
	}
	return count - 1;
}

int num_to_char(char all) {		//계산하기 편하게 문자를 10진수 형태로 변환
	int chg = 0;
	switch (all) {
	case 'A': chg = 10; break;
	case 'B': chg = 11; break;
	case 'C': chg = 12; break;
	case 'D': chg = 13; break;
	case 'E': chg = 14; break;
	case 'F': chg = 15; break;
	}
	return chg;
}

int num_to_char2(char all) {	//문자를 정수형으로 변환
	int chg = all - '0';
	return chg;
}

signed int trans(char* bit, int count) {	//문자열 각각을 10진수로 변환
	unsigned int sum = 0;
	for (int i = 0; i < count; i++) {
		if (bit[i] >= 'A' && bit[i] <= 'F') bit[i] = num_to_char(bit[i]);
		else bit[i] = num_to_char2(bit[i]);
		sum += bit[i] * pow(16, count - i - 1);
	}
	return sum;
}

int main() {
	char bit_16[100];
	printf("------------------------------------------\n");
	printf("	16진수를 10진수로 변환하기\n");
	printf("------------------------------------------\n");
	printf("변환하고 싶은 16진수를 입력하세요 : ");
	scanf("%s", bit_16);
	int value = num(bit_16);
	printf("------------------------------------------\n");
	printf("\n변환값은 %d입니다\n",trans(bit_16, value));
	return 0;
}