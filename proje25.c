#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int i,kactan,deger,kaca,toplam=0;
   
    printf("Kactan Baslasin: ");
    scanf("%d",&kactan);
   
    printf("Arttirilacak Deger Giriniz: ");
    scanf("%d",&deger);
   
    printf("Kaca Kadar Saysin: ");
    scanf("%d",&kaca);
   
    for(i=kactan;i<=kaca;i+=deger)
   {
     printf("%d\n",i);
     toplam=toplam+i;
    }
    
	printf("Girmis Oldugunuz Sayilarin Toplami: %d\n",toplam); 
  
  
  
  return 0;
 
 }

