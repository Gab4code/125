#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>


int main() {
    int input;
    int t;
    printf("Enter number of child processes to be made:");
    scanf("%d", &input);
    
    pid_t pid = fork ();

    if (pid > 0)
    {
        printf("[Parent] Started at 1\n");

        for (int i = 0; i < input; i++){
        wait(NULL);
    }
    
    printf("[Parent] time ended: %d\n", input+2); 
    printf("All child processes done executing. Parent Exiting. \n");
    }
    
    for(int i = 0; i < input; i++)
    {
        if (pid == 0 )
        {
            printf("[Child %d] time started: %d\n",i+1,i+2);
            //exit(0);
        } 
        
    }
    

    
    
}