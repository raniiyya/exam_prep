unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8; //because it's octet
    int res = 0; //to store the reversed octet

    while (i > 0) {
        res = res * 2 + (octet % 2); //just remember this (odd num % 2 = 1, even num % 2 = 0)
        octet /= 2; //to kinda cross out the last digit of octet and shorten it
        i--; //to go to the next digit in octet <-
    }
    return res;
}