set PATH=C:\devkitPro\msys2\mingw64\bin;C:\devkitPro\devkitARM\bin;%PATH%
set DEVKITARM=/c/devkitPro/devkitARM
set DEVKITPRO=/c/devkitPro
set LIBGBA=/c/devkitPro/libgba

make  
rem >error.txt 2>&1

IF EXIST omega-kernel.gba (rename omega-kernel.gba ezkernel.bin)
IF EXIST omega-kernel.elf (del omega-kernel.elf)

pause