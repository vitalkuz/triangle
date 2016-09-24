#include <stdio.h>

int check_two_dots(float x_testable, float y_testable, float x1_line_dot, float y1_line_dot, float x2_line_dot, float y2_line_dot, float x_checked_dot, float y_checked_dot) {
  
  float a, b, c, d, e, f;
  
  a = x_testable - x1_line_dot;
  b = x2_line_dot - x1_line_dot;
  c = y_testable - y1_line_dot;
  d = y2_line_dot - y1_line_dot;
  e = x_checked_dot - x1_line_dot;
  f = y_checked_dot - y1_line_dot;
  
  if (((a / b) - (c / d)) * ((e / b) - (f / d)) <= 0) {
	  printf("\n no \n");
	  return 1;
	}
	return 0;
}
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

	if (check_two_dots(x3, y3, x1, y1, x2, y2, xa, ya) == 1) {
	  return 0;
	}
	if (check_two_dots(x2, y2, x3, y3, x1, y1, xa, ya) == 1) {
	  return 0;
	}
	if (check_two_dots(x1, y1, x2, y2, x3, y3, xa, ya) == 1) {
	  return 0;
	}
	
	printf("\n yes \n");
	
	return 0;
}
