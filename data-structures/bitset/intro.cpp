void introToBitset();


void introToBitset() {
    bitset <4> bs1(9), bs2(3);

    cout << (bs1 & bs2);
    cout << (bs1 | bs2);
    cout << (bs1 ^ bs2);

    int size = 1;
    dump(bs1);
}