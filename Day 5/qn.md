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
1. Eesha is developing an IP telephony software in which the audio is encoded and decoded transmited by the sender as netowrk packets through a communication channel.At the other end these packets are assembled and processed futher. Eesha recoginzes that there maybe a very large number of packets this number is unknown and which will be processed while more packets are being received. assume that the packets arrive in the right order . What data structure should she use to store the packets?
   - array
   - stack
   - queue
   - linked
1. Eesha works for ISRO where she is involved in a mission to intercept a comet that is likely to collide with in each with in 1 month. she is developing a c program to calculate the trajectory of the missile to be launched to intersect and destroying the apporaching comet. In order to achive highest accuracy of the missile tracjectory what data type should she use for the variables in the equation?
   - float
   - double
   - long double
   - int
1. which of the following is true ?
   - Array is a dynamic data structure whose size can be changed while stacks are static data structures whoes size are fixed.
   - Array elements can be accessed and modified (elements can be added or removed) only at the end of the array while any element of the stack can be accessed and modified.
1. where local variables are stored in memory?
   - stack
   - heap
   - code segment
   - data segment
1. what is the following declaration?
   ```c
   int (*ptr)[10];
   ```
1. Talika wants to implement a heterogeneous linked list for her project.which of the following will help her do the same.
   - void pointer
   - Null pointer
   - wild pointer
   - dangling pointer
1. How many numbers will the stack contains after the following operations on a stack of size 7?
   - push(8)
   - push(0)
   - pop()
   - push(2)
   - push(3)
   - pop()
   - push(4)
   - pop()
   - pop()
   - push(5)
1. Retervial operation is fastest in which of the following data structures?
   - stack
   - queue
   - linked list
   - Heap
1. what is the slowest sort alogrithm?
   - bubble sort
   - insertion sort
   - selection sort
   - merge sort
1. what is the average case complexity of quick sort?
   - O(nlogn)
   - O(n^2)
   - O(n)
   - O(logn)
1. Doubly linked list can be travesed in
   - forward direction
   - backward direction
   - both forward and backward direction
   - none of the above
1. Binary search alogratihm exploits which of the alogrithm design technique?
   - divide and conquer
   - greedy
   - dynamic programming
   - backtracking
1. visiting the root node first is called ?
   - pre order
   - post order
   - in order
   - level order
1. Heap an be used as :
   - priority queue
   - stack
   - A decerding order array
   - none of the above
1. which of these is called a linear array?
   - 1D array
   - 2D array
   - vertical array
   - none of the above

## Answer

1. 80
1. 13
1. remove the register keyword and it will work fine. vice versa.
1. arrary can't be divided by 2. so it will give error.
1. The ouput will be "the c programming".
1. 10 9 10
1. 3333334575
1. i=-1:-i=1
1. linked
1. Double
1.
1. stack
1. pointer to array of 10 integers // ! this is not correct
1. void pointer
1. No of elements in stack = 1
1. Heap
1. O(n^2)
1. both forward and backward direction
1. divide and conquer
1. pre order
1. level order
1. priority queue
