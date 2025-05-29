
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	int x = 'f';
	printf("%c\n", x);
	printf("%d\n", x);
	printf("%c\n", 'a' + (x - 'a') + 1); // a + (f - a) + 1

	int a, b, c, d, e, f;
	a = 10;
	b = a++;	  // b = 10 a = 11
	c = ++a;	  // c = 12 a = 12
	d = 10 * a++; // d = 120 a = 13
	printf("%d %d %d %d\n", a, b, c, d);

	e = 3;
	f = 6;
	int g = e * f << 1; // g = 36
	printf("%d\n", g);

	int h;
	h = 3 > 6;
	printf("%d\n", h); // 0

	int i = 0x01 << 2 + 3; // 32,加法运算的优先级大于左移运算的优先级
	return 0;
}
