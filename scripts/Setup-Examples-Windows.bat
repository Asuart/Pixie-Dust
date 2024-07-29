@echo off

pushd ..
dependencies\binaries\Premake\Windows\premake5.exe --file=examples/Build-Examples.lua vs2022
popd
pause