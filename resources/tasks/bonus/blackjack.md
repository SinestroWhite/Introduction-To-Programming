# Блекджек

Да се напише опростена версия на играта Блекджек.

Играта да протече като "диалог" между крупието (компютъра) и потребителя. Двамата играчи събират точки на базата на картите, които изтеглят. Асото дава 1 точка, картите 2-10 дават съответно 2-10 точки, а валето, дамата и попът също дават 10 точки. Печели играчът, който стигне най-близо до 21 точки, без да ги превиши.

Първо се раздават по две карти на двамата играчи. След това играчите се редуват в играта, като всеки може да изтегли колкото карти иска. На всеки ход играчите имат възможността да изтеглят още една карта (hit) или да спрат да теглят (stand). След като и двамата играчи са решили да спрат да теглят карти, печели този с повече точки. Ако обаче нечии точки надвишават 21, другият играч автоматично печели. Това условие се проверява в полза на компютъра: ако потребителят надвиши 21 точки, той губи веднага; ако пък компютърът надвиши 21, това се разбира чак след като потребителят спре да тегли карти.

Компютърът спира да тегли карти след като стигне 18 точки.

Напомняме: Хазартът е убил динозаврите. Играта да се използва само за учебни цели!

[Решение](../../solutions/bonus/blackjack.cpp)

Примерни игри:
```
Your first card is 1.
Your second card is 7.

You have 8 points.
Hit or Stand (H / S)? H
You drew 2.

Dealer: I'll play with this hand.

You have 10 points.
Hit or Stand (H / S)? H
You drew 10.

You have 20 points.
Hit or Stand (H / S)? S

Dealer: I have 18 points. You have 20. You win!
```

---

```
Your first card is 3.
Your second card is 2.

You have 5 points.
Hit or Stand (H / S)? H
You drew 10.

Dealer: I'll take another card.

You have 15 points.
Hit or Stand (H / S)? H
You drew 6.

Dealer: I'll take another card.

You have 21 points.
Hit or Stand (H / S)? S

Dealer: I'll play with this hand.

Dealer: I have 21 points. You have 21. It's a tie!
```

---

```
Your first card is 4.
Your second card is 10.

You have 14 points.
Hit or Stand (H / S)? H
You drew 10.

You broke 21 points. You lose!
```

---

```
Your first card is 3.
Your second card is 10.

You have 13 points.
Hit or Stand (H / S)? H
You drew 4.

Dealer: I'll take another card.

You have 17 points.
Hit or Stand (H / S)? S

Dealer: I'll take another card.

Dealer: I'll take another card.

Dealer: I'll play with this hand.

Dealer: I have 20 points. You have 17. You lose.
```

---

```
Your first card is 1.
Your second card is 10.

You have 11 points.
Hit or Stand (H / S)? H
You drew 8.

Dealer: I'll take another card.

You have 19 points.
Hit or Stand (H / S)? S

Dealer: I'll play with this hand.

Dealer: I have 24 points. I broke 21, so you win!
```

---

```
Your first card is 10.
Your second card is 10.

You have 20 points.
Hit or Stand (H / S)? S

Dealer: I'll take another card.

Dealer: I'll take another card.

Dealer: I'll take another card.

Dealer: I'll take another card.

Dealer: I'll take another card.

Dealer: I'll play with this hand.

Dealer: I have 24 points. I broke 21, so you win!
```
