CROSS_COMPILE=m68k-unknown-elf

loop1: loop1.S
	$(CROSS_COMPILE)-as -m68000 -o loop1.elf uart.S
	$(CROSS_COMPILE)-objcopy -O binary loop1.elf loop1.bin
	dd if=/dev/zero of=loop1.raw bs=512 count=1
	dd if=loop1.bin of=loop1.raw conv=notrunc
	xxd -p -c 4 loop1.raw | ../tools/raw2vmem.py > uart_test.vmem
	rm loop1.elf
	rm loop1.bin
	rm loop1.raw
