#include<stdio.h>
#include<string.h>
int main()
{
char sa[10],sb[10],sc[20];
int i,l1,l2,j;
printf("enter first string");
fgets(sa,10,stdin);
printf("enter second syring");
fgets(sb,10,stdin);
l1=strlen(sa);
l2=strlen(sb);
strcpy(sc,sa);
for(i=l1,j=0;j<l2-1;i++,j++)
{
sc[i]=sb[j];
}
puts(sc);
return 0;
}


