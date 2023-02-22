[Retour](../../)

## TP 1 - OpenMP & MPI

Prévu pour tourner sur un ubuntu 😉

### 1 - Pré-requis

- GCC : `gcc`
- OpenMp : `libomp-dev`

Commande possible :

```
apt install git tree nano libomp-dev gcc
```

### 2 - Programme 1 - Hello World

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

### 2 - Programme 2

```
gcc -fopenmp tp1_prog2.c -o tp1_prog2.out
tree
tp1_prog2.c  tp1_prog2.out
./tp1_prog2.out
```

### 3 - Programme 3

```
gcc -fopenmp tp1_prog3.c -o tp1_prog3.out
tree
tp1_prog3.c  tp1_prog3.out
./tp1_prog3.out

 je suis le pere, monpid = 3374 et le pid de mon fils = 3375 et le gd pere = 2507
 je suis le fils, monpid = 3375 et le pid de mon pere = 3374
valeur retournee par mon fils = 20
```