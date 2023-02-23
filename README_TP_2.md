[Retour](../../)

# TP 2 - OpenMP & MPI - Partie 2

Prévu et testé pour tourner sur un Ubuntu 😉

## Programme 1

Mise en parallèle du programme `tp2_prog1.c` avec réduction.

```
gcc -fopenmp tp2_prog1.c -o tp2_prog1.out && tree && ./tp2_prog1.out
```

> `tp2_prog1.c` : ok ✔