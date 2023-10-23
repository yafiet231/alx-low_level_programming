#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[0]);
void print_diasums(int *a, int size);
void set_string(char **s, char *to);

#endif
