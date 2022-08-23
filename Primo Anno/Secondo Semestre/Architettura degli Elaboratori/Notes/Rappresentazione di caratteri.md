# Rappresentazione di caratteri

[Fri, 11 Mar](day://2022.03.11)

Per rappresentare un **::carattere::** esistono **::tre::** diverse **::modalità::**:

   - **::ASCII Standard::** (7bit)
   - **::ASCII Estesa::** (8bit)
   - **::Unicode::** (tra 8 e 32 bit)

> > ## ASCII

> ### Standard

   Tramite la codifica **::ASCII Standard::**, è possibile *rappresentare*:

   - *Caratteri di controllo*
   - *Dieci cifre*
   - *Lettere maiuscole*
   - *Lettere minuscole*
   - *Segni di interpunzione*

   Le cifre sono disposnte in *ordine crescente* e le lettere in *ordine alfabetico.*

   Le **::parole::** sono rappresentabili come **::sequenze::** di **::caratteri::**.

> ### Estesa

   256 caratteri, parity bit. diverse estensioni iso legate alle zone geografiche (latin arabic cyrillic greek hebrew)

La codifica *ASCII* è *accettata* da tutti i *calcolatori* ma **::non::** è **::internazionale::** (le codifiche assumono caratteri diversi in base alla *regione*) e non riesce a rappresentare alcuni caratteri **::specifici::**. Inoltre, in base al **::software::** viene **::renderizzata::** in modo *differente*.

> > ## Unicode

Standard universale + caratteri pittorici.

indipendente da lingue, SO e software

rappresentato con 8 cifre HEX

- [x] > ### UTF-8

   codifica di lunghezza variabile fra una squenza di valori a 8 bit + seuqneza unicode

