#include <stdio.h>
#include <math.h>

double hitungJarak(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int isDalamPersegi(double x, double y, double xr, double yr, double wr, double hr) {
  return (x >= xr - wr / 2) && (x <= xr + wr / 2) && (y >= yr - hr / 2) && (y <= yr + hr / 2);
}

int main() {
  int lebarMap, tinggiMap; 
  int xRumahMakan, yRumahMakan, lebarRumahMakan, tinggiRumahMakan; 
  int xPengunjung, yPengunjung; 
  double jarak; 

  scanf("%d %d", &lebarMap, &tinggiMap);
  scanf("%d %d %d %d", &xRumahMakan, &yRumahMakan, &lebarRumahMakan, &tinggiRumahMakan);
  scanf("%d %d", &xPengunjung, &yPengunjung);

  jarak = hitungJarak(xPengunjung, yPengunjung, xRumahMakan, yRumahMakan);

  if (isDalamPersegi(xPengunjung, yPengunjung, xRumahMakan, yRumahMakan, lebarRumahMakan, tinggiRumahMakan)) {
    printf("KAMU SUDAH SAMPAI\n");
  } else {
    printf("%.2f METER LAGI\n", jarak);
  }

  return 0;
}
