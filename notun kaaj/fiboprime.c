#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int fibo(int n)
{
    int i, t1 = 0, t2 = 1, nextTerm;
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\b\b.");
    return 0;
}

int primeCheck(int n)
{
    int i;

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    pid_t pid;
    pid = fork();
    if (pid == 0)
    {
        fibo(n);
    }
    else
    {
        wait(NULL);
        if (primeCheck(n) == 1)
            printf("Not Prime");
        else
            printf("Prime");
    }
    printf("\n");
}