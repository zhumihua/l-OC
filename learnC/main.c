//
//  main.c
//  learnC
//
//  Created by lusisi on 2/13/15.
//  Copyright (c) 2015 lusisi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <objc/objc.h>
#include <readline/readline.h>
#include <math.h>


static float latestTemp=-20.0;

struct Person1{
    int weight;
    int age;
};

typedef struct Person2{
    int weight;
    int age;
} Person2;

void printP1(){
    struct Person1 Mimi;
    Person2 Miki;
    printf("Mimi: %d  %d \n",Mimi.age,Mimi.weight);
    printf("Miki: %d  %d  \n",Miki.age,Miki.weight);
    Person2 *MikiPtr = (Person2 *)malloc(sizeof(Person2));
    MikiPtr->weight=100;
    MikiPtr->age=10;
    free(MikiPtr);
    MikiPtr=NULL;
}

float bodyMassIndex(Person2 *p){
    float ret= (*p).weight/(*p).age;//-> dereference, similar to *p
    return p->weight/p->age;
}

void congrats(char *student, char *course, int numDays)
{
    printf("%s has done as much %s Programming a could fit into %d dyas\n", student, course, numDays);
    
}

void fun1(int *ftPtr, double *inPtr){
    *ftPtr=100;
    *inPtr=2.2;
}

int main(int argc, const char * argv[]) {
    
    int ft=0;
    double ina=0;
    fun1(&ft,&ina);
    printf("the value of ft: %d\n",ft);
    printf("the value of in: %.2f\n",ina);

    printf("Hello, World!\n");//in stdio
    printf("\n");
    printf("it was the best of times\n");
    
    congrats("abc","eefg",10);
    int x=abs(-5);//in stdlib.h
    printf("%d",x);
    
    const char *name = readline(NULL);
    printf("the name is %s\n",name);

    int age=atoi(readline(NULL));
    printf("the age is %d\n",age);
    
    int i=17;
    printf("the address of int i is %p\n",&i);
    printf("the address of the main function is %p\n",main);
    
    int *ptrI = &i;
    printf("the value of ptrI is %d\n", *ptrI);
    *ptrI = 100;
    printf("the value of i is %d\n",i);
    
    printf("a pointer is %zu bytes\n",sizeof(int *));
    printf("an int is %zu bytes\n",sizeof(int));
    printf("a pointer is %zu bytes\n",sizeof(i));
    printf("an int is %zu bytes\n",sizeof(ptrI));
    
    float *ptrF = NULL;
    if(ptrF){
        printf("ptrF is not NULL");
    
    } else {
        printf("ptrF is NULL");
    }
    
    ptrF = malloc(1000*sizeof(float));//malloc(int size), return the start address of the buffer
    free(ptrF);//free(start address of the buffer)
    ptrF = NULL; //make it forget where that memory is
    
    //BOOL isNotHere=false;//BOOL in objc/objc.h
    sleep(3);//in unistd
    
   // return 0;
    return EXIT_SUCCESS;//in stdlib
}


