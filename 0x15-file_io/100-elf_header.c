#include "main.h"
/**
 * get_magic - print magic numbers from ELF header if they exist, or exit
 * with error 98 if file is not ELF format
 * @ehdr: pointer to struct containing header features
 * @fname: name of file
 * @fd: file descriptor for `filename'
 */
void get_magic(Elf64_Ehdr *ehdr, char *fname, int fd)
{
	size_t i = 0;
	unsigned char *mgc = ehdr->e_ident;

	if (mgc[EI_MAG0] == ELFMAG0 &&
	    mgc[EI_MAG1] == ELFMAG1 &&
	    mgc[EI_MAG2] == ELFMAG2 &&
	    mgc[EI_MAG3] == ELFMAG3)
	{
		printf("Magic:  ");
		while (i < EI_NIDENT)
			printf(" %02x", ehdr->e_ident[i++]);
		printf("\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", fname);
		close(fd);
		exit(98);
	}
}

/* Other functions remain unchanged */

int main(int argc, char *argv[])
{
	int fd;
	ssize_t r;
	Elf64_Ehdr *helf
