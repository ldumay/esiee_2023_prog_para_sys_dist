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

### 2 - Programme Hello World

Compilation du petit programme **Hello World** dans le fichier `tp1_prog1.c`.

Compilation

```
cd esiee_2023_prog_para_sys_emb/
gcc -fopenmp tp1_prog1.c -o tp1_prog1.c.out
```

Résultat :

```
ls
tp1_prog1.c  tp1_prog1.c.out
```

Exécution

```
export OMP_NUM_THREADS=4
./tp1_prog1.c.out

hello(3)world(3) 
hello(0)world(0) 
hello(1)world(1) 
hello(2)world(2) 
```