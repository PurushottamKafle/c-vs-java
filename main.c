#include <stdio.h>
/**
LINEAR ALGORITHM
LINEAR ALGORITHM
LINEAR ALGORITHM
LINEAR ALGORITHM
LINEAR ALGORITHM

Developed by Purushottam Kafle
**/
int main(){

int array[100], search, c, n;
// first of  all we need to describe a dozens of variable in integer data format

printf("Enter the number of elements in array \n");// giving the propmt to users

scanf("%d", &n);// retriving data from users and setting in (n)
//
printf("Rntegers(s) \n",&n); // prompting again to inter integers couple of time


for(c=0; c<n; c++){
    scanf("%d", &array[c]);
}
printf("Enter number to search \n");

scanf("%d", &search);
/**
We Keep on comparing each element with the element with the element

**/
for(c=0; c<n; c++){
    if(array[c]==search){
        printf("%d is present at location %d. \n", search, c+1);
        break;
    }
}

if(c==n){
    printf("%d is not present in array", search);
}
return 0;
}

