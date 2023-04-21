#include "D:\repos\university\lib.h"
#include "sup.h"

// Виконати завдання з лабораторної роботи #1 використавши, для зберігання даних класи Standard Template Library (STL) або list або vector. Поясніть різницю в використанні цих класів.

class Delta
{
private:
    ll m_id;

public:
    Delta() : m_id(nextID()) {}
    ll nextID()
    {
        static ll id = 0;
        return id++;
    }
    ll getID() const { return m_id; }
    ~Delta() {}
};

void showObjs(vector<unique_ptr<Delta>> &deltaObjectsVector)
{
    ll objsNum = deltaObjectsVector.size();
    if (objsNum == 0)
    {
        bad("No objects to show");
        return;
    }

    cout << "Available objects (" << objsNum << "):\n";
    for (ll i = 0; i < objsNum; i++)
    {
        cout << i + 1 << ". Descriptor: " << deltaObjectsVector[i]->getID() << endl;
    }
}

void addObjs(vector<unique_ptr<Delta>> &deltaObjectsVector)
{
    ll initSize = deltaObjectsVector.size();

    cout << "Enter number of objects to add: ";
    ll numToAdd = getNum();
    cout << endl;

    if (numToAdd == 0)
    {
        bad("Enter a valid number of objects");
        return;
    }

    for (ll i = 0; i < numToAdd; i++)
    {
        deltaObjectsVector.push_back(make_unique<Delta>());
    }
    cout << endl;

    if (deltaObjectsVector.size() == initSize + numToAdd)
        good("Objects added successfully");
    else
        bad("Failed to add objects");

    cout << endl;
    showObjs(deltaObjectsVector);
}

void delObjs(vector<unique_ptr<Delta>> &deltaObjectsVector)
{
    ll initSize = container.size();

    if (initSize == 0)
    {
        bad("No strings found");
        return;
    }

    cout << endl;
    showStrings(container);
    cout << endl;

    cout << "Enter number of string to remove: ";
    ll numToRemove = getNum();
    numToRemove--;

    if (numToRemove < 0 || numToRemove >= initSize)
    {
        bad("Enter a valid number string number");
        return;
    }

    container.erase(container.begin() + numToRemove);
    cout << endl;

    if (container.size() == initSize - 1)
        good("String succesfully removed");
    else
        bad("String was not removed");

    cout << endl;
    showStrings(container);
}

void outputMenu(vector<unique_ptr<Delta>> &container)
{
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
        showObjs(container);
    }
    else if (userDecision == 2)
    {
        addObjs(container);
    }
    else if (userDecision == 3)
    {
        delObjs(container);
    }
}