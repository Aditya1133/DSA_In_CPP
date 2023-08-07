#include <iostream>
using namespace std;

class Emp
{
public:
    string emp[5];
    int id[5];
    int sal[5];

    void getData()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> emp[i];
            cin >> id[i];
            cin >> sal[i];
        }
    }
};

class Salary : public Emp
{
public:
    int totalSal = 0;
    void totSal()
    {
        for (int i = 0; i < 5; i++)
        {
            totalSal += sal[i];
        }
        cout << "Total Salary: " << totalSal << endl;
    }
};

class GetSal : public Salary
{
};

int main()
{
    GetSal e1;
    e1.getData();
    e1.totSal();
    return 0;
}
