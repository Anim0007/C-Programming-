
#include <stdio.h>

int main()
{

    int i, N;


    printf(" size of the array : ");
    scanf("%d", &N);
    int arr[N];


    printf("Enter elements in array : ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nAll negative elements in array are : ");
    for(i=0; i<N; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
