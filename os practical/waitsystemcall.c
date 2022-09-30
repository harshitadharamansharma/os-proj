#include<stdio.h> 
#include<sys/file.h> 
#include<unistd.h> 

#include<unistd.h>


  
int main() 
{ 
    if (fork()== 0) 
        printf("HC: hello from child\n"); 
    else
    { 
        printf("HP: hello from parent\n"); 
        wait(NULL); 
        printf("CT: child has terminated\n"); 
    } 
  
    printf("Bye\n"); 
    return 0; 
}
