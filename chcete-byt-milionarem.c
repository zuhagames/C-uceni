#include <stdio.h>
#include <stdlib.h>
int main()
{
    //variables hrace
    int penize = 0;
    char jmeno [30] = "";

    //otazky
    int otazkajed = 0;
    int otazkadva = 0;
    int otazkatri = 0;
    int otazkacty = 0;
    int otazkapet = 0;
    int otazkasest = 0;
    int otazkasedm = 0;
    int otazkaosm = 0;
    int otazkadev = 0;
    int otazkades = 0;


    //Zacatek
    printf("Chcete byt milionarem\n");
    printf("Vytvoreno: ZuhaGames\n\n");

    printf("Zadejte sve jmeno: ");
    scanf("%s", jmeno);

    //Prvni otazka
    while(otazkajed < 1 || otazkajed > 4 ){
        printf("Hrac: %s | %d korun.\n", jmeno, penize);
        printf("-----------------------------\n");
        printf("Prvni otazka za 5000 korun.\n\n");
        printf("Kdo namaloval Mona Lisu?\n");
        printf("1. Michelango Buonarroti\n");
        printf("2. Leonardo DaVinci\n");
        printf("3. Napoleon Bonaparte\n");
        printf("4. Karel Gott\n\n");
        printf("Zadejte svoji volbu: ");
        scanf("%d", &otazkajed);

        if(otazkajed == 1){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkajed == 2){
            printf("Otazku jste zadal spravne\n");
            printf("Ziskavate 5000 Korun\n\n");
            penize += 5000;
        }
        else if(otazkajed == 3){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkajed == 4){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else{
            printf("Spatny vyraz\n");
        }
    }
    //Druha otazka
    while(otazkadva < 1 || otazkadva > 4){
        printf("Hrac: %s | %d korun.\n", jmeno, penize);
        printf("-----------------------------\n");
        printf("Druha otazka za 7500 korun.\n\n");
        printf("Kdo zalozil firmu Steam?\n");
        printf("1. Mark Zuckerberg\n");
        printf("2. Elon Musk\n");
        printf("3. Gabe Newell\n");
        printf("4. Tim Sweeney\n");
        printf("Zadejte svoji volbu: ");
        scanf("%d", &otazkadva);

        if(otazkadva == 1){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkadva == 2){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkadva == 3){
            printf("Otazku jste zadal spravne\n");
            printf("Ziskavate 7500 Korun\n\n");
            penize += 7500;
        }
        else if(otazkadva == 4){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else{
            printf("Spatny vyraz\n");
        }
    }
    //Treti otazka
    while(otazkatri < 1 || otazkatri > 4){
        printf("Hrac: %s | %d korun.\n", jmeno, penize);
        printf("-----------------------------\n");
        printf("Treti otazka za 10,000 korun.\n\n");
        printf("Kdo byl druhy president Ceskoslovenske republiky?\n");
        printf("1. T.G. Masaryk\n");
        printf("2. Vaclav Havel\n");
        printf("3. Edward Benes\n");
        printf("4. Milos Zeman\n");
        printf("Zadejte svoji volbu: ");
        scanf("%d", &otazkatri);

        if(otazkatri == 1){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkatri == 2){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkatri == 3){
            printf("Otazku jste zadal spravne\n");
            printf("Ziskavate 10,000 Korun\n\n");
            penize += 10000;
        }
        else if(otazkatri == 4){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else{
            printf("Spatny vyraz\n");
        }
    }
    //Ctvrta otazka
    while(otazkacty < 1 || otazkacty > 4){
        printf("Hrac: %s | %d korun.\n", jmeno, penize);
        printf("-----------------------------\n");
        printf("Ctvrta otazka za 25,000 korun.\n\n");
        printf("Ktery chemicky prvek ma znacku Au?\n");
        printf("1. Stribro\n");
        printf("2. Zlato\n");
        printf("3. Hlink\n");
        printf("4. Zelezo\n");
        printf("Zadejte svoji volbu: ");
        scanf("%d", &otazkacty);

        if(otazkacty == 1){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkacty == 2){
            printf("Otazku jste zadal spravne\n");
            printf("Ziskavate 25,000 Korun\n\n");
            penize += 25000;
        }
        else if(otazkacty == 3){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkacty == 4){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else{
            printf("Spatny vyraz\n");
        }
    }
    //Pata otazka
    while(otazkapet < 1 || otazkapet > 4){
        printf("Hrac: %s | %d korun.\n", jmeno, penize);
        printf("-----------------------------\n");
        printf("Pata otazka za 50,000 korun.\n\n");
        printf("Ve kterem roce se potopil Titanic?\n");
        printf("1. 1905\n");
        printf("2. 1912\n");
        printf("3. 1918\n");
        printf("4. 1923\n");
        printf("Zadejte svoji volbu: ");
        scanf("%d", &otazkapet);

        if(otazkapet == 1){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkapet == 2){
            printf("Otazku jste zadal spravne\n");
            printf("Ziskavate 50,000 Korun\n\n");
            penize += 50000;
        }
        else if(otazkapet == 3){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkapet == 4){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else{
            printf("Spatny vyraz\n");
        }
    }
    //Sesta otazka
    while(otazkasest < 1 || otazkasest > 4){
        printf("Hrac: %s | %d korun.\n", jmeno, penize);
        printf("-----------------------------\n");
        printf("Sesta otazka za 75,000 korun.\n\n");
        printf("Jaka je nejdelsi reka na svete?\n");
        printf("1. Nil\n");
        printf("2. Amazonka\n");
        printf("3. Odra\n");
        printf("4. Mississippi\n");
        printf("Zadejte svoji volbu: ");
        scanf("%d", &otazkasest);

        if(otazkasest == 1){
            printf("Otazku jste zadal spravne\n");
            printf("Ziskavate 75,000 Korun\n\n");
            penize += 75000;
        }
        else if(otazkasest == 2){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkasest == 3){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkasest == 4){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else{
            printf("Spatny vyraz\n");
        }
    }
    //Sedma otazka
    while(otazkasedm < 1 || otazkasedm > 4){
        printf("Hrac: %s | %d korun.\n", jmeno, penize);
        printf("-----------------------------\n");
        printf("Sedma otazka za 100,000 korun.\n\n");
        printf("Kolik ma kosti telo dospeleho cloveka?\n");
        printf("1. 186\n");
        printf("2. 206\n");
        printf("3. 226\n");
        printf("4. 256\n");
        printf("Zadejte svoji volbu: ");
        scanf("%d", &otazkasedm);

        if(otazkasedm == 1){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkasedm == 2){
            printf("Otazku jste zadal spravne\n");
            printf("Ziskavate 100,000 Korun\n\n");
            penize += 100000;
        }
        else if(otazkasedm == 3){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkasedm == 4){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else{
            printf("Spatny vyraz\n");
        }
    }
    //Osm otazka
    while(otazkaosm < 1 || otazkaosm > 4){
        printf("Hrac: %s | %d korun.\n", jmeno, penize);
        printf("-----------------------------\n");
        printf("Osma otazka za 250,000 korun.\n\n");
        printf("Ktery z techto programu je napsany v jazyce C?\n");
        printf("1. Jadro operacniho systemu Linux\n");
        printf("2. Webovy prohlizec v prohlizeci\n");
        printf("3. Pouze mobilny hry\n");
        printf("4. Zadny z nich\n");
        printf("Zadejte svoji volbu: ");
        scanf("%d", &otazkaosm);

        if(otazkaosm == 1){
            printf("Otazku jste zadal spravne\n");
            printf("Ziskavate 250,000 Korun\n\n");
            penize += 250000;
        }
        else if(otazkaosm == 2){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkaosm == 3){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkaosm == 4){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else{
            printf("Spatny vyraz\n");
        }
    }
    //Devet otazka
    while(otazkadev < 1 || otazkadev > 4){
        printf("Hrac: %s | %d korun.\n", jmeno, penize);
        printf("-----------------------------\n");
        printf("Devata otazka za 500,000 korun.\n\n");
        printf("Ktery chemicky prvek ma nejvyssi bod tani ze vsech cistych kovu?\n");
        printf("1. Wolfram\n");
        printf("2. Platina\n");
        printf("3. Titan\n");
        printf("4. Osmium\n");
        printf("Zadejte svoji volbu: ");
        scanf("%d", &otazkadev);

        if(otazkadev == 1){
            printf("Otazku jste zadal spravne\n");
            printf("Ziskavate 500,000 Korun\n\n");
            penize += 500000;
        }
        else if(otazkadev == 2){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkadev == 3){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkadev == 4){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else{
            printf("Spatny vyraz\n");
        }
    }
    //Deset otazka
    while(otazkades < 1 || otazkades > 4){
        printf("Hrac: %s | %d korun.\n", jmeno, penize);
        printf("-----------------------------\n");
        printf("Desata otazka za 1,000,000 korun.\n\n");
        printf("Jak se jmenuje nejhlubsi misto v Marianskem prikopu?\n");
        printf("1. Prohluben Challenger\n");
        printf("2. Prohluben Sirena\n");
        printf("3. Prikop Tonga\n");
        printf("4. Priepast Kola\n");
        printf("Zadejte svoji volbu: ");
        scanf("%d", &otazkades);

        if(otazkades == 1){
            printf("Otazku jste zadal spravne\n");
            printf("Ziskavate 1,000,000 Korun\n\n");
            penize += 1000000;
        }
        else if(otazkades == 2){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkades == 3){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else if(otazkades == 4){
            printf("Otazku jste zadal chybne, neziskavate nic\n");
        }
        else{
            printf("Spatny vyraz\n");
        }
    }

    system("cls");

    printf("=====================================\n");
    printf(" Odpovedeli jste vsech deset otazek.\n");
    printf(" Tady jsou vase vysledky:\n");
    printf("=====================================\n");
    printf("Hrac: %s\n", jmeno);
    printf("Celkovy vydelek: %d\n\n", penize);
    printf("Dekuju za hrani, teprve se ucim C dva dny");

    return(0);
}