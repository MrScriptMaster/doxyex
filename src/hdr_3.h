/**
 * @file hdr_3.h
 * @brief Краткое описание заголовка.
 * @version 0.1
 *
 * С этой строки начинается подробное описание содержимого этого заголовка.
 * Вы можете пометить начало подробного описания с помощью команды \@details,
 * однако это необязятельно, так как мы использовали пустую строку выше.
 *
 * Вообще пустые строки помечают начало нового абзаца. Подробное описание
 * распространяется до конца этого комментария, либо до следующей команды,
 * не являющейся командой секционирования текста. Когда Doxygen просматривает
 * файл, он как бы объединяет все комментарии для Doxygen в один большой комментарий,
 * поэтому вы можете их разбивать. Обычно это происходит, когда комментарий
 * доходит до исходного кода программы.
 *
 * Начиная с версии Doxygen 1.8 вы можете использовать Markdown-разметку
 * в комментариях. Это обычно нагляднее, чем команды Doxygen, которые
 * занимаются тем же.
 *
 * ## Заголовок второго уровня на языке Markdown
 * 
 * Абзац под заголовком второго уровня. *Курсив*, **Полужирное начертание**,
 * ~~зачеркнутый~~, __Полужирный__, _Курсив_.
 * 
 * Исторически нумерованные списки в Doxygen создаются с помощью символа `-#`,
 * поэтому рекомендуется использовать именно его, во всех комментариях для
 * Doxygen. Однако не запрещено использовать цифру с точкой как в оригинальном
 * синтаксисе Markdown (однако, в этом случае не будет автоматического инкремента).
 *
 * -# Яблоко
 * -# Помидор
 *    -# Лук
 *    -# Ананас
 * -# Огурец
 * 
 * Для маркированного списка рекомендуется использовать не `*`, а символ `-`, хотя современные
 * версии Doxygen корректно распознают символ `*`, если она начинает строку без первой звездочки
 * баннера.
 *
 * - Первый элемент
 * - Второй элемент
 *   - Вложенный элемент
 * - Третий элемент
 *
 * ```cpp
 * int main(int argc, char* argv[])
 * {
 *     return 0;
 * }
 * ```
 *
 * \section h1_sec_1 Заголовок секции
 * Мы создали раздел через внутреннюю команду Doxygen. У этой команды первый аргумент определяет
 * метку заголовка (главное, чтобы он был уникальным), а второй - отображаемый текст.
 * Внутренние команды секционирования Doxygen копируют команды LaTeX. Вы должны помнить,
 * что как в LaTeX Doxygen следит (но не так строго) за иерархией команд секционирования.
 * Т.е. нельзя вложить секцию в подраздел и т.п.
 *
 * \subsection h1_sec_sec_1 Подраздел
 * Текст подраздела.
 *
 * \subsubsection h1_sec_sec_sec_1 Подподраздел
 * Текст подподраздела.
 *
 * Для форматирования текста можно использовать следующие команды:
 * -# \a Курсив
 * -# \b Полужирное \b начертание
 * -# \c Моноширинный
 *
 * Для создания блоков с кодом можно использовать следующие команды.
 * \code{.sh}
 * echo "Hello, World!"
 * \endcode
 *
 * \paragraph h1_sec_sec_sec_sec_1 Параграф
 * Самый нижний уровень секционирования.
 *
 * Doxygen разрешает использовать сырой HTML. Обычно это используется для
 * формирования сложных таблиц.
 *
 */

int a = 10;