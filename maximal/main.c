#include <stdio.h>

int main(void) 
{
int zahl1,zahl2,max;
printf("Dieses Programm liest zwei ganze Zahlen ein und gibt die größere der beiden aus\n\n");
printf("Bitte erste Zahl eingeben:  ");
scanf("%d" , &zahl1);
printf("\nBitte zweite Zahl eingeben: ");
scanf("%d" , &zahl2);
if(zahl1 > zahl2){
  max = zahl1;
}else{
  max = zahl2;
}
printf("\nDer größere Wert lautet: %d\n\n" , max);

  return 0;
}