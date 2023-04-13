#include <iostream>
using namespace std;
class worker
{
public:
    char name[10];
    int age;
    void getdata();
    void display_6();
};
void worker::getdata()
{
    cout << "enter name";
    cin >> name;
    cout << "enter age";
    cin >> age;
}
void worker::display_6()
{
    cout << "Name :" << name << "age:" << age;
}
class manager : public worker
{
public:
    int now;
    void getdata();
    void display_6();
};
void manager::getdata()
{
    worker::getdata();
    cout << "no of workers";
    cin >> now;
}
void manager::display_6()
{
    worker::display_6();
    cout << "now:" << now;
}
int main()
{
    manager m;
    m.getdata();
    m.display_6();
    return 0;
}
