#ifndef CAR_H
#define CAR_H

class Car {
private:
    int price;
    int emissions;

public:
    Car();
    Car(int price);

    int get_price() const;
    void set_price(int price);

    int get_emissions() const;

    virtual void drive(int kms);
};

#endif
