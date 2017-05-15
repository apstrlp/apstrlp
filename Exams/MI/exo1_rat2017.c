void Triple (int a) {
 a = a*2;
 printf ("%d \n", a);
}
double Double (int y) {
 return y*3; printf ("%d \n", y);
}
void main () {
 int x= 1;
 Triple (x);
 printf ("%d \n", x);
 x = Double (x);
 printf ("%d \n", x);
}

