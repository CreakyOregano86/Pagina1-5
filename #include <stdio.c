#include <stdio.h>

int main (){
    int pid;
    int SIGKILL;
    int kill;
    
    printf("Ingrese el pid del proceso que desea eliminar:");
    scanf("%d", &pid);

    if(kill(pid, SIGKILL) == 0) {
        printf("El proceso %d ha sido eliminado. \n", pid);
    }
    return 0;
    }