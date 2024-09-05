
### February 20, 2023

- 👀 Preview
- 🧠 View
    
    ## Орг моменти
    
    Продовжуємо вивчати програмування
    
    Попередній семестр був розгляд процедурно-орієнтованим програмуванням
    
    ООП - продовження програмування
    
    Лекції читає Голуб Тетяна Василівна
    
    Лабораторні роботи в залежності від групи: або Дейнега + Голуб, або Дейнега + Качан
    
    Курс ООП:
    - 1 курс == 2 семестр, 1 лекція, 1 лаба на тиждень, іспит і кінці
    - 2 курс == 3 семестр, курсова робота, для здачі курсової треба отримати іспит
    
    Всього 9 лаб, треба виконати як мінімум 7, це допуск до іспиту
    
    Іспит складається з теорії і практики
    
    Джерел для вивчення програмування дуже багато, але основні і базові є книги від Herbert Schildt, то є база і ґрунт. Книги є багатьма мовами, досі не втратили свою актуальність. Цих книжок достатньо для роботи з С++
    
    Методичні вказівки == http://eir.zntu.edu.ua/handle/123456789/1380
    
    Засоби комунікації. Основний == мудл, туди завантажуємо звіти і там оцінки. Спілкування на занятті, але резерв == телеграм канал
    
    ## Введення в ООП
    
    Мова С була розроблена Денісом Рітчі
    
    В чому проблема С: чим складніша програма, тим більше виходило коду
    
    Б'ярн Страуструп розробив мову С++ як розширення мови С і як розширення її можливостей
    
    Для розробки ПЗ треба використовувати якісь засоби розробки. Я використовую VS Code, мені нормас. Існують ще C++ Builder, Microsoft VS, QT
    
    ### Що таке ООП
    
    Раніше ми працювали з процедурно орієнтованим програмуванням. В нас були змінні і функції, що описують дії над змінними. Але тоді виходить, що якшо ми описуємо декілька об’єктів, що виконують якісь дії, то перемішуються змінні і функції між собою і це заважає роботі програми. Ми описуємо одночасно характеристики всіх об’єктів, а це не зручно. Відповідно чим більше об’єктів, тим більше змінних. Розмір коду збільшується так само.
    
    В основу ООП було покладено те, що деякі характеристики різних об’єктів роз’єднуються, тобто ми розкладаємо задачу на складові частини.
    
    Загалом, задачею мови С++ і ООП зокрема було розкласти велику програму на окремі блоки. Ці блоки є незалежними, у них є свої характеристики і методи.
    
    Якщо структуру програми розбити на складові частини, буде легше. Складний код розбили на простіші складові і з ними вже працюємо
    
    ### Елементи об’єктної моделі
    
    абстрагування == виділення основних характеристик об’єкту. У машини кількість дверей, місць. У тигрят вік, колір, розмір
    
    інкапсуляція == механізм захисту коду від зовнішнього втручання або неправильного використання.
    
    спадкування == об’єкти можуть мати властивості інших класів. На основі одного об’єкту робимо інший
    
    поліморфізм == властивість, що дозволяє використання одного інтерфейсу для певного класу дій. Інтерфейс == середовище, яке забезпечує взаємодію між користувачем і компом
    
    Основні характеристики ООП: інкапсуляція, спадкування, поліморфізм
    
    ### Абстрагування
    
    Виділяє істотні характеристики деякого об’єкта, що відрізняють його від інших об’єктів. Чітко визначає його концептуальні межі з точки зору спостерігача.
    
    Основні типи абстракції:
    
    - Клас - опис, характеристики. Визначається програмістом, розширення вихідних типів мови. Базові змінні С++, той же int == це структура, яка кимось була описана, яка має певні характеристики. Клас == структура, що має певні характеристики і використовується у певних умовах, розробляється саме програмістом. Ми самі описуємо машину і нею користуємось. Просто опис
    - Об’єкт - змінна класу, має ідентичність. За описом створюємо якийсь об’єкт.
    
    ```cpp
    int a; // int == що таке об'єкт, які його властивості; a == в пам'яті виділяється пам'ять для керування цією змінною
    ```
    
    В момент, коли створюється змінна *а*, створюється екземпляр класу *int*
    
    **Абстрагування лампочки**
    
    Абстракція == лампочка. Що таке об’єкт. Опис абстрактної лампочки.
    
    Властивість == стан. Основна властивість об’єкту, в незалежності від самого об’єкту. Можливі властивості == увімк, вимк.
    
    **Абстрагування робота**
    
    Абстракція == робот. В незалежності від робота, а їх є велике різноманіття, всі роботи мають одні основні параметри. Об’єднання цих роботів і є абстрагуванням
    
    Властивості == призначення, висота, вага, виробник. 
    
    ## Діаграми класів
    
    Взаємодія між об’єктами, хто з ким спілкується, де що береться описується в **діаграмі класів**
    
    Діаграма класів описана в мові моделювання UML. У такої діаграми є свої значення і властивості
    
    Структурні елементи класу: Ідентифікатор, ім’я властивості, операції
    
    В кожному класі описуємо назву абстракції, потім перелік властивостей або аргументів. Потім вже йде опис функцій або методів цього класу.
    
    Методи це дії, що можна використати над властивостями.
    
    Існує абстракція або сам клас лампочки, а на основі цієї абстракції або типу можна створити об’єкти. Об’єкти класів різні, але всі вони побудовані на основі загальної абстракції.
    
    Абстракція My Talking Tom
    
    Параметри кота:
    
    - Настрій
    - Рівень голоду
    - Енергія
    
    Методи кота:
    
    - Погратися
    - Нагодувати
    - Поспати
    
    Клас == логічна абстракція, яка реально не існує, це просто шаблон об’єкту. Клас визначає новий тип даних, який визначає формат об’єкта. Містить дані і методи.
    
    ## Інкапсуляція
    
    Можливість приховування реалізації. Вона завжди передбачає можливість обмеження доступу до даних класу.
    
    Існує перелік специфікаторів доступу:
    
    - public == публічний, доступний і з зовні, і в середині класу. Клас == чорний ящик, що містить свої властивості, і в середині нього відбуваються взаємодії
    - private == не доступний ззовні, лише в середині
    - protected == закриті властивості, що можуть бути використані при успадкуванні
    
    Форма запису класу
    
    ```cpp
    class ClassName :: inheritanceList
    {
    	// private members or methods by default
    protected:
    	// private members that can be accessed with inheritance
    public:
    	// open members
    };
    ```
    
    У структурі всі поля є відкритими, а в класі закритими
    
    Раніше розглянуті класи
    
    ```cpp
    class Lamp
    {
        bool state;
    
    public:
        void TurnOn();
        void TurnOff();
        bool isOn();
    };
    ```
    
    ```cpp
    class Robot
    {
        string name;
        vector<Robot> robots;
        int height;
        float weight;
    
    public:
        void setName(string name);
        void setHeight(int height);
        void setWeight(float weight);
        void showAll();
    }
    ```
    
    По дефолту всі поля приватні. Працювати ми можемо з полями лише за допомогою публічних методів. Це і є інкапсуляція.
    
    Щоб встановити назву робота, натиснули кнопку setName
    
    ```cpp
    ClassType ClassName::MethodName(parametersList)
    {
    	// body
    }
    ```
    
    При оголошенні класу ми прописуємо прототипи методів
    
    ```cpp
    void Lamp::TurnOn()
    {
        state = true;
    }
    void Lamp::TurnOff()
    {
        state = false;
    }
    bool Lamp::isOn()
    {
        return state;
    }
    ```
    
    Далі ми описуємо методи використовуючи об’єкту використовуючи наслідування
    
    Об’єкт має властивості:
    
    - змінна класу
    - має стан, поведінку і ідентичність
    - стан об’єкта == результат його поведінки
    - стан об’єкта == характеризується набором властивостей
    - ідентичність == дозволяє відрізнятися від інших об’єктів типу
    
    ### Оголошення об’єкту
    
    ```cpp
    ClassName objectName;
    
    Lamp l1, l2;
    Robot r1, r2;
    vector<Computer> computers;
    ```
    
    ### Виклик об’єктів класу
    
    Об’єкт має приватні області і кнопки на чорному ящику
    
    ```cpp
    objectName.methodName();
    objectPointer->methodName();
    objectName.propertyName = property();
    ```
    
    ### Робота з об’єктами
    
    ```cpp
    int main()
    {
    	Lamp l1, l2;
    	l1.state = true; // incorrect
    	l2.state = false; // incorrect
    	// they both are private by default, so we cannot do that
    }
    ```
    
    ```cpp
    int main()
    {
        Lamp l1, l2;
        l1.TurnOn();
        if (l1.isOn())
        {
            l2.TurnOn();
            l1.TurnOff();
        }
    		// this is the corret way
        return 0;
    }
    ```
    
    Взаємодії з об’єктами класу використовуються **лише** за допомогою публічних методів
    
    ```cpp
    #include "../lib.h"
    using namespace std;
    
    class Door
    {
        bool isOpen = false;
        int width, height;
    
    public:
        void open();
        void close();
        void setWidth();
        void setHeight();
        bool checkIsOpen();
    };
    
    void Door::setWidth()
    {
        width = width;
    }
    void Door::setHeight()
    {
        height = height;
    }
    void Door::open()
    {
        isOpen = true;
    }
    void Door::close()
    {
        isOpen = false;
    }
    bool Door::checkIsOpen()
    {
        return isOpen;
    }
    
    int main()
    {
        Door doorOne;
        doorOne.open();
        if (doorOne.checkIsOpen())
        {
            cout << "The door is open" << endl;
        }
        else
            cout << "The door is closed" << endl;
    
        int doorOneWidth;
        cout << "\nEnter door width: ";
        cin >> doorOneWidth;
        int doorOneHeight;
        cout << "Enter door height: ";
        cin >> doorOneHeight;
    
        char doCloseDoorOne;
        cout << "\nClose doors? (Y | N): ";
        cin >> doCloseDoorOne;
    
        if (doCloseDoorOne == 'Y' || doCloseDoorOne == 'y')
        {
            doorOne.close();
            cout << "\nDoor one is closed, has a width of " << doorOneWidth << " and a height of " << doorOneHeight << "\n";
        }
        else
        {
            doorOne.open();
            cout << "\nDoor one is open, has a width of " << doorOneWidth << " and a height of " << doorOneHeight << "\n";
        }
    
        return 0;
    }
    ```
    
    При оголошенні об’єкту в його імені не треба вказувати ніяких дужок, просто ClassName objectName;
    
- 🫀 Review


---

links: 112f Об'єкто орієнтоване програмування
