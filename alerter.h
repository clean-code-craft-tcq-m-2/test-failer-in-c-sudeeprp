#pragma once

extern int alertFailureCount;
void alertInCelcius(float farenheit, int (*alertTransmitter)(float));
