#include <string.h>
#include <stdio.h>

int main() {
	char str[10] = "aigjaliurehgalrhgahrelu\0";
	printf("standard: %d\t mine: %d\n", strlen(str), mystrlen(str));
	return 0;
}


int mystrlen(char *s) {
	char *x = s;
	int len = 0;
	while (*(x + len) != 0) {
		len += 1;
}
	return len;
}
