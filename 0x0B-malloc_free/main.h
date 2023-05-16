#ifndef MAIN_H
#define MAIN_H

char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char *_strdup(char *str);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char *create_array(unsigned int size, char c);
int _putchar(char c);

#endif
