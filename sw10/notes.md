# Modern Java
A rambling stream of consciousness.


Immutability setzt sich durch, unter anderen wegen den neuen
CPU Architekturen. Mehr Cores. (Immuntabiltiy begünstigt 
Concurrency indirekt, weil weniger Locks braucht)



Pattern matching. (Gib mir die drei ersten Element in List)

Eine Sprache wird erst richtig funktional, wenn die Sprache 
die Funktionen gleiche wie Variablen behandelt.

- Als Parameter
- Als return type



Copy-on-write: 
Strukturen.
Solang das die Datenstrukturen nur gelesen werden, kein overhead, sobald
es write gibt, erst dann wird kopiert, folglich gibt es dann overhead.


Java generelle Tendenz: Weniger schreiben. (siehe Diamond Operator)

- List<String> list = new ArrayList<>();
- Var declaration




Warum muss ich den Typ einer Variable immer angeben, bei statisch Programmieten Sprachen. (2 Gründe)

- Sodass der Compiler weiss was der Typ der Variable ist, 
sonst weiss er nicht was er machen muss. (Muss wiss
- Sodass die Kollegen (Programmieren) wissen was gemeint ist.

Stichwort Type Inference. Studien haben gezeigt, dass in 90% der Fälle,
kann der Compiler den Typ inferieren.


Immutability


- safety (Keine Überschungen)
- thread-safety
- cacheable. Einfach zum cachen, weil es nicht synchronisiert werden muss.
Wenn das Object sowohl im L2 als auch im L3 cache ist, muss 
(falls eine mutable Object ist) ein Abgleich gemacht werden.
- hashable. Man muss wahnsinnig aufpassen dass der hash nicht auf einer property basiert, 
die sich ändert. Wenn das der Fall ist haben sie ein Problem.
 



Was ist eine Immutable Class?

- class itself should be final
- all instance variables private and final
- Don't define any setter methods.
- Don't allow referenced mutable objects so be changed. 
Always return a copy, or in the case of a list could use Collections.unmodifiableList()


- der Konstruktor muss alle properties des Objekts setzen. 
(In C++ Construction is Initialization)




Algebraic Data Types.


# Records

- Record: Immutable Record (shallow immutability)

Objects.requireNonNull(...) erlaubt die Parameter zu validieren.
Dieser Code wird vor dem Constructor aufgerufen.



Exercise notes:

Es gibt zwei sorten von Lists
Wenn einzelne Element angeschaut werden:

1. case:     [ ] ->   referenz auf nächstes Element
2. case:     [X]      keine Referenz


Control Questions: Lambda in java

(Integer x, final Integer y) -> x * y

final ist möglich!

(var x, final var y) -> x * y ? // Fehler
(x, y) -> x * y
What is the type of the lamdba (Integer x, final Integer y)
Functional interface. BiFunction<Integer, Integer>

What does <? super T> mean? (Theorie: Covariance vs Contravariance)
Das bedeutet, dass die Klasse die in '?' kommt, eine Superklasse
von T ist oder T selbst.


Es macht Sinn, hochzugehen (in der Klassenhierarchie) in der Return value
-> Lisov substitution principle (Jetzt wird es vernetzt)

Lambda in java (Funktional interface) wird vom compiler gemapped.
Das heisst, der Compiler wird automatisch ein Passendes Interface 
verwenden.





Generics funktionieren nur bei Referenztypen. (List<Integer>)





