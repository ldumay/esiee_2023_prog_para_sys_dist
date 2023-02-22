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

Compilation du petit programme **Hello World** dans le fichier `prog_1.C`.

Exécution

```
cd esiee_2023_prog_para_sys_emb/tp_1/
gcc -fopenmp prog_1.c -o prog_1.out
```

Résultat :

```
ls
prog_1.c  prog_1.out
```