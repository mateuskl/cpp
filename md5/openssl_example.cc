#include <string>
#include <iostream>

#include <stdio.h>

#include <openssl/md5.h>


// Print the MD5 sum as hex-digits.
void print_md5_sum(unsigned char* md)
{
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        printf("%02x",md[i]);
    }
}

int main()
{
    std::string data = "This is the Data";

    unsigned char* hash;

    hash = MD5((const unsigned char*) data.c_str(), data.size(), 0);

    std::cout << "data: " << data << std::endl;


    std::cout << "hash: ";
    print_md5_sum(hash);
    std::cout << std::endl;

    return 0;
}

