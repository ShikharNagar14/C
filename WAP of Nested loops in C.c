// Nested loop
// int main(){
//    int n;
//    printf("Enter number:\n");
//    scanf("%d",&n);

//    for(int x=1;x<=n;x++){
//       for(int j=1;j<=10;j++){
//          printf("%d\n",x*j);
//       }
//       printf("\n");
//    }
// }




#include <stdio.h>
  
int main()
{
    int end = 5;
  printf("pattern");
    int i = 1;
  
    while (i <= end) {
        printf("\n");
        int j = 1;
        while (j <= i) {
            printf("%d ", j);
            j = j + 1;
        }
        i = i + 1;
    }
    return 0;
}
