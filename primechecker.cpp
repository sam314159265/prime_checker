//prime checker
//3 steps
//step 1: find square root and take ceiling of it
//step 2: divide the number by number greater than 2 to sq root of it
//step 3: if it is divisible by any of them, then it is prime number
// otherwise it is composite number

#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>

int main()

{   int x, value1;

    jump:
    printf("Type a positive Number: ");
    scanf("%d",&x);
    if(x<1)
    {
        goto jump;
    }

    value1 = ceil(sqrt(x));

    int value2,i, count = 0;
    value2 = x;

    for(i=2;i<value1;i++)
    {
        if(value2%i==0)
            count = 1;
    }

    if(count == 0 && value2 != 1 || value2 ==2 || value2 == 3)
    {
        printf("%d is a Prime Number",value2);
    }
    else if(value2 == 1)
    {
        printf("%d is neither a Prime Number nor compound number",value2);
    }
    else
    {
        printf("%d is not a Prime Number",value2);
    }
    return 0;
}
