#include<stdio.h>
#include<stdlib.h>
int temp;
int m1[3][3], m2[3][3], mul[3][3];
int add();
int subtract();
int multiply();
int show();
int main(){
    int ch;
    printf("Enter elements of First matrix\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++)
            scanf("%d", &m1[i][j]);
    }
    printf("Enter elements of Second matrix\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++)
            scanf("%d", &m2[i][j]);
    }
    printf("Choose\n");
    while(1){
        printf("1)Add\n2)\tSubtract\n3)\tMultiply\n4)\tShow\n5)\tExit\n");
        scanf("%d", &ch);
        switch(ch){
            case 1: add(); break;
            case 2: subtract(); break;
            case 3: multiply(); break;
            case 4: show(); break;
            case 5:
                exit(0);
                break;
            default: printf("Invalid\n"); break;
        }
    }

    return 0;
}

int add(){
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++)
        {

            mul[i][j] = m1[i][j] + m2[i][j];
        }
    }
    return 0;
}

int subtract(){
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++)
            mul[i][j] = m1[i][j] - m2[i][j];
    }
    return 0;
}

int multiply(){
    int i, j, k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mul[i][j]=0;
            for(k=0;k<3;k++)
            {
                mul[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    return 0;
}

int show(){
    printf("\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++)
{
            printf("%d\t", mul[i][j]);
            m1[i][j] = mul[i][j];
}
        printf("\n");
    }
    return 0;
}
