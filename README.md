# holbertonschool-simple_shell
C - Simple Shell Team Project

A reproduction of basic Shell with some basic commands.
This is a 2 week project.

TEAM PROJECT :

[![Static Badge](https://img.shields.io/badge/build-Oana-brightgreen?logo=github&label=Github&labelColor=e80c0c&color=191919
)](https://github.com/OanaFun)

[![Static Badge](https://img.shields.io/badge/build-Kévin-brightgreen?logo=github&label=Github&labelColor=0000FF&color=191919
)](https://github.com/Storm2601)


COMPILATION :
Clone this Repository :
git clone https://github.com/OanaFun/holbertonschool-simple_shell.git

Compile it with :
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh.

DESCRIPTION OF FUNCTION simple_shell :

    Command reading: The shell reads commands entered by the user, usually from a command line interface (CLI) or script.
    Command parsing: commands are parsed to identify individual elements such as commands, arguments, operators and so on.
    Command interpretation: The shell interprets commands and determines the actions to be performed. This may include program execution, file manipulation, I/O redirection, etc.
    Command execution: Once interpreted, commands are executed in the system environment. The shell creates processes to execute the corresponding programs or actions.
    Error handling: The shell handles possible errors, such as non-existent commands, permission problems, syntax errors, etc.
    Return of execution: After executing commands, the shell can return information on the result of the operation, such as exit codes to indicate whether the command was executed successfully or encountered problems.

PARAMETERS :


RETURN VALUE :

Returns the value of the command typed in the shell.

NOTES :
 
 The supporting set of functions: int _strlen, int _strcmp, char *_strcat, char *_strcpy, char *_strdup, used within the function can be found in file aux_functions.c

FLOWCHART :
