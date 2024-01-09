#include <iostream>
#include "Price.h"

double Price::calcTax(double subtotal, double taxPercent){
    return subtotal * (taxPercent / 100);
}

double Price::calcTip(double subtotal, double tipPercent){
    return subtotal * (tipPercent / 100);
}

double Price::priceWithTax(double subtotal, double taxPercent){
    return subtotal + subtotal * (taxPercent / 100);
}

double Price::priceWithTaxAndTip(double subtotal, double taxPercent, double tipPercent){
    return priceWithTax(subtotal, taxPercent) + subtotal * (tipPercent / 100);
}