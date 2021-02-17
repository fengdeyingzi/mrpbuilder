arm-none-eabi-gcc -o bin/bin.elf demo/demo.c -nostdlib -nostartfiles -pie -fPIC -marm -march=armv5te --entry=_start
echo "ok bin.elf"
mrp.exe pack.json
demo\demo.mrp