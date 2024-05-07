# README

## install LLVM 17 clang 17 etc
for example:

wget https://apt.llvm.org/llvm.sh
sudo ./llvm.sh 17

## installing bazel

install bazelisk

```
wget https://github.com/bazelbuild/bazelisk/releases your bazelisk
wget https://github.com/bazelbuild/buildtools/releases your buildifier
mv to /usr/bin/bazelisk
mv to /usr/bin/buildifier
```
##  install Renovate for automate dependency updates

## install clangd vscode extension

## get clangd running`
```
bazel run @hedron_compile_commands//:refresh_all
```
