/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Manuel
 *
 * Created on 23 de noviembre de 2016, 12:37
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv) {
    
    int a;
    
    printf("Introduzca un número: ");
    
    scanf("%d",&a);
    
    if (a==0){
        
        printf("%d Es cero",a);
    }
    else{
         if (a>0){
             
        printf("%d Es positivo",a);
    }
         else{
             
             printf("%d Es negativo",a);
         }
    }
    return 0;
}

