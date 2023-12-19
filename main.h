#ifndef MAIN_H
#define MAIN_H

/** Librairies */
#include <string.h> /** manipulate strings */
#include <stdio.h>  /** manage inputs/outputs */
#include <stdlib.h> /** memory management, random number string */
                    /** conversions, etc */
#include <unistd.h> /** access to the POSIX operating system API */
#include <stdarg.h> /** accept a variable number of arguments */
#include <sys/stat.h>   /** define types and functions to manipulate */
                        /** file and directory information */
#include <sys/wait.h> /** waits for the end of a child process */
#include <sys/types.h> /** contains definitions of data types used by */
                        /** system functions */
/** prototypes */
int main(void);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
char *_strstr(char *haystack, char *needle);
char *_strtok(char *str, const char *delim);
char *_getenv(const char *name, char **env);
void check_path(char **string, char **env);

#endif