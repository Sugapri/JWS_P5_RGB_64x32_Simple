/*
 * KONFIGURASI PIN
R1  2
G1  3
B1  4
GND GND
R2  5
G2  6
B2  7


Perubahan
R1  8
G1  9
B1  10
GND GND
R2  11
G2  12
B2  13

 - One of these should be commented out!
   - Also, make sure to adjust the saved image in the <bitmap.h> file.*/

/* ========== For 32x64 LED panels: ==========
  You MUST use an Arduino Mega2560 with 32x64 size RGB Panel 
//RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false, 64); // 32x64

/* ========== For 32x32 LED panels: ========== 
RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false); // 32x32

/* ==========  For 32x16 LED panels: ========== 
//RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false); // 32x16

/* ==========  For 96x16 LED panels: ========== 
//RGBmatrixPanel matrix(A, B, C, CLK, LAT, OE, false,96); // 32x16
  */
