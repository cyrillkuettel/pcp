# C und Java... 


## Werden in Java parameter by value or by reference übergeben?

Immer by value, wenn man pedantisch sein will. 
Es ist subtil:

Primitive Datentypen sowieso by value.
Tatsächlich ist bei Java alles by value. Bei der Übergabe von Objekten wird
eine Kopie der Referenz übergeben. Man kann keinen "swap machen wie bei C"

Grosser Vorteil der Objektorientierung:

Die Funktionen sind sind an ein Objekt gebunden. Die Daten und die zuge-
hörigen Funktionen gehörten zusammen, bei C sind sie global Verfügbar.
