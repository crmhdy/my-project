#include <iostream>
using namespace std;

class Meal;
class DiningHall;
class Reservation;
class Student {
public:
    Student() {}
    void print();
    void reserve_meal(Meal);
    bool cancel_reservation(Reservation);

    void setui(int);
    void setsi(string);
    void setn(string);
    void sete(string);
    void setb(float);
    void seta(bool);

    int getui();
    string getsi();
    string getn();
    string gete();
    float getb();
    bool geta();

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
