#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include "calculator.h"

int mx_vopr(char *str);
int mx_strlen_int(int n);
char mx_znak(char *s);
int mx_lengh(char *str);
int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
char *mx_strcpy(char *dst, const char* src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
void mx_printerr(const char *s);
char *mx_unit(char *par1, char *par2, char *par3, char dia);
void mx_rec(char *vyr);
bool mx_is_true(char *vyr);
bool mx_isdia(char c);
void mx_printres(char *vyr);
void pr_misstake(enum e_error m, char* a, char* b, char* c, char* d);

#endif
