[Retour](../../)

## TP 1 - OpenMP & MPI

### Pré-requis

- GCC : 
- OpenMp : 

=> Lib : `libomp-dev`

```
brew install libomp
```

=> Compilateur : `gcc`

```
gcc -v
Apple clang version 14.0.0 (clang-1400.0.29.202)
Target: x86_64-apple-darwin21.6.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
```

=> Exécution

```
gcc prog_1.c -o prog_1.out
```

```
gcc -fopenmp prog_1.c -o prog_1.out
```