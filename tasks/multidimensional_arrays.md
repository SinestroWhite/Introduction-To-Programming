# Многомерни масиви

1. **Задача** Да се състави програма, която намира и извежда минималният елемент на всеки ред на двумерен масив. На първия ред от стандартния вход да се въведат размерите на масива, а на следващите редове и самият масив.

	**Пример**<br>
	Вход<br>
	3 4<br>
	5 6 3 8<br>
	2 4 3 8<br>
	1 6 0 8<br>
	Изход<br>
	3 2 0

<br>

2. **Задача** Да се състави програма, която намира броя на отрицателните елементи във всеки ред на двумерен масив.

	**Пример**<br>
	Вход<br>
	3 4<br>
	5 6 3 8<br>
	2 4 3 -8<br>
	1 6 0 8<br>
	Изход<br>
	0 1 0

<br>

3. **Задача** Да се състави програма, която намира и извежда сумата от всеки ред на двумерен целочислен масив.

	**Пример**<br>
	Вход<br>
	3 4<br>
	5 0 3 8<br>
	2 4 3 -8<br>
	1 6 0 8<br>
	Изход<br>
	16 1 15

<br>

4. **Задача** Да се състави програма, която установява дали целочисленият двумерен масив **А** с размерност **m<sub>x</sub>n** съдържа отрицателен елемент.

<br>

5. **Задача** Да се състави програма, която установява дали реалният двумерен масив **А** с размерност **m<sub>x</sub>n** съдържа елемента **Х**.

<br>

6. **Задача** Дадена е квадратна реална матрица **А** с размерност **k<sub>x</sub>k**. Да се състави програма, която намира и извежда неотрицателните елементи върху главния диагонал.

<br>

7. **Задача** Дадена е квадратна реална матрица **А** с размерност **n<sub>x</sub>n** . Да се състави програма, която намира сумата от елементите под главния диагонал (включително главният диагонал).

<br>

8. **Задача** Дадена е квадратна матрица **Х** с размерност **k<sub>x</sub>k** и цяло число **s**. Да се състави програма, която намира сумата от онези елементи на матрицата **Х**, сборът от индексите на които е равен на **s**.

<br>

9. **Задача** Дадена е квадратна реална матрица **А** с размерност **k<sub>x</sub>k** . Да се състави програма, която намира произведението от елементите извън вторичния главен диагонал.

<br>

10. **Задача** Да се състави програма, която установява дали реалният двумерен масив **А** с размерност **m<sub>x</sub>n** съдържа елемента **Х**.

<br>

11. **Задача** Да се състави програма, която установява дали целочисленият двумерен масив **А** с размерност **m<sub>x</sub>n** съдържа отрицателен елемент.

<br>

12. **Задача** Да се състави програма, която установява дали масива е симетричен относно главния си диагонал.

<br>

13. **Задача**  Триъгълна матрица наричаме такава квадратна матрица, която има само нули под или над главния или вторичния си диагонал. Даден е двумерен масив с **n<sub>x</sub>n** елемента. Да се провери дали е триъгълна матрица.

	**Ограничения**: 2 <= **n** <= 100

	**Пример**<br>
	Вход:<br>
	5<br>
	1 2 4 5 3<br>
	0 4 5 2 5<br>
	0 0 3 4 6<br>
	0 0 0 7 6<br>
	0 0 0 0 8<br>
	Изход: yes

	Вход:<br>
	3<br>
	0 0 1<br>
	0 3 1<br>
	3 4 2<br>
	Изход: yes

	Вход:<br>
	4<br>
	1 5 9 3<br>
	0 0 3 4<br>
	0 0 3 0<br>
	4 6 0 0<br>
	Изход: no

  <br>

14. **Задача** Даден е двумерен масив с размери **m<sub>x</sub>n**, образуван от 1 и 0. Област наричаме група съседни единици. Съседни на дадена клетка са тези отгоре, отдолу, отляво и отдясно. Да се изведе броя области в масива.

	**Ограничения**: 2 <= **n**, **m** <= 100

	**Пример**<br>
	Вход<br>
	4 6<br>
	0 1 1 0 0 0<br>
	1 1 0 1 1 0<br>
	0 0 0 0 0 1<br>
	1 1 1 1 1 0<br>
	Изход: 4

	Обяснение на примера:<br>
	Областите са оцветени в различни цветове<br>
	0 <span style="color: red;">1 1</span> 0 0 0<br>
	<span style="color: red;">1 1</span> 0 <span style="color: green;">1 1</span> 0<br>
	0 0 0 0 0 <span style="color: blue;">1</span><br>
	<span style="color: orange;">1 1 1 1 1</span> 0<br>

