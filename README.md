In the parent directory (where .h and .c source files are located),

One time cmake setup:  
```
nvim CMakeLists.txt
mkdir build
```

Every build -> run:  
```
cmake -B build -S .
cmake --build build
./build/main
```
