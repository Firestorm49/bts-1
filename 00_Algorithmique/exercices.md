# Exercices Algorithmique

## Exercice 1

Quelles seront les valeurs des variables A et B après exécution de chacune des instructions suivantes ?

```
VARIABLES
    entier : A;
    entier : B;

DEBUT
    A <- 7 ;        // Instruction 1
    B <- A + 4 ;    // Instruction 2
    A <- 5 ;        // Instruction 3
FIN
```

```
1 : 
2 : 
3 : 
```

## Exercice 2

Ecrire un algorithme permettant d’échanger les valeurs de deux variables A et B de type entier.

> C'est ce qu'on appelle un "swap".

```

```

## Exercice 3

Ecrire un algorithme qui demande un nombre à l’utilisateur et l’informe ensuite si ce nombre est positif ou négatif ou nul.

```
variables 
entier: N

Début
ecrire ("que est la valeur de N?")
lire (N)
si N<0 alors
    ecrire("N est négatif")
sinon 
    si N>0 alors 
        ecire("N est positif")
    sinon 
        ecire ("N est nul")
    fin si
fin si
Fin
```

## Exercice 4

Reprendre l'exercice 3 en autorisant la saisie d'un 0 et en affichant que le nombre saisi est nul dans ce cas.

```

```

## Exercice 5

Ecrire un algorithme qui demande deux nombres à l’utilisateur et l’informe ensuite si, sans le calculer, leur produit est négatif ou positif ou nul.

```
variables 
entier: A;
entier: B;

Début
ecrire ("que est la valeur de A?")
ecrire ("que est la valeur de A?")
lire (A)
lire (B)
    si (A<0) et (B<0) alors
        ecrire("Le produit des deux valeur est Négatif")
    sinon 
        si (A>0) et (B>0) alors 
            ecire("Le produit des deux valeur est positif")
        
        sinon 
             si (A==0) et (B==0) alors
                 ecire ("Le produit des deux valeur est nul")
             fin si
    fin si
Fin
```

## Exercice 6

Ecrire de deux manières différentes un algorithme qui demande à l’utilisateur un nombre compris entre 1 et 10 jusqu’à ce que la réponse convienne.

Solution 1 :

```
variables 
entier: A;

Début
     faire
          ecrire ("nombre compris entre 1 et 10 donner valeur A!")
          lire (A)
     tant que 1<A<10
ecire("valeur correct")
Fin
```

Solution 2 :

```
variables 
entier: A;

Début
repetition
    ecrire ("que est la valeur de A?")
    lire (A)
condition de sortie 1<A<10 
    ecrire("valeur correct")
sinon 
Fin
```

## Exercice 7

Ecrire un algorithme qui demande à l'utilisateur un nombre, et qui calcule la somme des entiers jusqu’à ce nombre et l'affiche. 

**Exemple** : *si l’utilisateur saisit 5, le programme doit calculer : 1 + 2 + 3 + 4 + 5 = 15 puis afficher : 15*

```
variables 
entier: A;
entier: C;
entier: B;

Début
ecrire ("valeur de A?")
lire (A)
C<-0
pour variable B de 1 à A par pas de 1 faire 
    C<-C+B
fin pour
ecrire ("la somme des entier jusqu'à "A"est"C);
Fin
```

## Exercice 8

Ecrire un algorithme qui demande successivement 5 nombres à l’utilisateur et qui affiche ensuite le plus grand parmi ces nombres.

```
variables 
entier: A;
entier: B;
entier: C;
entier: D;
entier: E;

Début
ecrire ("valeur de A?")
lire (A)
ecrire ("valeur de B?")
lire (B)
ecrire ("valeur de C?")
lire (C)
ecrire ("valeur de D?")
lire (D)
ecrire ("valeur de E?")
lire (E)


Fin
```

## Exercice 9

Ecrire un algorithme qui déclare un tableau de 5 notes, dont on fait ensuite saisir les valeurs par l’utilisateur (notes comprises entre 0 et 20), après la saisie, affiche la moyenne des notes.

```
variables 
entier: A;
entier: B;
tableau[5] de entier:tab;
Réel: moyenne;

Début
pour variable B de 0 à 4 par pas de 1 faire
    FAIRE
    ecrire("choisir nombre?");
    lire ("    "tab[B]);
    TANT QUE (tab[B]<0 ou tab[B]>20);
    A<-A+tab[B];
fin pour
moyenne<-A/5;
ecrire ("la moyenne est:"moyenne);
Fin
```

## Exercice 10

On vous demande régulièrement de modifier l'algorithme de l'exercice précédent pour changer le nombre de notes à saisir. Le modifier pour que cette modification soit réduite à la modification d'une seule valeur.

```
variables 
Constance C: 5;
entier: A;
entier: B;
tableau[C] de entier:tab;
Réel: moyenne;

Début
ecrire("choisir nombres de notes"),
lire(C);
pour variable B de 0 à C-1 par pas de 1 faire
    FAIRE
    ecrire("choisir nombre?");
    lire ("    "tab[B]);
    TANT QUE (tab[B]<0 ou tab[B]>20);
    A<-A+tab[B];
fin pour
moyenne<-A/C;
ecrire ("la moyenne est:"moyenne);
Fin
```

## Exercice 11

Ecrire la fonction ```occurence_max()``` qui renvoie le nombre d’occurrences de la lettre la plus présente dans un tableau de 10 caractères qui lui est passé en paramètre.

```
FONCTION occurence_max (tableau [10] de caractères : A) : caractères
variables 
entier: S;
entier: B;
entier: max;

Début
S<-0
max<-0
pour variable B de 0 à 9 par pas de 1 faire
    pour variable B de 0 à 9 par pas de 1 faire
        si(A[B]==A[B] alors
            S<-S+1;
        fin si
   fin pour
   si (S>max) alors
    max<-S;
  fin si
fin pour
retour(max);
Fin

variables 
entier: i;
entier: o;
tableau [10] de caractères :tab

Début
pour i variant de 0 à 9 faire
    lire(tab[i]);
fin pour
o<_occurence_max (tab);
ecrire ("une lettre apparait"o"fois");
Fin

```

## Exercice 12

Que fait la fonction ```f``` suivante :
la fonction f est un tableau de 10 entier 

```
FONCTION F (tableau [10] de entier : t) : entier
VARIABLES
    entier i;
    entier m;
    entier m2;
DEBUT
    m <- t[0] ;
    m2 <- t[0];
    POUR i VARIANT DE 0 A 9 FAIRE
        SI (t[i] > m) ALORS
            m2 <- m;
            m <- t[i];
        SINON
            SI (t[i] > m2) ALORS
                m2 <- t[i];
            FIN SI
        FIN SI
    FIN POUR
    RETOUR m2;
FIN
```
