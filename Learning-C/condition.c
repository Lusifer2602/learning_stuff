#include<stdio.h>
int main(){
    int a;
    char hehe[15]="I AM BATMAN";
    printf("%s\n", hehe);
int i, b=0;
printf("Enter a number : ");
scanf("%d", &i);
if(i%2==0){
    for(int a=1; a<=10; a++){
        printf("%d wow\n", a);
    }
}

else{
    for(b=0; b<=11; b+=2){
        if (b==0){
            continue;
        }
    printf("%d lol\n", b);
    }
}

return 0;
}