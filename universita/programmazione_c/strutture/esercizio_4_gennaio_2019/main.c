#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int giorno;
    int mese;
    int anno;
} Data;

typedef struct {
    char codice_operatore[11];
    char codice_impianto[11];
    Data data_lettura;
    float kwh;
} Lettura;

float costo_corrente(Lettura *prima, Lettura *dopo, float costo_kwh)
{
    return (dopo->kwh - prima->kwh) * costo_kwh;
}

void stampa_costi_impianti(Lettura prima[],
                           Lettura dopo[],
                           int n_letture,
                           float costo_kwh)
{
    int i, j;
    for (i = 0; i < n_letture; i++)
        for (j = 0; j < n_letture; j++)
            if (strncmp(prima[i].codice_impianto,
                        dopo[j].codice_impianto, 10) == 0 )
    {
        printf("Codice impianto: %s\n",dopo[j].codice_impianto);
        printf("Codice operatore: %s\n", dopo[j].codice_operatore);
        printf("Data della seconda lettura: %d/%d/%d\n",
               dopo[j].data_lettura.giorno,
               dopo[j].data_lettura.mese,
               dopo[j].data_lettura.anno);
        printf("Costo da pagare: %f\n",
               costo_corrente(&prima[i], &dopo[j], costo_kwh));
    }

}

int main()
{

    return 0;
}
