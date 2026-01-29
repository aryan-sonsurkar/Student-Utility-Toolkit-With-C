#include<stdio.h>
int main()
{
    int a,i,choice,digit,sum=0,reverse=0,original,result;
    printf(";\n------------------------\n");
    printf("STUDENT UTILITY TOOLKIT");
    printf("\n------------------------\n");

    do
    {
        printf("Menu Options:-\n");
        printf("1. Sum od digits of a number\n");
        printf("2. Reverse a number\n");
        printf("3. Check Palindrome\n");
        printf("4. Check Armstrong number\n");
        printf("5. Check Even or Odd\n");
        printf("6. Multiplication Table\n");
        printf("7. Exit\n");

        printf("Enter your choice:  ");
        scanf("%i",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter a number:  ");
                scanf("%i",&a);

                while(a>0)
                {
                    digit = a%10;
                    a = a/10;
                    sum = sum+digit;}
                printf("Sum of digits = %i\n",sum);
                sum = 0;
                break;
            
            case 2:
                printf("Enter a number:  ");
                scanf("%i",&a);
                while(a>0)
                {
                    digit = a%10;
                    reverse = reverse*10+digit;
                    a = a/10;}
                printf("Reverse number is %i\n",reverse);
                reverse = 0;
                break;

            case 3:
                printf("Enter a number:  ");
                scanf("%i",&a);
                original = a;
                while(a>0){
                digit = a%10;
                reverse = reverse*10+digit;
                a = a/10;}
                if (original==reverse)
                    printf("It is Palindrome\n");
                else
                    printf("It is not a Palindrome\n");
                reverse = 0;
                break;
                    
            case 4:
                printf("Enter a number:  ");
                scanf("%i",&a);
                original = a;
                while(a>0){
                digit = a%10;
                sum += digit*digit*digit;
                a = a/10;
                }
                if (sum==original)
                    printf("It is an Armstrong\n");
                else
                    printf("It is not an Armstrong\n");
                sum = 0;
                break;

            case 5:
                printf("Enter a number:  ");
                scanf("%i",&a);
                if (a%2==0)
                    printf("It is even\n");
                else
                    printf("It is odd\n");
                break;

            case 6:
                printf("Enter a number:  ");
                scanf("%i",&a);

                for(i=1;i<=10;i++){
                    result = a*i;
                    printf("\n%i X %i = %i\n",a,i,result);
                }
                break;

            case 7:
                printf("Thank You for Using this toolkit.");
                break;

            default:
                printf("Invalid Choice!");
        }
    } while(choice!=7);
    return 0;
}