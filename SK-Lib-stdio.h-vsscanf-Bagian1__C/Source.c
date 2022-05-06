#pragma warning(disable:4996)

#include <stdio.h>
#include <stdarg.h>
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

void GetMatches(const char* str, const char* format, ...) {
	va_list args;
	va_start(args, format);
	vsscanf(str, format, args);
	va_end(args);
}

int main() {
	int val;
	char buf[100];

	GetMatches("99 bottles of beer on the wall", " %d %s ", &val, buf);
	printf("Product: %s\nQuantity: %d\n", buf, val);

	_getch();
	return 0;
}