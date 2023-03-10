# Day 4 Question

## Question

1. solve the follwing snipet code.
   ```c
   #include<stdio.h>
   void main(){
       int a=40,b=35,c=20,d=10;
       int res1=a*b/c-d;
       int res2=a*b/(c-d);
       printf("%d",(res2-res1));
   }
   ```
1. Trace the follwing code :
   ```c
   #include<stdio.h>
   static int a=100;
   void main(){
       static int a=11;
       ++a;
       a=++a;
       printf("%d",a);
   }
   ```
1. what will be the output of the following code?
   ```c
   #include<stdio.h>
   int main(){
       register auto int i=10;
       i=11;
       printf("%d\n",i);
   }
   ```
1. Predict the output of the following program.
   ```c
   #include<stdio.h>
   int main(){
       int arr[4]={23,24,25,26};
       int *p *q;
       q=arr/2;
       p=q*2;
       printf("%d %d",*(p+1),*(p+3));
       return 0;
   }
   ```
1. Predecit the output of the following program.
   ```c
   #include<stdio.h>
   int main(){
       char line[]="welcome to the language of c programming";
       char string[5],string2[5],string3[5];sscanf(line,"%*s %*s %s %*s %*s %s %s",string,string2,string3);
       printf("%s %s %s",string,string2,string3);
       return 0;
   }
   ```
1. Predict the output of the following code
   ```c
   #include<stdio.h>
   int main(){
       int x[10]={3,0,8,1,12,8,9,2,13,10};
       int a,b,c;
       a=++x[2];
       b=x[2]++;
       c=x[a++];
       printf("%d %d %d",a,b,c);
       return 0;
    }
   ```
1. Predecit the output
   ```c
   #include<stdio.h>
   main(){
       int arr[]={3.8,4.4,5,7.7,5};
       int j,*ptr=arr,*q=arr;
       for(j=0;j<5;j++){
           printf("%d",*arr);
           ++q;
       }
       for(j=0;j<5;j++){
           printf("%d",*ptr);
           ++ptr;
       }
   }
   ```
1. Predict the output of the following code
   ```c
   #include<stdio.h>
   int main(){
    int i=-1;
    -i;
    printf("i=%d:-i=%d",i,-i);
    return 0;
   }
   ```

## Answer

1. 80
1. 13
1. remove the register keyword and it will work fine. vice versa.
1. arrary can't be divided by 2. so it will give error.
1. The ouput will be "the c programming".
1. 10 9 10
1. 3333334575
1. i=-1:-i=1
