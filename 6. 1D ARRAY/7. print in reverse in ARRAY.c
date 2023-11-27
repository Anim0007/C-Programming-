
 #include <stdio.h>

 int main()
{
    int arr[6];
    int size, i,n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter elements in array: \t");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray in reverse order: ");
    for(i = n-1; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
