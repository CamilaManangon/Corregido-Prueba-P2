#include <stdio.h>
#include "maze.h"
#include "player.h"

void juegoNuevo(int x, int y){
  char mov;
  int cmov = 0;
  int c = 0;
  imprimirMatriz(x,y);
  do{
    printf("Ingrese el movimiento que desea realizar: ");
    scanf(" %c",&mov);
    c = moverse(x,y,mov);
    if(c==1){
      y = y - 1;
    }else{
      if(c==2){
        x = x + 1;
      }else{
        if(c==3){
          y = y + 1;
        }else{
          if(c==4){
            x = x - 1;
          }
        }
      }
    }
    printf("\n");
    imprimirMatriz(x,y);
    cmov = movimientos(c,cmov);
    printf("\n");
    
 }while(x!=4 || y!=4);
  menFinal(cmov);
}

int main(void){
    int opc;
    int x = 0;//filas
    int y = 0;//columnas

    printf("Bienvenido al juego del laberinto\n");
    do{
        printf("\n1.Jugar\n2.Creditos\n3.Salir\n");
        printf("Ingrese la opcion que desea realizar.\n");
        scanf("%d", &opc);
        while(opc<=0 || opc>3){
        printf("Dato invalido.\n");
        printf("Ingrese la opcion que desea realizar.\n");
        scanf("%d", &opc);
    }
        switch(opc){
            case 1:
            juegoNuevo(x,y);
            break;
            case 2:
            printf("Camila Manangon\nID Banner: A00108321\n");
            break;
            default:
            printf("Saliste del menu.\n");
        }
    } while(opc!=3);
    return 0;
}
