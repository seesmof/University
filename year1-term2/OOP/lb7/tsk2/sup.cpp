#include "sup.h"
#include "D:\repos\university\lib.h"

// Виконати завдання з лабораторної роботи #5 з довільним типом даних

class DynamicString
{
private:
    string m_value;
    ll m_size;

public:
    DynamicString() : m_value(""), m_size(0) {}
    DynamicString(string value) : m_value(value), m_size(value.size()) {}
    void setValue(string value)
    {
        m_value = value;
        m_size = value.length();
    }
};

void showStrings(vector<DynamicString> &container)
{
}

void addStrings(vector<DynamicString> &container)
{
}

void removeString(vector<DynamicString> &container)
{
}

void outputMenu(vector<DynamicString> &container)
{
    // output the menu
    cout << BOLD << "Welcome! Choose some option from below\n"
         << UNBOLD;
    cout << "1. Show strings\n";
    cout << "2. Add strings\n";
    cout << "3. Remove strings\n";
    cout << "4. Exit\n";
    cout << "Enter: ";
    ll userDecision = getNum();
    cout << endl;

    if (userDecision == 1)
    {
    }
    else if (userDecision == 2)
    {
    }
    else if (userDecision == 3)
    {
    }
}