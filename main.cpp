/* Praktikum iz mikrokontrolera Vezbe 1 Zadatak 5
 * Copyright (c) 2023 ETF
 * SPDX-License-Identifier: Apache-2.0
 */

// Obavezna biblioteka
#include "mbed.h"


// Perioda signala generisanog ISM
#define PERIOD_MS    25 
#define PULSE_US    1


int main()
{
    // Instanciranje led
    PwmOut led(LED1);

    // Postavljanje periode
    led.period_ms(PERIOD_MS);

    // Postavljanje sirine impulsa
    led.pulsewidth_us(PULSE_US);
    // Uvek je neophodan deo koda koji se stalno izvrsava cak i ako nista nema u telu tog dela
    while(true){}
}

