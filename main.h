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
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
void free_grid(char **grid);
char *_strstr(char *haystack, char *needle);
char *_strtok(char *str, const char *delim);
char *get_env(char *name);
char *find_path(char *str, char *input);
char *attach_path(char *str, char **input);
void shell_exit(char **token_array, char *buffer, int status);
int fork_handler(char **token_array, char *buffer, int status);
int execute(char **token_array, char *buffer, int count, int status);
void print_env(void);

#endif