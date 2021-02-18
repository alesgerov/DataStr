#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100000
int *stack,pos=-1;
void push(int input);
void pop();
int size();
int back();
void clear();

int main() {
    char word[10];

    stack=(int *) realloc(stack,MAX* sizeof(int ));
    while (scanf("%s",word)!=EOF){
        if (strcmp(word,"push")==0){
            int n;
            scanf("%d",&n);
            printf("ok\n");
            push(n);

        } else if (strcmp(word,"pop")==0){
            if (pos==-1){
                printf("error\n");
            } else{
                printf("%d\n",back());
                pop();
            }
        } else if (strcmp(word,"size")==0){
            printf("%d\n",size());
        }else if (strcmp(word,"back")==0){
            if (pos==-1){
                printf("error\n");
            } else{
                printf("%d\n",back());
            }
        }else if (strcmp(word,"clear")==0){
            printf("ok\n");
            clear();

        } else if (strcmp(word,"exit")==0){
            printf("bye\n");
            exit(0);
        }

    }
    free(stack);
    return 0;
}
void push(int input){
    pos++;
    (*(stack+pos))=input;
}
void pop(){
    pos--;
}
int size(){
    int res=pos+1;
    return res;
}
int back(){
    int res=(*(stack+pos));
    return res;
}
void clear(){
    pos=-1;
}


