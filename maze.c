#include<stdio.h>
#include "maze.h"

int maze[5][5] = {
    {0,1,0,0,0},
    {0,1,1,1,0},
    {0,0,0,0,0},
    {0,1,0,1,0},
    {1,0,0,1,0}
};

int x = 0;//filas
int y = 0;//columnas

//funcion para imprimir
void imprimirMatriz(int x, int y){
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
        if(i==x && j==y){
          printf("X");
        }else{
            printf("%d", maze[i][j]);
        }
    }
    printf("\n");
    }
}

//funcion para comprobar movimiento
int comprobarPared(int x, int y){
    if(maze[x][y]==1){
        return 0;
    }else{
        return 1;
    }
}
