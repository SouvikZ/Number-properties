#include<stdio.h>
#include<math.h>

void function_call(int);
void odd_even(int);
void square(int);
void prime(int);
void perfect(int);
void armstrong(int);
void strong(int);
void palindrome(int);
int fact(int);
int reverse(int);

int main()
{
    int num;

    printf("Enter a number to check: ");
    scanf("%d",&num);

    printf("\n\nHere we will check different properties of this number...\n\n");
    function_call(num);
    return 0;
}

void function_call(num)
{
    odd_even(num);
    square(num);
    prime(num);
    perfect(num);
    armstrong(num);
    strong(num);
    palindrome(num);
}

void odd_even(int num)
{
    if(num%2==0)
        printf("1. Even number\n");
    else
        printf("1. Odd number\n");   
}

void square(int num)
{
    int temp;
    temp=sqrt(num);
    if(num==pow(temp,2))
        printf("2. Perfect square\n");
    else
        printf("2. Non_perfect square\n");
}

void prime(int num)
{
    int i,flag=1;
    
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }   
    }
    if(flag==1)
        printf("3. Prime\n");
    else
        printf("3. Non_prime\n"); 
}

void perfect(int num)
{
    int i,sum=0,rem=0;

    for (i=1;i<=(num-1);i++)
    {
        rem=num%i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
        printf("4. Perfect number\n");
    else
        printf("4. Non_perfect number\n");
}

void armstrong(int num)
{
    int temp,result=0,rem=0,digit=0;

    temp=num;
    while(temp!=0)
    {
        temp/=10;
        ++digit;
    }
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        result +=pow(rem,digit);
        temp /= 10;
    }
    if(result == num)
        printf("5. Armstrong number\n");
    else
        printf("5. Non_Armstrong number\n");
}

int fact(int num)
{
    int i,fac=1;
    
    for(i=1;i<=num;++i)
    {
        fac*=i;
    }
    return fac;
}

void strong(int num)
{
    int temp,temp2=0,sum=0;

    temp=num;    
    while(temp!=0){
        temp2=temp%10;
        sum+=fact(temp2);
        temp=temp/10;
    }
        
    if(sum==num)
        printf("6. Strong Number\n");
    else
        printf("6. Non_Strong Number\n");
}

int reverse(int num)
{
    int temp,rev=0,rem=0;

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        rev = rev*10 + rem;
        temp /= 10;
    }
    return rev;
}

void palindrome(int num)
{
    int temp,rev;

    temp = reverse(num);
    if(num==temp)
        printf("7. Palindrome number.\n", num);
    else
        printf("7. Non_Palindrome number.\n", num); 
}
