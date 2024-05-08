# README

## install LLVM 17 clang 17 etc
for example:

wget https://apt.llvm.org/llvm.sh
sudo ./llvm.sh 17

## installing bazel

install bazel tools

- https://github.com/bazelbuild/bazelisk/releases 
- https://github.com/bazelbuild/buildtools/releases

download and install bazelisk and buildtools
mv it to `/usr/bin/bazel` and `/usr/bin/buildifier`

##  install Renovate for automate dependency updates

TODO

## install vscode extension

- bazel
- clangd
- codelldb
- python



## python set up

pip install lit


## get clangd running

```
bazel run @hedron_compile_commands//:refresh_all
```

