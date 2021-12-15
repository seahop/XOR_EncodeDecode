void xor_decrypt(unsigned char* bytes, int data_len, char* key, int key_len)
{
    for (int i = 0; i < data_len; i++) {
        bytes[i] ^= key[i % key_len];
    }
}
