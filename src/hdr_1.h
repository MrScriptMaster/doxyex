/**
 * @file hdr_1.h
 * @author Джон Доу (john@example.com)
 * @brief Краткое описание целого исходного файла.
 * @version 0.1
 * @date 2020-02-20
 * @copyright Copyright (c) 2020
 * 
 * Это подробное описание целого исходного файла. ПОМНИТЕ, что для документирования глобальных
 * объектов (функций, новых типов, перечислений, макросов и т.п.), необходимо добавить
 * хотя бы тег \@file в этом комментарии, в месте, где эти объекты объявляются (обычно
 * это заголовки), если используется удаленный метод документирования.
 * 
 * Чтобы понять, как Doxygen сформировал эту страницу, откройте исходный файл и посмотрите
 * содержимое комментариев.
 * 
 * В своих комментариях вы можете использовать списки. Списки можно сформировать по-разному.
 * 
 * Список событий:
 *   - События мыши
 *       -# движение мыши 
 *       -# нажатие мыши\n
 *          новая строка.
 *       -# двойное нажатие мыши
 *   - События клавиатуры
 *       -# нажатие клавиши
 *       -# отпускание клавиши
 * 
 * Текст до списка (точкой помечается новый параграф)
 * - элемент списка 1
 *   - первый уровень
 *     - второй уровень 1
 *     - второй уровень 2
 *     .
 *     Текст под точкой
 *     
 *     Новая строка
 *   .
 *   Текст под точкой
 * 
 *   Новая строка
 *   - элемент 1
 *   - элемент 2
 * - элемент списка 2
 * .
 * Текст под точкой
 * 
 * Новая строка
 * 
 * Список может быть сформирован HTML-тегами
 * <ul>
 * <li> События мыши
 *    <ol>
 *    <li>движение мышью
 *    <li>нажатие кнопки мыши<br>
 *        Еще одна строка.
 *    <li>двойное нажатие мыши
 *    </ol>
 * <li> События клавиатуры
 *    <ol>
 *    <li>нажатие клавиши
 *    <li>отпускание клавиши
 *    </ol>
 * </ul>
 * Новая строка.
 * 
 * В тексте допустимо использовать таблицы. Таблицы можно сформировать, используя синтаксис Markdown,
 * либо с помощью HTML-тегов.
 * 
 * First Header | Second Header | Third header
 * :----------: | :-----------  | ----------:
 * Content Cell | Content Cell  | Content 1
 * Content Cell | Content Cell  | Content 2
 * 
 * | Right | Center | Left  |
 * | ----: | :----: | :---- |
 * | 10 | 10 | 10 |
 * | ^ | 1000 | 1000 |
 * 
 * | Right | Center | Left |
 * | ----: | :----: | :---- |
 * | 10 | 10 | 10 |
 * | 1000 |||
 *
 *  <table> 
 *    <caption id="multi_row">Complex table</caption> 
 *    <tr><th>Column 1   <th>Column 2 <th>Column 3 
 *    <tr><td rowspan="2">cell row=1+2,col=1
 *        <td>cell row=1,  col=2<td>cell row=1,col=3 
 *    <tr>
 *        <td rowspan="2">cell row=2+3,col=2 
 *        <td>cell row=2,  col=3 
 *    <tr>
 *        <td>cell row=3,col=1 
 *        <td rowspan="2">cell row=3+4,col=3 
 *    <tr>
 *        <td   colspan="2">cell row=4,col=1+2 
 *    <tr>
 *        <td>cell row=5,col=1 
 *        <td colspan="2">cell   row=5,col=2+3 
 *    <tr>
 *        <td colspan="2" rowspan="2">cell row=6+7,col=1+2 
 *        <td>cell   row=6,col=3 <tr> <td>cell row=7,col=3 
 *    <tr>
 *        <td>cell row=8,col=1 
 *        <td>cell row=8,  col=2\n
 *    <table> 
 *      <tr>
 *          <td>Inner cell row=1,col=1
 *          <td>Inner cell row=1,col=2   
 *      <tr>
 *          <td>Inner cell row=2,col=1
 *          <td>Inner cell row=2,col=2 
 *    </table> 
 *    <td>cell   row=8,col=3 
 *    <ul> <li>Item 1 <li>Item 2 
 *    </ul> 
 *  </table>
 * 
 */
