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

template <typename Container>
void showObjs(Container &container)
{
    ll objsNum = container.size();
    if (objsNum == 0)
    {
        bad("No objects to show");
        return;
    }

    cout << "Available objects (" << objsNum << "):\n";
    if (!is_same<typename Container::iterator, typename vector<typename Container::value_type>::iterator>::value)
    {
        auto it = next(container.begin(), numToRemove);
        container.erase(it);
    }
    else
    {
        for (ll i = 0; i < objsNum; i++)
        {
            cout << i + 1 << ". Descriptor: " << container[i]->getID() << endl;
        }
    }
}

template <typename Container>
void addObjs(Container &container)
{
    ll initSize = container.size();

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
        container.push_back(make_unique<Delta>());
    }
    cout << endl;

    if (container.size() == initSize + numToAdd)
        good("Objects added successfully");
    else
        bad("Failed to add objects");

    cout << endl;
    showObjs(container);
}

template <typename Container>
void delObjs(Container &container)
{
    ll initSize = container.size();

    if (initSize == 0)
    {
        bad("No objects found");
        return;
    }

    cout << endl;
    showObjs(container);
    cout << endl;

    cout << "Enter object number to remove: ";
    ll numToRemove = getNum();
    numToRemove--;

    if (numToRemove < 0 || numToRemove >= initSize)
    {
        bad("Enter a valid object number");
        return;
    }

    if (!is_same<typename Container::iterator, typename vector<typename Container::value_type>::iterator>::value)
    {
        auto it = next(container.begin(), numToRemove);
        container.erase(it);
    }
    else
        container.erase(container.begin() + numToRemove);
    cout << endl;

    if (container.size() == initSize - 1)
        good("Object succesfully removed");
    else
        bad("Object was not removed");

    cout << endl;
    showObjs(container);
}

template <typename Container>
void outputMenu(Container &container)
{
    vector<string> menuItems = {
        "Show objects",
        "Add objects",
        "Remove objects",
        "Exit"};
    ll userDecision = showMenu(menuItems);

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