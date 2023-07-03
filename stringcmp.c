#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void bubblesort(char names[][20], int n)
{
    int i, j;
    char temp[20];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}
int main(void)
{
    int a;
    printf("Enter total students: ");
    scanf("%d", &a);
    char names[a][20];
    printf("Enter the names of students: ");
    for (int i = 0; i < a; i++)
    {
        scanf("%s", names[i]);
    }
    bubblesort(names, a);
    printf("Sorted names are: ");
    for (int i = 0; i < a; i++)
    {
        puts(names[i]);
    }
}