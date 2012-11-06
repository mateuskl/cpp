int main() 
{
    int dec[10];

    for(int i = 0; i < 10; i++) {
	dec[i] = i;
    }


    for(int i = 0; i < 10; i++) {
	assert(dec[i] == i);
    }

    return 0;
}
