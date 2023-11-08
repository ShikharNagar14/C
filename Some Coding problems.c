#include<stdio.h>
//  WAP to print day before N days

// int main(){
//     int n=5;
//     int d=1;
//     int mod_res=n%7;
//     int sub_res=d-mod_res;
//     if(sub_res>=0){
//         printf("%d",sub_res);

//     }
//     else{
//         sub_res=sub_res+7;
//         printf("%d\n",sub_res);

//     }
//     return 0;
    
// }

//  Sum of natural numbers
// int main(){
//     int n;
//     printf("Enter numbers:\n");
//     scanf("%d",&n);
//     int ans=(n*(n+1)/2);
//     printf("%d",ans);
// }


//  Last digit of given numbers
// int main(){
//     int n;
//     scanf("%d",&n);
//     int ans;
//     if (n<0){
//         ans=-(n%10);

//     }
//     else{
//         ans=n%10;

//     }
//     printf("%d",ans);
// }

// int main(){
//     int n;
//     printf("Enter numbers:\n");
//     scanf("%d",&n);
//     if (n>0){
//         printf("n is +ive \n");
//         if (n%2==0){
//             printf("Even");
//         }
//         else{
//             printf("Odd");
//         }
//     }
//     else{if (n<0){
//         printf("n is -ive\n");
//         if(n%2==0){
//             printf("Even");

//         }
//         else{
//             printf("Odd");
//         }

//     }

//     }
//     return 0;
// }


// Switch in C
int main(){
    char ch;
    int x=0,y=0;
    printf("Enter choice:\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 'L':
    x--;
        break;
    case 'R':
    x++;
    break;
    case 'U':
    y++;
    break;
    case 'D':
    y--;
    break;
    
    default:
    printf("Invalid move ");
    printf("%d %d",x,y);
    return 0;
    }

}
