#include <stdio.h>

int main() {

float x1, y1, x2, y2, x3, y3, xa, ya;

  printf("Enter triangle coordinates\n1 dot\nx= ");
  scanf("%f", &x1);
  printf("\ny= ");
  scanf("%f", &y1);
  printf("\n2 dot\nx= ");
  scanf("%f", &x2);
  printf("\ny= ");
  scanf("%f", &y2);
  printf("\n3 dot\nx= ");
  scanf("%f", &x3);
  printf("\ny= ");
  scanf("%f", &y3);
  printf("\n Enter dot coordinates:\nx= ");
  scanf("%f", &xa);
  printf("\ny= ");
  scanf("%f", &ya);

  if ((((x3 - x1) / (x2 - x1)) - ((y3 - y1) / (y2 - y1))) * (((xa - x1) / (x2 - x1)) - ((ya - y1) / (y2 - y1))) <= 0) {
    printf("\n no \n");
    return 0;
  }
  if ((((x2 - x3) / (x1 - x3)) - ((y2 - y3) / (y1 - y3))) * (((xa - x3) / (x1 - x3)) - ((ya - y3) / (y1 - y3))) <= 0) {
    printf("\n no \n");
    return 0;
  }
  if ((((x1 - x2) / (x3 - x2)) - ((y1 - y2) / (y3 - y2))) * (((xa - x2) / (x3 - x2)) - ((ya - y2) / (y3 - y2))) <= 0) {
    printf("\n no \n");
    return 0;
  }
  printf("\n yes \n");
return 0;
}
