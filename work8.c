#include <string.h>
#include <stdio.h>

int main() {
	char str[10] = "hello\0";
	char str2[10] = " world\0";
	printf("standard: %d\t mine: %d\n", strlen(str), mystrlen(str));
        printf("standard: %s\t mine: %s\n", strcpy(str, str2), mystrcpy(str, str2));
	return 0;
}


int mystrlen(char *s) {
	char *x = s;
	int len = 0;
	while (x[len] != 0) {
		len += 1;
}
	return len;
}
char * mystrcpy(char *dest, char *source) {
	int i = 0;
	int n = 0;
	while (dest[i] != "\0" || source[n] != "\0") {
		if (dest[i] != "\0") {
			i++;
		}
		else if (source[n] != "\0") {
			dest[i + n] = source[n];
			n++;
		}
	}
	return dest;
}
