#include<stdio.h>
int main (){
int bolunen , bolen ;
printf ("iki sayi giriniz\n");
scanf("%d %d",&bolunen,&bolen);
if(bolunen != 0 && bolen != 0) printf("verilen sayıların bolumu = %f\n",(float)bolunen/bolen); 
else printf("bolunen sayi hatali\n");
return 0 ;
}


