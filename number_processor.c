#include<stdio.h>
int main(){
    int n;
    printf("Enter how many numbers you want to process:");
    scanf("%d",&n);

    int validcount = 0; 
    int skipcount = 0;  

    for(int i=1;i<=n;i++){
        int num;
        printf("\nEnter number %d:",i);
        scanf("%d",&num);

        if(num<0){
            skipcount++;
            printf("Skipped negative number\n");
            continue;
        }
        if(num==0){
            printf("Loop stopped at zero\n");
            break;
        }

        validcount++;
        printf("%d is %s\n",num,(num%2==0)?"Even":"Odd");
        if(num<10){
            printf("Category:Small Number\n");
        }else if(num>=10 && num<=50){
            printf("Category:Medium Number\n");
        }else{
            printf("Category:Large Number\n");
        }

        }
        return 0;
    }

    

