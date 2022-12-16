#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(int ac, char *av[])
{
    int pid;
    pid=fork(); // fork() can't be used in windows. It will run online and in Linux

    if(pid==0)
    {
        printf("Child completed\n");
        printf("Child process id is %d\n", getpid());
        execvp("/bin/ls",av);
    }
    else
    {
        printf("This is Parent Process\n");
        printf("Parent process id is %d\n", getpid());
    }
    return 0;
}