#include <stdio.h>
#include <dos.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void delay(unsigned int mseconds) {
	clock_t goal = mseconds + clock();
	while (goal > clock());
}

int main() {
	printf("\nEnabling Bluetooth...\n");
	delay(3 * CLOCKS_PER_SEC);
	printf("\nBluetooth has been enabled.\n");
	delay(1 * CLOCKS_PER_SEC);

	printf("\nA Bluetooth device has been detected.\n");
	delay(1 * CLOCKS_PER_SEC);
	printf("\nPairing the device...\n");
	delay(3 * CLOCKS_PER_SEC);
	printf("\nSuccessfully paired.\n");

	return 0;
}