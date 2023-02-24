# OpenMPI

## Installation de OpenMPI

### Linux

```
sudo apt install openmpi-bin openmpi-common libopenmpi-dev
```

### MacOS

```
brew install open-mpi
```

## Utilisation de OpenMPI

### Compilation

```
mpicc test2.c -o test2_exe
```

### Exécution

#### Sans hosts

Si le processeur a un nombre de coeurs suffisant, il n'y a pas besoin de `hosts`.

`mpirun -np <nb_coeurs> test2_exe`

#### Avec hosts

Si le processeur n'a pasun nombre de coeurs suffisant, il y a besoin de `hosts`.

`mpirun --hostfile <fichier_host> -np <nb_coeurs> test2_exe`

## Compilation et exécution des fichiers de test

```
mpicc test1.c -o test1_exe
mpirun -np 2 test1_exe
mpirun --hostfile hosts -np 2 test1_exe
```

## Nettoyer toutes les compilations

```
rm -r *_exe
```