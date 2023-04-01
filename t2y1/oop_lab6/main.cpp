// include necessary libraries
#include "../../lib.h"
#include "sup.h"
using namespace std;

/*
Варіант 5. Для класу «Геометрична фігура» з варіанту 2, створити похідний клас для роботи з фігурою типу «прямокутник». Визначити інтерфейсну частину у класах, застосувати атрибути доступу.

Варіант 2. Створити абстрактний клас для роботи з геометричними фігурами на екрані. Передбачити такі компоненти–властивості класу: координати центра фігури; кут повороту (у градусах); масштабний фактор; і такі функції–методи: показати фігуру на екрані; зробити фігуру невидною (знищити її зображення); повернути фігуру на заданий кут (кут надається у градусах); пересунути фігуру на наданий вектор.
*/

// 🟦, 🔷
// 🟧, 🔶

// func main start
int main()
{
    // declare local variables //
    srand(time(NULL));
    char doContinue;
    /////////////////////////////

    // project intro
    cout << "\n";
    do
    {
        ///////////////////////////////////////

        // for storing class object pointers
        // vector<DynamicString> container;
        // for manipulating program flow
        char doReturnToMenu;

        do
        {
            vector<unique_ptr<Rectangle>> rectangles;

            int option;
            do
            {
                cout << "1. Create rectangle" << endl;
                cout << "2. Show rectangles" << endl;
                cout << "3. Delete rectangle" << endl;
                cout << "4. Modify rectangle" << endl;
                cout << "5. Exit" << endl;
                cout << "Enter option: ";
                cin >> option;

                switch (option)
                {
                case 1:
                    createRectangle(rectangles);
                    break;
                case 2:
                    showRectangles(rectangles);
                    break;
                case 3:
                    deleteRectangle(rectangles);
                    break;
                case 4:
                    modifyRectangle(rectangles);
                    break;
                case 5:
                    cout << "Exiting program..." << endl;
                    break;
                default:
                    cout << "Invalid option! Please try again." << endl;
                }

            } while (option != 5);
            // output menu to user
            // outputMenu(container);

            // ask user if they would like to return to menu
            cout << "\nWould you like to return to menu? (Y | N): ";
            cin >> doReturnToMenu;
            // if so, continue loop execution
            if (doReturnToMenu == 'Y' || doReturnToMenu == 'y')
            {
                cout << endl
                     << endl;
                continue;
            }
            // if not, break out of loop
            else
                break;

        } while (doReturnToMenu == 'y' || doReturnToMenu == 'Y');
        // execute while user chooses to return to menu

        ///////////////////////////////////////

        // ask user if they would like to continue execution of program
        cout << "\nWould you like to continue program execution? (Y | N): ";
        cin >> doContinue;
        if (doContinue == 'Y' || doContinue == 'y')
        {
            cout << "\n\n";
            continue;
        }
        else
            break;
    } while (doContinue = 'Y' || doContinue == 'y');

    // stop main function execution
    cout << "\nThanks for using this program\n\n";
    return 0;
}