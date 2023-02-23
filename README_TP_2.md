[Retour](../../)

# TP 2 - OpenMP & MPI - Partie 2

Prévu et testé pour tourner sur un Ubuntu 😉

## Programme 1

Superficie de l'ensemble de Mandelbrot :
- [wiki](https://fr.wikipedia.org/wiki/Ensemble_de_Mandelbrot)
- Programme parallèle : `tp2_prog1.c`.

```
gcc -fopenmp tp2_prog1.c -o tp2_prog1.out && ls | grep 'tp2_prog1.out' && ./tp2_prog1.out
```

> `tp2_prog1.c` : ok ✔