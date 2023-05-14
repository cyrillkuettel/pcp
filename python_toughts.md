


- @decorators (Annotations in Java)
    -> example mit cache

- Generators 

- yield keyword example 
    -> word count mit lazy loading.

- 'or' Keyword

- List comprehensions.


- Tuples. We can make method return multiple elements.

# Generator 101

Jede Funktion, die ein yield statement hat, ist ein generator.
Das bedeutet, es verändert das Verhalten der Funktion. Es reformuliert den
Kontrollfluss.


def countdown(n):
    while n > 0:
        yield n
        n -= 1



Man kann ein generator betrachten, sehr plakativ,
als eine 'potenzielle liste'. Es muss nicht zwingend eine Liste sein, kann
natürlich auch eine andere Datenstruktur sein.

In anderen Worten, erst wenn die Daten effektiv gebraucht werden, wird der Code
ausgeführt. 

## Beispiel 1

# Extract Email recipeints fron csv 

Sehr typische Struktur von Funktionen:

def get_emails()
    enails = []

    for item in list:
        email = item[2]
        emails.append(email)

    return emails


def get_emails()
    for item in list:
        email = item[2]
        yield email


Das grundlegende Merkmal, das Generatorfunktionen ihre Superkräfte verleiht, ist die Fähigkeit, eine Generatorfunktion anzuhalten und dann jederzeit von einer beliebigen Funktion aus wieder fortzusetzen. 
Der lokale Zustand der Generatorfunktion bleibt nach der Unterbrechung der 
Funktion erhalten und steht bei der Wiederaufnahme der Funktion wieder zur Verfügung.




# In python, functions are first class citizens

