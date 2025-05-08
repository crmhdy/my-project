#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

enum Meal_type { breakfast, lunch, dinner };
enum Status { FAILED, CANCELLED, SUCCESS };
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
void DiningHall::print()const{
    cout << geth() << '\t'
        << getn() << '\t'
        << geta() << '\t'
        << getc() << '\t';
}
void DiningHall::seth(int h) {
    hall_id = h;
}
void DiningHall::setn(string n) {
    name = n;
}
void DiningHall::seta(string a){
    address = a;
}
void DiningHall::setc(int c) {
    capacity = c;
}
int DiningHall::geth()const {
    return hall_id;
}
string DiningHall::getn()const {
    return name;
}
string DiningHall::geta()const{
    return address;
}
int DiningHall::getc()const {
    return capacity;
}


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
    void setitem(string);

    int getmi()const;
    string getn()const;
    float getp()const;
    Meal_type getMeal_type(int)const;
    string geti(int)const;
    
private:
    int meal_id;
    string name;
    float price;
    enum meal_type;
    vector<string> side_items;
};
void Meal::print()const {
    cout << getmi() << '\t'
        << getn() << '\t'
        << getp() << '\t';

        
}
void Meal::update_price(float p) {
    cout << "Enter new price:";
    cin >> price;
    setp(price);
}
void Meal::add_side_item(string i) {
    setitem(i);
}
void Meal::setmi(int m) {
    if (m > 0)
        meal_id = m;
    else{

        cout << "your id is invalid,"
            << "try again";
    }
}
void Meal::setn(string n) {
    name = n;
}
void Meal::setp(float p) {
    if (p >= 0)
        price = p;
    else
        cout << "price is invalid";
}
void Meal::setmt(string m) {
    
}
void Meal::setitem(string m) {

}
int Meal::getmi()const {
    return meal_id;
}
string Meal::getn()const {
    return name;
}
float Meal::getp()const {
    return price;
}
Meal_type Meal::getMeal_type(int n)const {
    switch (n)
    {
    case 1:return breakfast;
        break;

    case 2:return lunch;
        break;

    case 3:return dinner;
        break;

    default:cout << "invalid";
        break;
    }
}
string Meal::geti(int n)const {
    return side_items[n];
}


class Reservation {

public:
    Reservation(){}
    void print()const;
    bool cancel();

    void setri(int);
    void sets(Student&);
    void setdh(DiningHall&);
    void setm(Meal&);
    void settime(time_t&);

    int getri()const;
    Status getstatus(int)const;
    time_t gettime()const;

private:
    int reservation_id;
    Student student;
    DiningHall dhall;
    Meal meal;
    enum status;
    time_t created_at;

};
void Reservation::print()const {
    cout << getri() << '\t';
    student.print();
    dhall.print();
    meal.print();
    cout << gettime() << '\n';
}
bool Reservation::cancel() {
    if (getstatus(0) == CANCELLED)
        return true;
    return false;
}
void Reservation::setri(int r) {
    reservation_id = r;
}
void Reservation::sets(Student& s) {
    student = s;
}
void Reservation::setdh(DiningHall& d) {
    dhall = d;
}
void Reservation::setm(Meal& m) {
    meal = m;
}
void Reservation::settime(time_t& t) {
    created_at = t;
}
int Reservation::getri()const {
    return reservation_id;
}
Status Reservation::getstatus(int n)const {
    switch (n)
    {
    case 1:return FAILED;
        break;

    case 2:return CANCELLED;
        break;

    case 3:return SUCCESS;
        break;

    default:cout << "invalid";
        break;
    }
}
time_t Reservation::gettime()const {
    return created_at;
}

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
    vector<Reservation> reservation;

};



int main()
{
    
}