<br>

15. **Задача**  Дадена е правоъгълна матрица **А** с размери **M<sub>x</sub>N**, съставена от цели числа. Дадени са числата **P** и **Q** (0<**P**<**N**, 0<**Q**<**M**). Намерете най-голямата сума, съставена от подматрица на **А** с размери **P<sub>x</sub>Q**.

	**Ограничения**: 2 <= **N**, **M** <= 100

	**Пример**<br>
	Вход:<br>
	4 6<br>
	1 2 3 4 5 6<br>
	4 5 -1 6 7 8<br>
	-1 3 9 10 19 3<br>
	0 4 5 8 -13 2<br>
	2 3<br>
	Изход:<br>
	53

	Обяснение на примера:<br>
	Правилната подматрица е оцветена в червено.<br>
	1 2 3 4 5 6<br>
	4 5 -1 <span style="color: red;">6 7 8</span><br>
	-1 3 9 <span style="color: red;">10 19 3</span><br>
	0 4 5 8 -13 2

<br>

16. **Задача**  Дадена е матрица **А** с размер **N**<sub>x</sub>2. Сортирайте редовете й в нарастващ ред по първия елемент. Ако първите елементи са равни, по вторите. Изведете я.

	**Ограничения**: 2 <= N, M <= 100

	**Пример**<br>
	Вход:<br>
	6<br>
	1 4<br>
	3 16<br>
	4 5<br>
	1 2<br>
	20 0<br>
	6 7

	Изход:<br>
	1 2<br>
	1 4<br>
	3 16<br>
	4 5<br>
	6 7<br>
	20 0

	**Бонус**: Направете същото с NxM матрица

<br>

17. **Задача**  Изхождайки от определението за магически квадрат (сумата по редове, колони и двата диагонала да е равна), ще дефинираме магически палиндром като матрица, съдържаща палиндроми по редовете, колоните и двата си диагонала. По зададено число **N** (0<**N**<10) определете дали дадена матрица от символи (размер **N<sub>x</sub>N**) е магически палиндром.

	**Пример**<br>
	Вход:<br>
	3<br>
	a b a<br>
	b a b<br>
	a b a<br>
	Изход: Yes

	Вход:<br>
	4<br>
	a b b a<br>
	9 a a 9<br>
	k o k o<br>
	a b b a<br>
	Изход: No

<br>

18. **Задача** Дадена е матрица с размери **NxM**, 0 < **N**, **M** < 10. Напишете програма, която проверява дали всички диагонали от ляво на дясно са нарастващи.

	**Примери**<br>
	Вход:<br>
	1 2 3 4<br>
	5 6 7 8<br>
	9 9 9 9<br>
	Изход: Yes

	Вход:<br>
    1 2 3 4<br>
    5 0 7 8<br>
    9 9 9 9<br>
    Изход: No<br>
	Пояснение: 1 < 0 < 9 не е вярно

<br>

19. **Задача** Дадена е квадратна матрица **A** с размери **n<sub>x</sub>n**. Изведете елементите й спираловидно, започвайки от горния ляв ъгъл.
 	**Ограничения**: 2 <= **n**, **m** <= 100
	**Пример**<br>
	Вход:<br>
	4<br>
	1 2 3 4<br>
	6 10 8 9<br>
	11 2 3 4<br>
	3 7 4 5<br>

	Изход:<br>
	1 2 3 4 9 4 5 4 7 3 11 6 10 8 3 2<br>

	**Бонус**: направете същото с **m<sub>x</sub>n** матрица

<br>

20. **Задача** Дадени са матриците **A** и **B**, с размери **NxM** и **PxQ**. Да се изведе произведението на **A** и **B**, ако това е възможно, или да се изведе съобщение, че не е. <br>
    **Ограничения**: 0 < **N**, **M**, **P**, **Q** <= 10
