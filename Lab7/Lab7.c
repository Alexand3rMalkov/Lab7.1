#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
int main()
{
	setlocale(LC_ALL, "rus");
	char c;
	printf("������� ������� 'a' or 'b' or '�����':");
	scanf("%c", &c); //���������� � �������
	switch (c)
	{
	case 'a':
		printf("��� ����� a\n");
		break;
	case 'b':
		printf("��� ����� b\n");
		break;
	case '1':
		printf("��� ����� 1\n");
		break;
	case '2':
		printf("��� ����� 2\n");
		break;
	case '3':
		printf("��� ����� 3\n");
		break;
	case '4':
		printf("��� ����� 4\n");
		break;
	case '5':
		printf("��� ����� 5\n");
		break;
	case '6':
		printf("��� ����� 6\n");
		break;
	case '7':
		printf("��� ����� 7\n");
		break;
	case '8':
		printf("��� ����� 8\n");
		break;
	case '9':
		printf("��� ����� 9\n");
		break;
	case '0':
		printf("��� ����� 0\n");
		break;
	default:
		printf("����������� ������");
	}
	return 0;
}