#include <stdio.h>

int main() {

    int dia = 0, hora = 0, minuto = 0, segundo = 0;
    int seg_tot_com, seg_tot_fin, seg_tot_dur;

    scanf("Dia %d\n%d : %d : %d\n", &dia, &hora, &minuto, &segundo);

    seg_tot_com = (dia*86400) + (hora*3600) + (minuto*60) + segundo;
    
    scanf("Dia %d\n%d : %d : %d", &dia, &hora, &minuto, &segundo);
    
    seg_tot_fin = (dia*86400) + (hora*3600) + (minuto*60) + segundo;

    seg_tot_dur = seg_tot_fin - seg_tot_com;

    printf("%d dia(s)\n", seg_tot_dur/86400);
    printf("%d hora(s)\n", (seg_tot_dur%86400)/3600);
    printf("%d minuto(s)\n", ((seg_tot_dur%86400)%3600)/60);
    printf("%d segundo(s)\n", ((seg_tot_dur%86400)%3600)%60);


    return 0;
}