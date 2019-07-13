unsigned int reverse(unsigned int A) {

    unsigned int x, n = 0;

    for (int i = 0; i < 16; i++) {
        x = (1 << i) & A;
        n |= (x << (31 - (i << 1)));
    }

    for (int i = 0; i < 16; i++)
    {
        x = (1 << i + 16) & A;
        n |= (x >> ((i << 1) + 1));
    }
    

    return n;
}