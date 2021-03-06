int main(void)
{
    //Please note that these declarations are a bit messy. The simple reason is 
    //Reason is I was experimenting with different things.
    //I have also deleated the code bellow the while loop, since it is not part of my question
    
    //To reiterate my question, could anyone tell me why C is not properly storing each value into the array?
    
    //You can experiment with this value for an input : 378282246310005
    
    
    
    //The size of 6 is arbitrary. I have not figured out how to make it dynamic yet, so i had to do with a static input
    //If you have any suggestions on how to get the lenght of a long long variable, please share!
    long long card, cc1;
    int temp[6];
    int counter;
    int c = 0;
    
    do
    {
        card = get_long_long("Provide credit card number: ");
    }
    while(card < 0);

    //Here I am storing each integer value into the array
    for (counter = 0, cc1 = card / 10 ; cc1 >= 1; cc1 /= 100 )
    {
        temp[counter] += (cc1 % 10) * 2;
        counter++;
    }
    
    //Here I am printing out the result. As you will see, it is quite weird
    while (c < counter)
    {
        printf("%i\n", temp[c]);
        c++;
    }

}

//The solution to the problem that was suggested to me was to increase the size of the 'temp' array and to initialize
//it before I start adding elements to it. Code that properly stores is bellow

int main(void)
{
    //
    long long card, cc1;
    int temp[10] = {0};
    int counter;
    int c = 0;

    do
    {
        card = get_long_long("Provide credit card number: ");
    }
    while(card < 0);


    for (counter = 0, cc1 = card / 10 ; cc1 >= 1; cc1 /= 100 )
    {
        temp[counter] += (cc1 % 10) * 2;
        counter++;
    }

    while (c < counter)
    {
        printf("%i\n", temp[c]);
        c++;
    }

}
