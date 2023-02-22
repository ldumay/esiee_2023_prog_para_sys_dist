#include <unistd.h>

#include <sys/wait.h>

#include <sys/types.h>

#include <stdio.h>

#include <stdlib.h>



int main(){

int pid, status;

pid = fork();



switch (pid) {

case -1 : printf("le fork a echoue"); break;



case 0: printf(" je suis le fils, monpid = %d et le pid de mon pere = %d\n", getpid(), getppid());

exit(20); break; 

 

default: printf(" je suis le pere, monpid = %d et le pid de mon fils = %d et le gd pere = %d\n", getpid(), pid, getppid()); 

wait(&status);

printf("valeur retournee par mon fils = %d\n", WEXITSTATUS(status));

break; 

}

return 0;

}