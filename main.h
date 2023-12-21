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
/** Prototypes */
char *_getenv(char *env_var);
void _printenv(void);
int empty_line(char *buff);
int execute(char **args);
char **_split(char *str, const char *delim);
char *search_path(char *command);

extern char**environ;

#endif
