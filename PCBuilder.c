#include <stdio.h>
int main()
{

    // Variables

    //Zakladni deska
    int deska = 0;
    //Procesor
    int cpu = 0;
    //RAM
    int ram = 0; 
    //GPU
    int gpu = 0;
    //Zdroj
    int psu = 0;
    //Disk
    int ssd = 0;

    //Game
    printf("PC Builder 1.1\n");
    printf("Vytvoreno: ZuhaGames\n\n");

    while(deska < 1 || deska > 4){
        printf("Jako prvni si vyberte znacku zakladni desky.\n");
        printf("1. ASUS Zakladni deska\n");
        printf("2. MSI Zakladni deska\n");
        printf("3. Gigabyte Zakladni deska\n");
        printf("4. ASRock Zakladni deska\n\n");
        printf("Zadejte svoji volbu:\n");
        scanf("%d", &deska);

        if(deska == 1){
            printf("Vybral sis zakladni desku Asus\n\n");
        }
        else if(deska == 2){
            printf("Vybral sis zakladni desku MSI\n\n");
        }
        else if(deska == 3){
            printf("Vybral sis zakladni desku Gigabyte\n\n");
        }
        else if(deska == 4){
            printf("Vybral sis zakladni desku ASRock\n\n");
        }
        else{
            printf("Spatny vyraz.\n\n");
        }
    }

    while(cpu < 1 || cpu > 2){
        printf("Vyber si znacku Procesoru\n");
        printf("1. Intel CPU\n");
        printf("2. AMD CPU\n");
        printf("Zadejte svoji volbu:\n");
        scanf("%d", &cpu);
        
        if(cpu == 1){
            printf("Vybral sis procesor Intel. byl tam i chladic\n\n");
        }
        else if(cpu == 2){
            printf("Vybral sis procesor AMD. byl tam i chladic\n\n");
        }
        else{
            printf("Spatny vyraz.\n\n");
        }
    }

    while(ram < 1 || ram > 5){
        printf("Vyber si znacku RAMek\n");
        printf("1. Kingston RAM\n");
        printf("2. Corsair RAM\n");
        printf("3. G.SKILL RAM\n");
        printf("4. Crucial RAM\n");
        printf("5. ADATA RAM\n");
        printf("Zadejte svoji volbu:\n");
        scanf("%d", &ram);

        if(ram == 1){
            printf("Vybral sis znacku RAM Kingston\n\n");
        }
        else if(ram == 2){
            printf("Vybral sis znacku RAM Corsair\n\n");
        }
        else if(ram == 3){
            printf("Vybral sis znacku RAM G.SKILL\n\n");
        }
        else if(ram == 4){
            printf("Vybral sis znacku RAM Crucial\n\n");
        }
        else if(ram == 5){
            printf("Vybral sis znacku RAM ADATA\n\n");
        }
        else{
            printf("Spatny vyraz.\n\n");
        }
    }

    while(gpu < 1 || gpu > 3){
        printf("Vyber si znacku GPU\n");
        printf("1. NVIDIA\n");
        printf("2. AMD\n");
        printf("3. Intel\n");
        printf("Zadejte svoji volbu\n");
        scanf("%d", &gpu);

        if(gpu == 1){
            printf("Vybral sis znacku GPU NVIDIA\n\n");
        }
        else if(gpu == 2){
            printf("Vybral sis znacku GPU AMD\n\n");
        }
        else if(gpu == 3){
            printf("Vybral sis znacku GPU Intel\n\n");
        }
        else{
            printf("Spatny vyraz.\n\n");
        }
    }

    while(psu < 1 || psu > 3){
        printf("Vyber si znacku zdroje\n");
        printf("1. Seasonic PSU\n");
        printf("2. Corsair PSU\n");
        printf("3. be quiet! PSU\n");
        printf("Zadejte svoji volbu\n");
        scanf("%d", &psu);

        if(psu == 1){
            printf("Vybral sis znacku PSU Seasonic\n\n");
        }
        else if(psu == 2){
            printf("Vybral sis znacku PSU Corsair\n\n");
        }
        else if(psu == 3){
            printf("Vybral sis znacku PSU be quiet!\n\n");
        }
        else{
            printf("Spatny vyraz.\n\n");
        }
    }

    while(ssd < 1 || ssd > 3){
        printf("Vyber si znacku disku SSD\n");
        printf("1. Samsung SSD\n");
        printf("2. Kingston SSD\n");
        printf("3. ADATA SSD\n");
        printf("Zadejte svoji volbu\n");
        scanf("%d", &ssd);

        if(ssd == 1){
            printf("Vybral sis znacku SSD Samsung\n\n");
        }
        else if(ssd == 2){
            printf("Vybral sis znacku SSD Kingston\n\n");
        }
        else if(ssd == 3){
            printf("Vybral sis znacku SSD ADATA\n\n");
        }
        else{
            printf("Spatny vyraz.\n\n");
        }
    }

    printf("Listek Soucastek:\n");
    printf("Desky\n");
    printf("1. ASUS Zakladni deska\n");
    printf("2. MSI Zakladni deska\n");
    printf("3. Gigabyte Zakladni deska\n\n");
    printf("Procesory\n");
    printf("1. Intel CPU\n");
    printf("2. AMD CPU\n\n");
    printf("Ramky\n");
    printf("1. Kingston RAM\n");
    printf("2. Corsair RAM\n");
    printf("3. G.SKILL RAM\n");
    printf("4. Crucial RAM\n");
    printf("5. ADATA RAM\n\n");
    printf("Graficke karty\n");
    printf("1. NVIDIA\n");
    printf("2. AMD\n");
    printf("3. Intel\n\n");
    printf("Zdroje");
    printf("1. Seasonic PSU\n");
    printf("2. Corsair PSU\n");
    printf("3. be quiet! PSU\n\n\n");
    printf("Jako zakladni desku sis vybral %d\n", deska);
    printf("Jako CPU sis vybral %d\n", cpu);
    printf("Jako RAM sis vybral %d\n", ram);
    printf("Jako GPU sis vybral %d\n", gpu);
    printf("Jako PSU sis vybral %d\n", psu);
    printf("Jako SSD sis vybral %d\n\n", ssd);
    printf("Dekuju za hrani\n");
    printf("Tuhle hru jsem udelal 1 den po te co jsem se zacal uxit C\n");
    printf("Neni to nejlepsi ale snad jste si to uzili!\n");

    return(0);
}
