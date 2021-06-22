#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int num(char* bit) {	//�Է��� ���ڿ�(16bit)�� ���� Ȯ��
	int count = 1, i = 0;
	while (bit[i]!= 0) {
		count++; i++;
	}
	return count - 1;
}

int num_to_char(char all) {		//����ϱ� ���ϰ� ���ڸ� 10���� ���·� ��ȯ
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

int num_to_char2(char all) {	//���ڸ� ���������� ��ȯ
	int chg = all - '0';
	return chg;
}

signed int trans(char* bit, int count) {	//���ڿ� ������ 10������ ��ȯ
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
	printf("	16������ 10������ ��ȯ�ϱ�\n");
	printf("------------------------------------------\n");
	printf("��ȯ�ϰ� ���� 16������ �Է��ϼ��� : ");
	scanf("%s", bit_16);
	int value = num(bit_16);
	printf("------------------------------------------\n");
	printf("\n��ȯ���� %d�Դϴ�\n",trans(bit_16, value));
	return 0;
}