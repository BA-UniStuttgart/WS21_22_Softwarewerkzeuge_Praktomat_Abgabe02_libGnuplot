# libGnuplot

## Dependencies
    - GNU gcc compiler
    - ranlib utility
    - gnuplot utility

### Install Gnuplot utility
In the commandline, run:
```
sudo apt install gnuplot-nox
```

## Build
### Linux
Run the build.sh file 

### Windows & Mac
N.A

## Linkage
In the commandline, run:
```
gcc -I [PATH_TO_LIBGNUPLOT]/include/ -g [YOUR_SOURCE_FILES] -l Gnuplot -L [PATH_TO_LIBGNUPLOT]/bin/ -o [YOUR_OUTPUT_FILE]
````