#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t pid;
    pid = fork();
    if (pid == 0)
    {
        printf("[CHILD] Current ID = %d\n", getpid());
        printf("[CHILD] Parent ID = %d\n", getppid());
    }
    else
    {   
        printf("[PARENT] Current ID = %d\n", getpid());
        printf("[PARENT] Parent ID = %d\n", getppid());
    }
}
