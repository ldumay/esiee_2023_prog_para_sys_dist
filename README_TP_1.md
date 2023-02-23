[Retour](../../)

# TP 1 - OpenMP & MPI - Partie 1

Prévu et testé pour tourner sur un Ubuntu 😉

## Programme 1 - Hello World

Compilation du petit programme **Hello World** dans le fichier `tp1_prog1.c`.

Compilation / Résultat / Exécution / Résultat

```
cd esiee_2023_prog_para_sys_emb/
gcc -fopenmp tp1_prog1.c -o tp1_prog1.out

tree
tp1_prog1.c  tp1_prog1.out

export OMP_NUM_THREADS=4
./tp1_prog1.out

hello(3)world(3) 
hello(0)world(0) 
hello(1)world(1) 
hello(2)world(2) 
```

## Programme 2 - [...]

### Partie 1

**CF** : PDF Exercice 2 - Intégration numérique

Programmation des foncitons mathématiques en **C**.

```
gcc -fopenmp tp1_prog2.c -o tp1_prog2.out && tree && ./tp1_prog2.out
```

> `tp1_prog2.c` : ok ✔

Correction

```
gcc -fopenmp tp1_prog3.c -o tp1_prog3.out && tree && ./tp1_prog3.out
```

> `tp1_prog3.c` : ok ✔

### Partie 2

Mise en parallèle du programme.

```
gcc -fopenmp tp1_prog4.c -o tp1_prog4.out && tree && ./tp1_prog4.out
```

> `tp1_prog4.c` : ok ✔

Correction

```
gcc -fopenmp tp1_prog5.c -o tp1_prog5.out && tree && ./tp1_prog5.out
```

> `tp1_prog5.c` : ok ✔

## Programme 3

▶ les fork

```
gcc -fopenmp tp1_prog6.c -o tp1_prog6.out
tree
tp1_prog6.c  tp1_prog6.out
./tp1_prog6.out

 je suis le pere, monpid = 3374 et le pid de mon fils = 3375 et le gd pere = 2507
 je suis le fils, monpid = 3375 et le pid de mon pere = 3374
valeur retournee par mon fils = 20
```

## Programme 4

Mise en parallèle du programme `tp1_prog7.c` avec réduction.

```
gcc -fopenmp tp1_prog7.c -o tp1_prog7.out && tree && ./tp1_prog7.out
```

> `tp1_prog7.c` : ok ✔