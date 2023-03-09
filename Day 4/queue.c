#include <stdio.h>
#include <ctype.h>

// Create a queue of size 50
int queue[50];
int front = -1;
int rear = -1;

// Function to add an element to the queue
void enqueue(int data)
{
    if (rear == 49)
        printf("\nQueue is full");
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = data;
    }
}

// Function to delete an element from the queue
void dequeue()
{
    if (front == -1 || front > rear)
        printf("\nQueue is empty");
    else
    {
        printf("\nDeleted element is %d", queue[front]);
        front++;
    }
}

// Function to display the queue
void display()
{
    if (front == -1)
        printf("\nQueue is empty");
    else
    {
        int i;
        printf("\nQueue is ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}

int main(int argc, char const *argv[])
{
    char choice = 'E';
    int data;
    printf("A Queue is created with size 50\n");
    while (toupper(choice) != 'R')
    {
        printf("\nEnter your choice (Enqueue,Dequeue,diSplay,Return ): ");
        scanf("%c", &choice);
        switch (toupper(choice))
        {
        case 'E':
            printf("\nEnter the data to be inserted: ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 'D':
            dequeue();
            break;
        case 'S':
            display();
            break;
        case 'R':
            printf("Exit The Program\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}
