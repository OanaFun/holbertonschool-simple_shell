[![Logo](https://uploads-ssl.webflow.com/64107f65f30b69371e3d6bfa/6480d9b63a806a1b35fec007_Holberton.png)](https://www.holbertonschool.fr/?utm_source=googleads&utm_medium=cta&utm_campaign=marque&gad=1&gclid=Cj0KCQjwrMKmBhCJARIsAHuEAPR2L8kfEV4McEyqp7jnK5xo70Y-eLbuF5pkCITtfnHnuS7EXWoZzRMaAhQCEALw_wcB)

# C - Simple Shell Team Project

A reproduction of basic Shell with some basic commands.
This is a 2 week project.

## TEAM PROJECT :

[![Static Badge](https://img.shields.io/badge/build-Oana-brightgreen?logo=github&label=Github&labelColor=e80c0c&color=191919
)](https://github.com/OanaFun)

[![Static Badge](https://img.shields.io/badge/build-Kévin-brightgreen?logo=github&label=Github&labelColor=0000FF&color=191919
)](https://github.com/Storm2601)


## COMPILATION :
### Clone this Repository :
 git clone https://github.com/OanaFun/holbertonschool-simple_shell.git

### Compile it with :
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh.

## DESCRIPTION :

    Command reading: The shell reads commands entered by the user, usually from a command line interface (CLI) or script.
    Command parsing: commands are parsed to identify individual elements such as commands, arguments, operators and so on.
    Command interpretation: The shell interprets commands and determines the actions to be performed. This may include program execution, file manipulation, I/O redirection, etc.
    Command execution: Once interpreted, commands are executed in the system environment. The shell creates processes to execute the corresponding programs or actions.
    Error handling: The shell handles possible errors, such as non-existent commands, permission problems, syntax errors, etc.
    Return of execution: After executing commands, the shell can return information on the result of the operation, such as exit codes to indicate whether the command was executed successfully or encountered problems.

## RETURN VALUE :

The shell shall return the exit status of the last command it invoked or attempted to invoke.

## NOTES :

The set of supporting functions: 'empty_line', '_getenv', 'execute', 'search_path', '_split' used in the function can be found in the files check_empty_line.c , environment.c , execute.c , search_path.c and split_string.c.

## FLOWCHART :


<picture>
 <img alt="flowchart description of simple_shell" src="https://github.com/OanaFun/holbertonschool-simple_shell/blob/main/Blank%20diagram.png">
</picture>
