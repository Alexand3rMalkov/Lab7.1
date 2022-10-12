#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
int main()
{
	setlocale(LC_ALL, "rus");
	char c;
	printf("Введите символы 'a' or 'b' or 'цифру':");
	scanf("%c", &c); //считывание с консоли
	switch (c)
	{
	case 'a':
		printf("Это буква a\n");
		break;
	case 'b':
		printf("Это буква b\n");
		break;
	case '1':
		printf("Это цифра 1\n");
		break;
	case '2':
		printf("Это цифра 2\n");
		break;
	case '3':
		printf("Это цифра 3\n");
		break;
	case '4':
		printf("Это цифра 4\n");
		break;
	case '5':
		printf("Это цифра 5\n");
		break;
	case '6':
		printf("Это цифра 6\n");
		break;
	case '7':
		printf("Это цифра 7\n");
		break;
	case '8':
		printf("Это цифра 8\n");
		break;
	case '9':
		printf("Это цифра 9\n");
		break;
	case '0':
		printf("Это цифра 0\n");
		break;
	default:
		printf("Неизвестный символ");
	}
	return 0;
}