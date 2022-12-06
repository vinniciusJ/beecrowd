#include <stdio.h>

struct Banknotes {
    int one;
    int two;
    int five;
    int ten;
    int twenty;
    int fifty;
    int oneHundred;
};

struct Coin{
    int fifty;
    int twentyFive;
    int ten;
    int five;
    int one;
};

struct Banknotes decomposeValueInBankNotes(int value){
    int change = 0;
    struct Banknotes banknotes;

    banknotes.oneHundred = value / 100;
    change = value % 100;

    banknotes.fifty = change / 50;
    change %= 50;

    banknotes.twenty = change / 20;
    change %= 20;

    banknotes.ten = change / 10;
    change %= 10;

    banknotes.five = change / 5;
    change %= 5;

    banknotes.two = change / 2;
    change %= 2;

    banknotes.one = change / 1;

    return  banknotes;
}

struct Coin decomposeValueInCoins(int value){
    int change = 0.0;
    struct Coin coin;

    coin.fifty = value / 50;
    change = value % 50;

    coin.twentyFive = change / 25;
    change %= 25;

    coin.ten = change / 10;
    change %= 10;

    coin.five = change / 5;
    change %= 5;

    coin.one = change;

    return coin;
}

int main(){
    double value = 0;
    int integerPart = 0, decimalPart = 0;
    struct Banknotes banknotes;
    struct Coin coins;

    scanf("%lf", &value);

    integerPart = (int) value;
    decimalPart = (value - integerPart) * 100;

    banknotes = decomposeValueInBankNotes(value);
    coins = decomposeValueInCoins(decimalPart);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", banknotes.oneHundred);
    printf("%d nota(s) de R$ 50.00\n", banknotes.fifty);
    printf("%d nota(s) de R$ 20.00\n", banknotes.twenty);
    printf("%d nota(s) de R$ 10.00\n", banknotes.ten);
    printf("%d nota(s) de R$ 5.00\n", banknotes.five);
    printf("%d nota(s) de R$ 2.00\n", banknotes.two);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", banknotes.one);
    printf("%d moeda(s) de R$ 0.50\n", coins.fifty);
    printf("%d moeda(s) de R$ 0.25\n", coins.twentyFive);
    printf("%d moeda(s) de R$ 0.10\n", coins.ten);
    printf("%d moeda(s) de R$ 0.05\n", coins.five);
    printf("%d moeda(s) de R$ 0.01\n", coins.one);

    return  0;
}