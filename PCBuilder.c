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

    //Game
    printf("PC Builder\n");
    printf("Vytvoreno: ZuhaGames\n\n");
    printf("Jako prvni si vyberte znacku zakladni desky.\n");
    printf("1. ASUS Zakladni deska\n");
    printf("2. MSI Zakladni deska\n");
    printf("3. Gigabyte Zakladni deska\n\n");
    printf("Zadejte svoji volbu:\n");
    scanf("%d", &deska);

    if(deska == 1){
        printf("Vybral sis zakladni desku Asus\n\n");
    }
    else if (deska == 1){
        printf("Spatny vyraz.\n");
    }

    if(deska == 2){
        printf("Vybral sis zakladni desku MSI\n\n");
    }
    else if (deska == 2){
        printf("Spatny vyraz.\n");
    }

    if(deska == 3){
        printf("Vybral sis zakladni desku Gigabyte\n\n");
    }
    else if (deska == 3){
        printf("Spatny vyraz.\n");
    }

    printf("Vyber si znacku Procesoru\n");
    printf("1. Intel CPU\n");
    printf("2. AMD CPU\n");
    printf("Zadejte svoji volbu:\n");
    scanf("%d", &cpu);
    
    if(cpu == 1){
        printf("Vybral sis procesor Intel. byl tam i chladic\n\n");
    }
    else if (cpu == 1){
        printf("Spatny vyraz.\n");
    }

    if(cpu == 2){
        printf("Vybral sis procesor AMD. byl tam i chladic\n\n");
    }
    else if (cpu == 2){
        printf("Spatny vyraz.\n");
    }

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
    else if (ram == 1){
        printf("Spatny vyraz.\n");
    }

    if(ram == 2){
        printf ("Vybral sis znacku RAM Corsair\n\n");
    }
    else if (ram == 2){
        printf("Spatny vyraz.\n");
    }

    if (ram == 3){
        printf("Vybral sis znacku RAM G.SKILL\n\n");
    }
    else if (ram == 3){
        printf("Spatny vyraz.\n");
    }

    if(ram == 4){
        printf("Vybral sis znacku RAM Crucial\n\n");
    }
    else if (ram == 4){
        printf("Spatny vyraz.\n");
    }

    if(ram == 5){
        printf("Vybral sis znacku RAM ADATA\n\n");
    }
    else if (ram == 5){
        printf("Spatny vyraz.\n");
    }

    printf("Vyber si znacku GPU\n");
    printf("1. NVIDIA\n");
    printf("2. AMD\n");
    printf("3. Intel\n");
    printf("Zadejte svoji volbu\n");
    scanf("%d", &gpu);

    if(gpu == 1){
        printf("Vybral sis znacku GPU NVIDIA\n\n");
    }
    else if (gpu == 1){
        printf("Spatny vyraz.\n");
    }

    if(gpu == 2){
        printf("Vybral sis znacku GPU AMD\n\n");
    }
    else if (gpu == 2){
        printf("Spatny vyraz.\n");
    }

    if(gpu == 3){
        printf("Vybral sis znacku GPU Intel\n\n");
    }
    else if (gpu == 3){
        printf("Spatny vyraz.\n");
    }

    printf("Vyber si znacku zdroje\n");
    printf("1. Seasonic PSU\n");
    printf("2. Corsair PSU\n");
    printf("3. be quiet! PSU\n");
    printf("Zadejte svoji volbu\n");
    scanf("%d", &psu);

    if(psu == 1){
        printf("Vybral sis znacku PSU Seasonic\n\n");
    }
    else if (psu == 1){
        printf("Spatny vyraz.\n");
    }

    if(psu == 2){
        printf("Vybral sis znacku PSU Corsair\n\n");
    }
    else if (psu == 2){
        printf("Spatny vyraz.\n");
    }

    if(psu == 3){
        printf("Vybral sis znacku PSU be quiet!\n\n");
    }
    else if (psu == 3){
        printf("Spatny vyraz.\n");
    }

    printf("Jako zakladni desku sis vybral %d\n", deska);
    printf("Jako CPU sis vybral %d\n", cpu);
    printf("Jako RAM sis vybral %d\n", ram);
    printf("Jako GPU sis vybral %d\n", gpu);
    printf("Jako PSU sis vybral %D\n\n", psu);
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
    printf("Dekuju za hrani\n");
    printf("Tuhle hru jsem udelal 1 den po te co jsem se zacal uxit C\n");
    printf("Neni to nejlepsi ale snad jste si to uzili!\n");

    return(0);
}