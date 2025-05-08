#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

enum Meal_type { breakfast, lunch, dinner };
enum Status { FAILED, CANCELLED, SUCCESS };


class DiningHall {

private:
    int hall_id;
    string name;
    string address;
    int capacity;

public:
    DiningHall(){}
    void print()const;

    void setHall_Id(int);
    void setName(string);
    void setAddress(string);
    void setCapacity(int);

    int getHall_Id()const;
    string getName()const;
    string getAddress()const;
    int getCapacity()const;

};
void DiningHall::print()const{
    cout << getHall_Id() << '\t'
        << getn() << '\t'
        << geta() << '\t'
        << getc() << '\t';
}
void DiningHall::setHall_Id(int hall) {
    hall_id = hall;
}
void DiningHall::setName(string name) {
    this->name = name;
}
void DiningHall::setAddress(string address){
    this->address = address;
}
void DiningHall::setCapacity(int capacity) {
    this->capacity = capacity;
}
int DiningHall::getHall_Id()const {
    return hall_id;
}
string DiningHall::getName()const {
    return name;
}
string DiningHall::getAddress()const{
    return address;
}
int DiningHall::getCapacity()const {
    return capacity;
}


class Meal {

private:
    int meal_id;
    string name;
    float price;
    enum meal_type;
    vector<string> side_items;

public:
    Meal(){}
    void print(int)const;
    void update_Price();
    void add_Side_Item(string);
    
    void setMeal_Id(int);
    void setName(string);
    void setPrice(float);
    void setMeal_Type(int);
    void setItem(string);

    int getMeal_Id()const;
    string getName()const;
    float getPrice()const;
    Meal_type getMeal_type(int)const;
    void getItem()const;
    
};
void Meal::print(int n)const {
    cout << getMeal_Id() << '\t'
        << getName() << '\t'
        << getPrice() << '\t'
        << getMeal_type(n) << '\t';
    getItem();

        
}
void Meal::update_Price() {
    cout << "Enter new price:";
    cin >> this->price;
    setPrice(price);
}
void Meal::add_Side_Item(string item) {
    setItem(item);
}
void Meal::setMeal_Id(int m) {
    if (m > 0)
        meal_id = m;
    else{

        cout << "your id is invalid,"
            << "try again";
    }
}
void Meal::setName(string name) {
    this->name = name;
}
void Meal::setPrice(float price) {
    if (price >= 0)
        this->price = price;
    else
        cout << "price is invalid";
}
void Meal::setMeal_Type(int n) {
    switch (n)
    {
    case 1:meal_type(breakfast);
        break;
    case 2:meal_type(lunch);
        break;
    case 3:meal_type(dinner);
        break;
    default:cout << "invalid";
        break;
    }
}
void Meal::setItem(string item) {
    side_items.push_back(item);
}
int Meal::getMeal_Id()const {
    return meal_id;
}
string Meal::getName()const {
    return name;
}
float Meal::getPrice()const {
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
void Meal::getItem()const {
    for (int i = 0; i < side_items.size(); i++) {
        cout << side_items[i] << ",";
    }
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
    void reserve_meal(Meal &);
    bool cancel_reservation(Reservation);

    void setui(int);
    void setstudent_id(string);
    void setn(string);
    void sete(string);
    void setb(float);
    void seta(bool);

    int getuser_id()const;
    string getstudent_id()const;
    string getname()const;
    string getemail()const;
    float getbalance()const;
    bool getactive()const;



private:
    int user_id;
    string student_id;
    string name;
    string email;
    float balance;
    bool is_active;
    vector<Reservation> reservation;

};
void Student::print()const {
    cout << getuser_id() << '\t'
        << getstudent_id() << '\t'
        << getname() << '\t'
        << getemail() << '\t'
        << getbalance() << '\t'
        << getactive() << '\t';
        
}
void Student::reserve_meal(Meal& m) {
    
}


int main()
{
    
}
