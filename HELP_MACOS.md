[Retour](../../)

### Solution pour utilisé la librairie `libomp` de HomeBrew

[Source - How to include omp.h in OS X?](https://stackoverflow.com/questions/25990296/how-to-include-omp-h-in-os-x)

MacOS seems to have that library included but XCode can't find it if you simply use:

```
#include <omp.h>
```

However, if you don't have the library installed,you can simply add it by installing it with HomeBrew:

```
brew install libomp
```

After doing this , simply replace library include code with this one:

```
#include "/usr/local/opt/libomp/include/omp.h"
```

or the path that terminal shows you after installing libomp with brew.