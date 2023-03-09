#include <stdio.h>
#include <ctype.h>

int stack[100];
int top = -1;

void pop(int *stack, int *top)
{
    if (*top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Popped element is %d\n", stack[*top]);
        *top = *top - 1;
    }
}

void push(int *stack, int *top, int element)
{
    if (*top == 99)
    {
        printf("Stack is full\n");
    }
    else
    {
        *top = *top + 1;
        stack[*top] = element;
    }
}

void display(int *stack, int *top)
{
    if (*top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        for (int i = *top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    char choice;
    int element;
    printf("A Stack is created with size 100\n");
    do
    {
        printf("Enter your choice (Pop, pUsh, Display,Return): ");
        scanf("%c", &choice);
        switch (toupper(choice))
        {
        case 'P':
            pop(stack, &top);
            break;
        case 'U':
            printf("Enter the element to be pushed: ");
            scanf("%d", &element);
            push(stack, &top, element);
            break;
        case 'D':
            display(stack, &top);
            break;
        case 'R':
            printf("Exit The Program\n");
            break;
        default:
            printf("Invalid Choice\n");
            break;
        }
    } while (choice != 'R');
    return 0;
}
