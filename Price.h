#ifndef PRICE_H
#define PRICE_H

class Price{
  public:
    double calcTax(double subtotal, double taxPercent);
    double calcTip(double subtotal, double tipPercent);
    double priceWithTax(double subtotal, double taxPercent);
    double priceWithTaxAndTip(double subtotal, double taxPercent, double tipPercent);
};

#endif