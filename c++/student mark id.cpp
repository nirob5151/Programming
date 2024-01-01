#include<iostream>
using namespace std;

class student
{
protected:
    int roll;
public:
    void set_roll(int a)
    {
        roll = a;
    }
    void print_roll()
    {
        cout<<"Roll No. is "<<roll<<endl;
    }
};
class exam : virtual public student
{
protected:
    float mid, final_exam;
public:
    void set_e_mark(float m1,float m2)
    {
        mid = m1;
        final_exam = m2;
    }
    void print_e_mark()
    {
        cout<<"Mid Term Mark is: "<<mid<<endl;
        cout<<"Final Term Mark is: "<<final_exam<<endl;
    }
};

class ct : public virtual student
{
protected:
    float att,test;
public:
    void set_c_mark(float a,float t)
    {
        att = a;
        test = t;
    }
    void print_c_mark()
    {
        cout<<"Attendance mark: "<<att<<endl;
        cout<<"Class Test mark: "<<test<<endl;

    }

};
class result : public exam, public ct
{
private:
    float total;
public:
    void display()
    {
        print_roll();
        print_c_mark();
        print_e_mark();
        total = mid + final_exam + att + test;
        cout<<"Total Mark is: "<<total<<endl;

    }
};

int main()
{
    result nirob;
    nirob.set_roll(496);
    nirob.set_c_mark(8,20);
    nirob.set_e_mark(15,30);
    nirob.display();

    return 0;
}