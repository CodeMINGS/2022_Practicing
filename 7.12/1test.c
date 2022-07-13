
#include<stdio.h>
//写一个宏把一个整型数组的每一个元素置零
#define clear_array(a,n){\
        int i;\
        for(i=0;i<n;i++)\
        {\
        a[i]=0;}\
        }

#define max_array(b,m,max)({\
        max=b[0];\
        for(int i=0;i<m;i++)\
        {\
            if(max<b[i])\
            {max=b[i];}\
        }\
        max;\
})


/*int main()
{   
    int a[3]={1,2,2};
    clear_array(a,3);
    printf("%d\n",a[2]);
    return 0;
}
*/

int main()
{
    int max=0;
    int b[5]={1,9,7,5,3};
    
    printf("%d\n",max_array(b,5,max));
    return 0;
}
