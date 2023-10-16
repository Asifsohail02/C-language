#include<stdio.h>
#include<conio.h>
int main()
{
    int phy,che,math,bio,comp;
    float per;
    printf("enter the no of five subject");
    scanf("%d%d%d%d%d",&phy,&che,&math,&bio,&comp);
    per=(phy+che+math+bio+comp)/5.0;
    printf("percentage = %f" ,per);
{


    if (per>=90)
        printf("grade A");
    else if (per>=80)
        printf("grade B");
    else if (per>=70)
        printf("grade C");
    else if (per>=60)
        printf("grade D");
    else if (per>=50)
        printf("grade E");
    else
        printf("grade F");
}
        printf("\n");

        getch();



}