/*
 * ЭТОТ КОММЕНТАРИЙ НЕ ЯВЛЯЕТСЯ ЧАСТЬЮ DOXYGEN ДОКУМЕНТАЦИИ
 * 
 * Данный файл содержит перечень примеров, как документировать код на языках C/C++ с
 * помощью системы генерации документации Doxygen 1.8 и выше.
 * Так как синтаксис Doxygen допускает некоторую свободу выбора в оформлении комментариев,
 * все примеры придерживаются одного стиля, который, по мнению автора, требует меньшего нажатия
 * клавиш на клавиатуре без потери наглядности.
 * 
 * Обратите внимание, что код можно документировать как удаленно от места объявления
 * (обычно это делают в начале исходного файла), так непосредственно рядом с объявлением.
 * Во втором случае Doxygen будет сам определять, какой объект документируется, т.е.
 * не требуется использовать дополнительные теги.
 * 
 * Не оставляйте пустых строк между документируемым объектом и комментарием Doxygen,
 * если вы используйте способ документирования рядом с объектом.
 * 
 * Мы начнем с метода документирования в месте объявления.
 */

/*=********************************************************************************
 * ДОКУМЕНТИРОВАНИЕ ГЛОБАЛЬНЫХ ОБЪЕКТОВ
 *********************************************************************************/

/**
 * @brief Краткое описание глобальной переменной.
 * 
 * Это первый способ, когда описание должно быть развернутое. Рекомендуется использовать
 * ключевое слово @brief всегда для наглядности. Вообще, со включенной опцией AUTOBRIEF
 * парсер будет относить первое предложение (до первой точки) к краткому описанию,
 * а остальные предложения к детальному описанию.
 */
const float gPI = 3.1415;

const float gExp = 2.718; /**< Детальное описание глобальной переменной справа */

const short gSmth = 25; //!< Детальное многострочное описание глобальной переменной, 
                        //!< второй вариант. Рекомендуется не мешать стили написания
                        //!< многострочных комментариев в одном месте.

/**
 * @brief Краткое описание структуры.
 * @details
 * Подробное описание структуры.
 */
typedef struct my_t
{
    char field_1; /**< Описание первого поля. */
    char field_2; /**< Описание второго поля. */
    char field_3; /**< Описание третьего поля. */
} my;

/**
 * @brief Краткое описание объединения.
 * 
 * Подробное описание структуры. 
 */
typedef union my_u_t
{
    short word; /**< Описание первого поля. */
    char byte1; /**< Описание второго поля. */
    char byte2; /**< Описание третьего поля. */
} my_u;


/**
 * @brief Краткое описание перечисления.
 * 
 * Подробное описание перечисления.
 */
enum EGlobalEnum {
    etValue1 = 0, /**< Описание первого значения. */
    etValue2,     /**< Описание второго значения. */
    etValue3      /**< Описание третьего значения. */
};

/*=********************************************************************************
 * ДОКУМЕНТИРОВАНИЕ ОДНОЙ ФУНКЦИИ
 *********************************************************************************/

/**
 * @brief После ключевого слова @brief следует аннотация - краткое описание того,
 * чем занимается функция. Старайтесь тратить на это описание 2-3 предложения. Doxygen
 * сам склеит разорванные строки. Действие @brief продолжается до первой пустой строки.
 * 
 * В этой части следует написать детальное описание того, что делает функция.
 * 
 * @param [in] arg_1 Описание первого параметра. Начинайте предложение с большой буквы.
 * @param [in] arg_2 Описание второго параметра. Тег действует до следующего специального
 * тега Doxygen. Можно не указывать, входной это аргумент или нет. Лишние    пробелы   режутся
 *        автоматически.
 * @param [out] arg_3 Описание третьего параметра.
 * @return true в случае успеха.
 * @return false в случае провала.
 */
bool i_do_something(int arg_1, char arg_2, char* arg_3)
{
    // Actually, I lie.
    return true;
}

/**
 * Пример описания аргументов прямо в прототипе. Это предложение относится
 * к детальному описанию функции.
 * 
 * @return true в случае успеха.
 * @return false в случае провала.
 */
bool i_do_something_1(int   arg_1,   /**< [in] Описание для аргумента 1. */
                      char  arg_2,   /**< [in] Описание для аргумента 2. */
                      char* arg_3    /**< [out] Описание для аргумента 3. */
                     )
{
    // Actually, I lie.
    return true;
}

/*=********************************************************************************
 * ДОКУМЕНТИРОВАНИЕ ОДНОГО КЛАССА
 *********************************************************************************/

/**
 * @brief Краткое описание пространства имен.
 * 
 */
namespace MySpace {
    /**
     * @brief Краткое описание класса
     * 
     * Детальное описание класса.
     * 
     */
    class MyClass {
            int m_PrivateVar;    /**< Описание приватной переменной класса */
        protected:
            int m_ProtectedVar;  /**< Описание защищенной переменной класса */
        public:
            int m_PublicVar;     /**< Описание публичной переменной класса */

