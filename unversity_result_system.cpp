#include <iostream>
using namespace std;
class Result
{
private:
    int rollNo;
    int marks[5];
public:
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter marks of 5 subjects:\n";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    int total()
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }
        return sum;
    }
    void compare(Result r)
    {
        if (total() > r.total())
            cout << "Current student has higher marks.\n";
        else if (total() < r.total())
            cout << "Other student has higher marks.\n";
        else
            cout << "Both students have equal marks.\n";
    }
    Result applyGrace()
    {  Result r = *this;
        int totalGrace = 0;
        for (int i = 0; i < 5; i++)
        {
            int grace = 5;
            if (totalGrace + grace > 20)
                grace = 20 - totalGrace;
            r.marks[i] += grace;
            totalGrace += grace;
            if (totalGrace == 20)
                break;
        }
        return r;
    }
    void display()
    {
        cout << "\nRoll Number: " << rollNo << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << "\nTotal Marks: " << total() << endl;
    }
};
Result topper(Result r1, Result r2, Result r3)
{
    if (r1.total() >= r2.total() && r1.total() >= r3.total())
        return r1;
    else if (r2.total() >= r1.total() && r2.total() >= r3.total())
        return r2;
    else
        return r3;
}
int main()
{
    Result r1, r2, r3;
    cout << "Enter details of Student 1:\n";
    r1.input();
    cout << "\nEnter details of Student 2:\n";
    r2.input();
    cout << "\nEnter details of Student 3:\n";
    r3.input();
    cout << "\n--- Comparing Student 1 and Student 2 ---\n";
    r1.compare(r2);
    Result top = topper(r1, r2, r3);
    cout << "\n--- Topper ---\n";
    top.display();
    Result graceResult = r1.applyGrace();
    cout << "\n--- Student 1 After Grace Marks ---\n";
    graceResult.display();
    return 0;
}