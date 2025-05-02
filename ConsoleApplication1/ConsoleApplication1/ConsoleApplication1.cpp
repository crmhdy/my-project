#include <iostream>
#include <vector>
using namespace std;

enum meal_type{};
class DiningHall {

public:
    DiningHall(){}
    void print()const;

    void seth(int);
    void setn(string);
    void seta(string);
    void setc(int);

    int geth()const;
    string getn()const;
    string geta()const;
    int getc()const;

private:
    int hall_id;
    string name;
    string address;
    int capacity;
};
class Meal {

public:
    
    Meal(){}
    void print()const;
    void update_price(float);
    void add_side_item(string);
    
    void setmi(int);
    void setn(string);
    void setp(float);
    void setmt(string);

    int getmi()const;
    string getn()const;
    float getp()const;
    string getmt()const;
    string geti()const;
    
private:
    int meal_id;
    string name;
    float price;
    enum meal_type;
    vector<string> side_items;
};
class Reservation;
class Student {
public:
    Student() {}
    void print()const;
    void reserve_meal(Meal);
    bool cancel_reservation(Reservation);

    void setui(int);
    void setsi(string);
    void setn(string);
    void sete(string);
    void setb(float);
    void seta(bool);

    int getui()const;
    string getsi()const;
    string getn()const;
    string gete()const;
    float getb()const;
    bool geta()const;

private:
    int user_id;
    string student_id;
    string name;
    string email;
    float balance;
    bool is_active;

};


int main()
{
    
}