            /**
             * @brief Краткое описание перечисления.
             * 
             */
            enum EType {
                VAL1,  /**< Описание первого значения */
                VAL2,  /**< Описание первого значения */
                VAL3   //!< Описание первого значения в другом стиле
            } 
            //! Краткое описание для указателя.
            /*! Не рекомендуется мешать стили комментариев Doxygen, но в данном месте этот стиль смотрится
                аккуратнее, за счет того, что восклицательный знак не так бросается в глаза в небольшой области, как
                звездочка.
             */
            *eType,
            //! Краткое описание для переменной.
            /*! Детальное описание для переменной.
            */
            eVar;

            /**
             * @brief Краткое описание конструктора
             * 
             */
            MyClass() {

            }

            //! Деструктор класса.
            /*! Подробное описание деструктора в другом стиле. В классах данный способ написания
                комментариев Doxygen рекомендуется, когда класс занимает не очень много места
                в пространстве файла, так как он позволяет не писать тег @brief, который сам занимает визуально
                много места.
            */
            virtual ~MyClass() {

            }

            /**
             * @brief Краткое описание публичного метода.
             * 
             * Детальное описание публичного метода.
             * 
             * @return int 
             */
            int do_something() {
                return 0;
            }

            virtual void do_something_else() = 0; //!< Описание чисто виртуального метода

            /**
             * @brief Краткое описание переменной на функцию.
             * 
             */
            int (*handler) (int a, int b);
    }; // MyClass

    /**
     * @brief Краткое описание класса.
     * 
     * Подробное описание класса.
     */
    class Child : public MyClass {
        public:
            /**
             * @brief Конструктор класса Child
             * 
             * Подробное описание конструктора.
             */
            Child() {}
            
            /**
             * @brief Реализация виртуального метода.
             * 
             * Подробное описание метода.
             */
            void do_something_else() override {  }
    }; // Child

} // MySpace

/*=********************************************************************************
 * ДОКУМЕНТИРОВАНИЕ КОДА УДАЛЁННО
 *
 * Можно документировать части кода в удалении от их места объявления или определения.
 * Для этого нужно указывать явно, что из себя представляет документируемый объект.
 * Вообще говоря, он может даже не существовать на самом деле. Данный метод требует
 * обязательного использования тега @file в начале документа, где документируемый
 * объект объявляется первый раз.
 * 
 * Этот метод рекомендуется для документирования самых низкоуровневых частей проекта,
 * которые меняются крайне редко.
 * 
 *********************************************************************************/

/**
 * @def MAX(a,b)
 * @brief Макрос возвращает максимальное значение между \a a и \a b.
 * 
 * Детальное описание макроса.
 */

/**
 * @var typedef unsigned int UINT32
 * @brief Определения типа для \a unsigned int.
 * 
 * Детальное описание для переменной.
 */

/**
 * @var int errno
 * @brief Хранит последний код ошибки.
 * 
 * @warning Не потокобезопасна.
 */

/**
 * @fn int open(const char *path, int flags)
 * @brief Открывает файловый дескриптор.
 * 
 * @param path Путь к файлу в файловой системе.
 * @param flags Флаги, с которыми открывается дескриптор.
 */

/**
 * @fn int close(int fd)
 * @brief Закрывает открытый ранее файловый декскриптор \a fd.
 * @param fd Номер файлового дескриптора.
 */

/**
 * @fn size_t write(int fd, const char *buf, size_t count)
 * @brief Записывает \a count байт из буфера \a buf в файл, связанный
 * с дескриптором \a fd.
 * @param fd Файловый дескриптор.
 * @param buf Указатель на буфер - источник данных.
 * @param count Размер буфера для записи.
 * @return Количество записанных байт
 */

/**
 * @fn int read(int fd,char *buf,size_t count)
 * @brief Читает данные из файла, связанного с файловым дескриптором.
 * @param fd Файловый дескриптор.
 * @param buf Указатель на буфер, в который данные будут записаны.
 * @param count Сколько байт должно быть прочитано из буфера.
 * @return Количество прочитанных байт.
 */

/*=********************************************************************************
 * ... МЕЖДУ ЭТИМИ ЧАСТЯМИ МОЖЕТ БЫТЬ СКОЛЬ УГОДНО БОЛЬШОЕ РАССТОЯНИЕ ...
 *********************************************************************************/

#define MAX(a,b) (((a)>(b))?(a):(b))
typedef unsigned int UINT32;
int errno;
int open(const char *,int);
int close(int);
size_t write(int,const char *, size_t);
int read(int,char *,size_t); 

/*=********************************************************************************
 * Примечание:
 * В этом примере не были рассмотрены также следующие теги:
 *   @union - для объединения
 *   @namespace - для пространств имен
 *   @struct - для C-структур
 *   @enum - для перечислений
 * 
 *********************************************************************************/