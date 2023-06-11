#include <stdio.h>
#include "player.h"
#include "maze.h"
//comprobar que no salga de la matriz
int comprobarMov(int x, int y){
    if(x<0 || x>4 || y<0 || y>4){
        return 0;
    }else{
        return 1;
    }
}
//movimientos

int moverse(int x, int y, char mov){
  int  c;
  switch(mov){
      case 'a':
        if(comprobarMov(x,y-1)==1 && comprobarPared(x,y-1)==1){
          c = 1;
        }else{
          printf("Movimiento inválido.\n");
          return 0;
        }
      break;

      case 's':
        if(comprobarMov(x+1,y)==1 && comprobarPared(x+1,y)==1){
          c = 2;
        }else{
          printf("Movimiento inválido.\n");
          return 0;
        }
      break;

      case 'd':
        if(comprobarMov(x,y+1)==1 && comprobarPared(x,y+1)==1){
          c = 3;
        }else{
          printf("Movimiento inválido.\n");
          return 0;
        }
      break;

      case 'w':
        if(comprobarMov(x-1,y)==1 && comprobarPared(x-1,y)==1){
          c = 4;
        }else{
          printf("Movimiento inválido.\n");
          return 0;
        }
      break;
    default:
      printf("Movimiento inválido.\n");
      return 0;
    break;
    }
  return c;
}

int movimientos(int c, int cmov){
  if(c != 0){
    cmov = cmov + 1;
    printf("La cantidad de movimientos realizado es: %d\n\n",cmov);
  }else{
    cmov = cmov;
  }
  return cmov;
}

void menFinal(int cmov){
  printf("Felicidades, has ganado.\n");
  if(cmov <= 8){
    printf("Eres un pro.\n");
  }else{
    if(cmov<15){
      printf("Eres novato.\n");
    }else{
      printf("Eres un noob!\n");
    }
  }
}
