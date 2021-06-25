arm-none-eabi-gcc -o bin/bin.elf capp/capp.c header/base.c header/mrc_android.c header/mrc_graphics.c header/xl_bmp.c header/encode.c header/xl_coding.c -DC_RUN2 -nostdlib -nostdinc -nostartfiles -pie -fPIC -lgcc -marm -march=armv5te --entry=_start -Wbuiltin-declaration-mismatch 
echo "test capp capp.elf"
if %errorlevel% == 0 (
    echo "编译成功"
    mrp.exe pack_capp.json
    demo\test.mrp
) else (
echo "编译失败"
)

