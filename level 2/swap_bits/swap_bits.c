 #include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

int	main(void)
{
	unsigned char	resultado;
	unsigned char	octet;

	octet = 0x53;
	resultado = swap_bits(octet);
	printf("Octet original : 0x%X\n", octet);
	printf("Octet avec bits permutés : 0x%X\n", resultado);
	return (0);
}