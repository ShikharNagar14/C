
//   Break in C
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        if (i==3)
        {
           break;

        }
       printf("%d\n",i);
    }

}

//  Continue in C
int main(){
    int n=10;
    int x=3;
    // printf("Enter the value of x:\n");
    // scanf("%d %d",&x);
    for(int i=1;i<n;i++){
        if (i%x==0)
        {
            continue;
             printf("%d",i);
        }

        return 0;
    }
}
