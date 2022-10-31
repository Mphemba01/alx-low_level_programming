  if (type == 0)
                printf("NONE (No file type)\n");
        else if (type == 1)
                printf("REL (Relocatable file)\n");
        else if (type == 2)
                printf("EXEC (Executable file)\n");
        else if (type == 3)
                printf("DYN (Shared object file)\n");
        else if (type == 4)
                printf("CORE (Core file)\n");
        else
                printf("<unknown: %x>\n", type);
}

/**
 * print_osabi - prints osabi
 * @ptr: magic.
 * Return: no return.
 */
void print_osabi(char *ptr)
{
        char osabi = ptr[7];

        printf("  OS/ABI:                            ");
        if (osabi == 0)
                printf("UNIX - System V\n");
        else if (osabi == 2)
                printf("UNIX - NetBSD\n
~

