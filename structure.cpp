#include<iostream>
using namespace std;
struct Student
{
    int rollNo;
    string name;
    string address;
    int age;
};
void print(Student &x)
{
    cout<<x.rollNo<<" ";
    cout<<x.name<<" ";
    cout<<x.address<<" ";
    cout<<x.age<<" ";
}
int main()
{
    struct Student s1;
    s1.name="sakshi";
    cout<<s1.name;

    return 0;
}
