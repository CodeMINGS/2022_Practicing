#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[]="abcd";
    fflush(stdin);
    char arr2[]={'a','b','c'};
   // char arr3[]={'a','b','c','\0'};
    //printf("%s\n",arr1);
    printf("%s\n",arr2);
   // printf("%s\n",arr3);

    printf("%ld\n",strlen(arr1));
    printf("%ld\n",strlen(arr2));

    return 0;
}