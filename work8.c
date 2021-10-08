#include <string.h>
#include <stdio.h>
#include "mystring.h"

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
	while (source[i] != 0) {
		dest[i] = source[i];
		i++;
	}
	return dest;
}
char * mystrcat(char *dest, char *source) {
	int i = 0;
	int n = 0;
	while (source[n] != 0) {
		if (dest[i] != 0) {
			i++;
		}
		else if (source[n] != 0) {
			dest[i + n] = source[n];
			n++;
		}
	}
	return dest;
}
int mystrcmp(char *s1, char *s2) {
	int i = 0;
	while (s1[i] != 0 && s2[i] != 0) {
		if (s1[i] < s2[i]) {
			return -1;
		}
		else if (s1[i] > s2[i]) {
			return 1;
		}
		i++;
	}

	if (s1[i] == 0 && s2[i] == 0) {
		return 0;
	}
	else if (s1[i] == 0) {
		return -1;
	}
	else {
		return 1;
	}
}
char * mystrchr(char *s, char c) {
	int i = 0;
	while (s[i] != 0) {
		if (s[i] == c) {
			return s + i;
		}
		i++;
	}
	if (c == 0) {
		return s + i;
	}
}
