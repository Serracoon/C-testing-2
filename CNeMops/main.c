#include <stdint.h>
#include <stdio.h>

int main() {
    uint32_t number = 0x11223344;
    char *byte_ptr = (char *) &number;

    printf("The number is %x\n", number);

    *byte_ptr = 0xFF;

    printf("Modified 32-bit integer: 0x%X\n", number);

    /*44 стає FF тому що у більшості процесорів працює система "Little-Endian" де багато байтні дані
     зберігаються послідовно від найновішого до найстарішого і коли програма просить перезаписати данні
     то першим йде іменно 44

     */
    return 0;

}
