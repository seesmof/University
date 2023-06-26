## РГЗ 2 - 10.06.2023 14:35

- [ ] 2.3.1 Ознайомитися з основними теоретичними відомостями за темою роботи, використовуючи дані методичні вказівки, а також рекомендовану літературу.

- [ ] 2.3.2 Сформувати команду з двох студентів та отримати у викладача індивідуальне завдання.

- [ ] 2.3.3 Завести акаунт на сервісі GitHub та створити команду для роботи в Slack.

- [ ] 2.3.4 Узгодити розподіл зобов’язань для виконання завдання, використовуючи Slack.

- [ ] 2.3.5 Створити репозиторій для роботи над проектом та дозволити доступ до проекту обом користувачам.

- [ ] 2.3.6 Завантажити у віддалений репозиторій існуючі файли проекту.

- [ ] 2.3.7 Створити дві гілки проекту: для презентації ревізій та для відлагодження проекту.

- [ ] 2.3.8 Налаштувати доступ до Git-репозиторію в інтегрованому середовищі розробки Eclipse.

- [ ] 2.3.9 Виконати реалізацію проекту в Eclipse та зазначити, яка частина коду ким була розроблена.

- [ ] 2.3.10 Визначити додаткову функцію та реалізувати її, працюючи над нею одночасно вдвох.

- [ ] 2.3.11 Завершити роботу над проектом.

- [ ] 2.3.12 Відповідно до діючих стандартів індивідуально оформити програмний документ, узгоджений з викладачем, на розроблене програмне забезпечення.

- [ ] 2.3.13 Оформити звіт з роботи.

- [ ] 2.3.14 Відповісти на контрольні запитання.

---

Гра відбувається на прямокутному полі. Розмір поля вибирається гравцем. Поле складається з клітин. У кожної клітини є 8 сусідів. Правила такі:

- жива клітина, у якій є менше ніж дві живі клітини серед сусідів, вмирає.
- жива клітина, у якій більш ніж три живі клітини серед сусідів, також вмирає.
- жива клітина, у якій дві або три живі клітини серед сусідів, продовжує жити.
- мертва клітина, у якій рівно три живі клітини серед сусідів, стає живою.

Початкова конфігурація задається гравцем. Гра закінчується тоді, коли на полі немає більше живих клітин, інакше розподіл клітин повторюється по кроках.

На кожному кроці відображається поле, що складається з клітин. Кожна клітина відображається цифрою або кольором (якщо готові зробити графічне представлення), що відповідає стану клітини. Потрібно послідовно показати всі кроки.