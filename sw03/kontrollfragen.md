1. Verändert ein Cut die prozedurale oder die
deklarative Bedeutung von einem Prolog-
Programm? Begründen sie Ihre Antwort.
Kann beides.

Prodedural = Green cut
Deklaration = Es gibt andere Resultate.


2. Beschreiben sie in eigenen Worten, was ein Cut-
Operator in einer Regel bewirkt.

Bindet so weit zurück, bis auf das LeftAssignment.


v(x) = !, write("CUT").

Bedeutet also, alle v's (v(c), v(d) ..etc) die nachher
kommen, werden nicht mehr gematcht.

p(X):- b(X), !, c(X).
Aber hier: c(X) wird immer noch ausgeührt.



3. Gegeben ist folgendes Programm: 
r(a) :- !.
r(b). r(c). Was ist das Resultat auf die Anfrage
r(X)? Zeichnen sie den dazugehörigen Suchbaum.


4. Gegeben ist folgendes Programm:
r(b). r(a) :- !. r(c).
Was ist das Resultat auf die Anfrage
r(X)?
