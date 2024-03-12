#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main() {
    int input;
    int t =0;
    printf("Enter number of child processes to be made:");
    scanf("%d", &input);
    
    pid_t pid = fork ();

    if (pid > 0) {                  //for parent process
        if(input != 0){
        printf("[Parent] Started at 1\n");

        // for (int i = 0; i < input; i++) {
            wait(NULL);
        //     t = t+i;
        // }
        printf("[Parent] Ended at time %d\n", input+2);
        printf("All child processes done executing. Parent Exiting. \n");
        } else {
            
        printf("[Parent] time started: 1\n");
        printf("[Parent] time ended: 2\n");
        printf("All child processes done executing. Parent Exiting. \n");

        }
    } else {                        //for child process
        for (int i = 0; i < input; i++) {
            printf("[Child %d] time started: %d\n", i+1, i+2);
        }
    }

    return 0;
}
