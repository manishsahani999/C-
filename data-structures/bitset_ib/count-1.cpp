int numSetBits(unsigned int A) {
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        unsigned test = 1;
        unsigned n = A >> i;
        if((test & n) == 1) count++;
    }

    return count;
    
}