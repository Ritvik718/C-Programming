#include <stdio.h>

int main() {
    int a,b,c,d,e,f,g;
    printf("enter the marks of subject 1:");
    scanf("%d",&a);
    
    if(a>50){
        printf("you have passed in subject 1\n");
    }
    
    else{
        printf("fail\n");
    }
    
    printf("enter the marks of subject 2:");
    scanf("%d",&b);
    
    if(b>50){
        printf("you have passed inh subject 2\n");
    }
    else{
        printf("fail\n");
    }
    
    printf("enter the marks of subject 3:");
    scanf("%d",&c);
    
    if (c>50){
        printf("you have passed in subjecty 3\n");
    }
    
    else{
        printf("fail\n");
    }
    
    printf("enter the marks of subject 4:");
    scanf("%d",&d);
    
    if(d>50){
        printf("you have passed in subject 4\n");
    }
    
    else{
        printf("fail\n");
    }
    
    printf("enter the marks of subject 5:");
    scanf("%d",&e);
    
    if(e>50){
        printf("you have passed in subject 5\n");
    }
    else{
        printf("fail\n");
    }
    
    f = a+b+c+d+e;
    g = (f/500) * 100;
    
    
    if(f>90){
        printf("A grade\n");
    }
    
    else if(f>80 && f<90){
        printf("B grade\n");
    }
    else if(f>70 && f<80){
        printf("C grade\n");
    }
    
    else{
        printf("D grade");
    }

    return 0;
}