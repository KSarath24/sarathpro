void main()

{
int n,i,j,ct=0;
printf("Enter any number \n");
scanf("%d",&n);
printf(" All prime numbers are -\n");
for(i=2;i<=n;i++)
 {
ct=0;
for(j=2;j<i;j++)
 {
 if(i%j==0)
 {
   ct=1;
  break;
  }
}
 if(ct==0)
 {
 printf("%d \t",i);
 }
 }
getch();

}
