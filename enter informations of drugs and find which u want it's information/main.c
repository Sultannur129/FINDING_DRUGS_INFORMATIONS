/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    
   char drugName[20];
   int number;
   int price;
    
}data;

int main()
{
    
    
    char name[50];
    data drug[100];
    int information;
    printf("How many drugs will you enter their informations:");
    scanf("%d",&information);
    int i;
    for(i=0;i<information;i++){
        printf("%d . please enter the name of drug:",i+1);
        scanf("%s",drug[i].drugName);
        printf("%d. How many pieces of medicine:",i+1);
        scanf("%d",&drug[i].number);
        printf("%d. ilacın fiyatını giriniz:",i+1);
        scanf("%d",&drug[i].price);
        printf("\n\n");
    }
    printf("\n\n");
    
    printf("Please enter the name of drug which you want information:");
    scanf("%s",name);
    
    for(int i=0;i<information;i++){
        
        if(strcmp(drug[i].drugName,name)==0){
            printf("%s informations:\n",name);
            printf("%s . pieces:%d\n",drug[i].drugName,drug[i].number);
            printf("%s. price:%d\n",drug[i].drugName,drug[i].price);
            
            
        }
        
        
    }

    return 0;
}

