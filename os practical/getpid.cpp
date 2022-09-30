//WAP in C using getpid() system call.
//CODE:
#include <iostream>
#include <unistd.h>
#include<sys/types.h>
#include<process.h>
using namespace std;
  

int main(void)
{
    int pid_t = getpid();
    printf("pid is: %d\n", pid_t);
    return 0;

}

// // Driver Code
// int main()
// {
//     int pid = fork();
//     if (pid == 0)
//         cout << "\nCurrent process id of Process : " 
//              << getpid() << endl;
//     return 0;
// }