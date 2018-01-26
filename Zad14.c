#include <string.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct osobaLepsza{
int wiek;
int pensja;
}osobaLepsza;


int main(int argc, char const *argv[])
 {
        FILE *data;
        char buf[200];
        const char delimiter[2] = " ";
        char *phrase;

        int ilosc;
        osobaLepsza *ppl;

        int minWiek = 0;
        int maxZarobki = 0;
        int wiekMaxZarobki = 0;
        char najlepiejZarabiajcaOsoba[100];
        char najmloszaOsoba[100];

    data = fopen("tekstoweDane.txt", "r");


    if (!data)

        return 1;

        fgets(buf, sizeof(buf), data);

        ilosc = atoi(buf);
        ppl = malloc(sizeof(int)*ilosc);

        int i;
        for (i = 0; i < ilosc; i++)
        {
                fgets(buf, sizeof(buf), data);
                if (i >= 0) {
                        osobaLepsza osoba;
                char* imie;

                        char* nazwisko;

                        phrase = strtok(buf, delimiter);
                        imie = phrase;


                        phrase = strtok(NULL, delimiter);
                        nazwisko = phrase;


                        phrase = strtok(NULL, delimiter);
                        osoba.wiek = atoi(phrase);


                        if (osoba.wiek < minWiek || minWiek <= 0)
                        {
                                minWiek = osoba.wiek;


                                strcpy(najmloszaOsoba, imie);
                                strcat(najmloszaOsoba, " ");
                                strcat(najmloszaOsoba, nazwisko);
                        }



                        phrase = strtok(NULL, delimiter);
                        osoba.pensja = atoi(phrase);


                        if (osoba.pensja > maxZarobki || maxZarobki <= 0)
                        {
                                maxZarobki = osoba.pensja;
                                wiekMaxZarobki = osoba.wiek;


                                strcpy(najlepiejZarabiajcaOsoba, imie);
                                strcat(najlepiejZarabiajcaOsoba, " ");
                                strcat(najlepiejZarabiajcaOsoba, nazwisko);
                        }
                }
        }



        printf("Najlepiej zarabiajaca osoba to: \n");
        printf("%s", najlepiejZarabiajcaOsoba);
        printf(", lat %d\n", wiekMaxZarobki);

        printf("Najmlodsza osoba jest: \n");
        printf("%s", najmloszaOsoba);
        printf("\n");

        fclose(data);

        return EXIT_SUCCESS;
}


