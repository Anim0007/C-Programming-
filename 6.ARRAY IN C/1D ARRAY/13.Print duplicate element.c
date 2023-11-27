#include <stdio.h>

  int main(void)
   {

     int  i, j, size,count=0;

     printf("Enter the size of an array \n");
     scanf("%d",&size);
     int arr[size];

     printf("Enter the elements in an array\n");

     for( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
     }

   printf("Duplicate element in an array is : " ) ;
      for(i = 0; i < size; i++){
         for(j=i+1; j < size; j++){


           if(arr[i] == arr[j]){
                count++;


              printf(" %d ",arr[j]);
              break;

            }
         }

      }
      printf("count =%d",count);



      return 0;
 }

