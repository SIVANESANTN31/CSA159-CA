[7:22 AM, 9/2/2023] +91 87783 23906: #include <stdio.h>
int main()
{
  int array[100], size, c, location = 0;

  printf("Enter number of elements in array\n");
  scanf("%d", &size);

  printf("Enter %d integers\n", size);

  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);

  for (c = 1; c < size; c++)
    if (array[c] < array[location])
      location = c;

  printf("Minimum element is present at location %d and its value is %d.\n", location+1, array[location]);
  return 0;
}
[7:22 AM, 9/2/2023] +91 87783 23906: Minimum number of array
[7:22 AM, 9/2/2023] +91 87783 23906: 
#include <stdio.h>
    void main()
    {
 
        int i, j, a, n, number[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
 
    }                                                                             asscending order
[7:22 AM, 9/2/2023] +91 87783 23906:
 #include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
}
[7:22 AM, 9/2/2023] +91 87783 23906: #include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int arr[] = {25, 11, 7, 75, 56};      
        
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    //Initialize min with first element of array.    
    int min = arr[0];    
        
    //Loop through the array    
    for (int i = 0; i < length; i++) {     
        //Compare elements of array with min    
       if(arr[i] < min)    
           min = arr[i];    
    }      
    printf("Smallest element present in given array: %d\n", min);    
    return 0;    
}
[7:22 AM, 9/2/2023] +91 87783 23906: 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float hits ,misses;
	float miss_ratio,hit_ratio;

	printf("Enter the no of cache hits\n");
   scanf("%d",&hits);
	printf("Enter the no of cache misses\n");
	scanf("%d",&misses);

	hit_ratio=hits/(hits+misses);
	printf("the hit ratio is=%2f\n",hit_ratio);

	miss_ratio=misses/(hits+misses);

	printf("the miss ratio=%2f\n",miss_ratio);


}