#include <stdio.h>
#include <string.h>
void *strcat_user(char str1[20], char str2[20],int n)
{
    int i=strlen(str1);
    int j=0;
    while(str2[j]!='\0'&&j<n)
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    return str1;


}

int main()
{
    char str1[20] = "Shikhar";
    char str2[20] = "Nagar";
    
      printf("%s ", strcat_user(str1,str2,3))
      
}
