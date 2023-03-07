/* Filename: Main.c
Description: Takes a time in seconds and turns it into a digital time (hrs mins and secs)
Author: Edgar Tulodziecki
Date: 28/02/2023
Version: 1 */
#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

void impedence_phase(double res, double cap, double ind, double freq, double *impedence, double *phase_angle)
{
  double Xl = freq * ind; //inductive reactance
  double Xc = 1.0 / (freq * cap);//capacitive reactance
  double Z = sqrt(res * res + (Xl - Xc) * (Xl - Xc)); //impedence
  double phi = acos(res / Z); //phase angle
  *impedence = Z;
  *phase_angle = phi;
  
}

int main(void)
{
  double res = 100.0;
  double cap = 1e-6;
  double ind = 10e-3;
  double freq = 1000.0;
  double impedance, phase_angle;
  
void impedence_phase(res,  cap,  ind,  freq, &impedence,  &phase_angle);
  printf("Impedance = %f Ohms, Phase angle = %f degrees\n", impedance, phase_angle * 180 / M_PI);
  
return 0;
}
