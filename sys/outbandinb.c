#include "sys/defs.h"

void outb(uint16_t port, uint8_t value)
{
	__asm__ volatile("outb %0,%1"::"a"(value),"Nd"(port));

}


uint8_t inb(uint16_t port)
{
	uint8_t ret_val;
        __asm__ volatile("inb %1,%0":"=a"(ret_val):"Nd"(port));
	return ret_val;
}

