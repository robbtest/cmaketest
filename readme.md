### cmake generate

```bash
# vistual studio
# win32
cd <root_dir>
cd build
cmake -G "Visual Studio 12 2013" ..
# x64
cd <root_dir>
cd build
cmake -G "Visual Studio 12 2013 Win64" ..

# codeblocks
cd <root_dir>
cd build
cmake -G "CodeBlocks - Unix Makefiles" ..
# cmake -DCMAKE_BUILD_TYPE=Release -G "CodeBlocks - Unix Makefiles" .
```

### git manager

```bash
# git initialize
cd <root_dir>
git init
git add .
git commit -m "first commit"
# git clean
git clean -xdf
```
