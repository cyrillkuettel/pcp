# Module

Warum Module generell:
Es geht immer auch darum, welche source code brauche ich tatsächlich?
Für ein kleines Hello word System.out.println() brauche ich sicher
nicht die ganze java library. (20mb oder so??)

Danke Java9 ist das tatsächlich möglich. Wir aber sehr selten gemacht.

__ Sidenote:
# Neue jvm strategie: Classloader sidesteppen, nach dem ersten Start
wird einfach das Binary in die jvm reingedrückt. 

__ Sidenote:
# Unsafe Klassen



# Warum Module?

- 4 Vorteile
(Module sind erfunden worden, weil jar dependency Management eine Katastrope
ist.)


- Ein Modul darf nur in ein Jar file definiert sein.
- Per default gibt es keine Reflection. (Kann eingeschaltet werden)

Was fehlt bei Modulen ist die Versionierung. (Verantwortlichkeit der
Entwicklers).

#  1.)

Falls Sie zwei Packages haben und sie haben eine Klasse, auf die sie aus
zwei packages zugreifen, sind sie gezwungen, diese Klasse public zu machen.
Dann kann aber die ganze Welt darauf zugreifen.
-> Ursache von Problemen

#  2.)

Trendiges Konzept
Vererbung einschreänken. (permits) Dieser Trend sieht man in letzer 
Zeit öfters. (Solche Sachen ist etwas was andere Module auch erlabuen)
Kotlin hat das auch wenn ich mich nicht täusche.

# 3.) 
Klares dependency Mangement dank modulen.

# 4.) Service.


## Gründe warum man nicht auf der akutellen JVM Version sein kann.

Gradle unterstütuzt nicht..
Intellij ist hintendrein.

(Eigentlich gibt es keine Gründe).


# jar approaches:
# protected Klassen sind sichtbar, für alle die im gleichen Package sind,
oder wenn vererbt wird.


Interessantes Konzept:
OSGi: Hot Reload
-> Wenn Docker verwendet wird, gibt es kein Grund mehr es zu verwenden.


Control Questions:

4) Why should you use requires transitive directive?

    Kundenfreundlichkeit.



Idiom = Eine Art wie man ein Problem löst in einer Programmiersprache.


Try with resources <=> (AutoClosable)

Kontrollfragen:
Warum sind idioms relevant für Programmiersprachen?

- Ein Pattern ist eine erpropte klar dokumentierte Art ume ein bekanntes
  Problem zu lösen in einem bestimmten Technologiestack.

-> folglich weniger cognitive Load. 


Beispiel: List comprehensions (python)
Construction is initilaization (C++) 

Wo wird die close() function aufgerufen?
im try with resources block, wird implizit im final block aufgerufen (auch
wenn kein final block explizit exisitiert)

Ist das instanceof construct in Java nützlich?
Ja, eben wenn man Implementations-Spezifische Logik hat.


Wie kann man einen Benutzer davon abhalten, eine bestimmte Methode in Java zu verwenden?

Deprecated Annotation. Dann, jedes mal wenn kompiliert wird gibt es eine
Warnung.
 


# Loom

Grund warum es virtuelle Threads braucht: 'Echte' threads verbruachen relativ
viel resourcen.

Virtuelle Threads sind ein Ansatz um die Kosten von asnychonren Threands kleiner zu machen.

Mit virtuellen Threads können 100'000 Threads auf dem Server laufen lassen
gewerden.


Delimited Continuations

A Continutation (similar to coroutine) is a stack of function calls?


__ Sidenote

- Don't use synchronized whenever possible. (Because it blocks)


Structured Concurrency

- Binding lifecycle to scope.
- Erlaubt ForkJoin zu implementieren in ein paar Zeilen..
Alle Spezialfälle werden von der Runtime übernommen. 

-> weniger Boilerplate -> wenier Fehleranfällige implementierung für den Programmierer.


How to pass parameter to Runnable?

Just create a Class that implements the Runnable and then 
you can pass the data to the constructor. 

Tail recursion:

Letzter call kann nur die Rekursion sein.
also n * fac(n-1) ist nicht tail recursive.
