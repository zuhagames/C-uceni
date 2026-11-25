#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(){
    printf("############################\n");
    printf("       PC Builder 2\n");
    printf("############################\n");
    printf("      1. Hrat hru\n");
    printf("   2. Nastaveni a info\n\n");
    printf("   Vytvoreno: ZuhaGames\n\n");
}

void nastaveni(){
    printf("############################\n");
    printf("         Nastaveni\n");
    printf("############################\n");
    printf(    "1. Nekonecno penez\n\n");
    printf("            Info\n");
    printf("Ve hre je cil postavit pocitac\n");
    printf("do budgetu a pritom mit nejvic\n");
    printf("skore.\n\n");
    printf("Vase volba: ");
}

void penizemenu(int money){
    printf("Mas %d penez.\n", money);
    printf("Musis postavit PC do budgetu\n\n");
}


int main()
{
    //menu
    int menuchoice = 0;
    int menunastaveni = 0;

    //staty
    int money = 35000;
    int skore = 0;

    //komponenty jmena
    char jmenomb[100] = "";
    char jmenocpu[100] = "";
    char jmenocpuc[100] = "";
    char jmenoram[100] = "";
    char jmenogpu[100] = "";
    char jmenodisk[100] = "";
    char jmenopsu[100] = "";

    //komponenty
    int mb = 0;
    int cpu = 0;
    int cpuc = 0;
    int ram = 0;
    int gpu = 0;
    int disk = 0;
    int psu = 0;


    while (menunastaveni != 1) { 
        while (menunastaveni == 0) {
            system("cls");
            menu();
            printf("Vase volba: ");
            scanf("%d", &menuchoice);

            switch (menuchoice){
                case 1:
                    system("cls");
                    penizemenu(money);
                    printf("Vyber si zakladni desku\n\n");
                    printf("1. MSI Zakladni deska - 2000 korun\n");
                    printf("2. ASUS Zakladni deska - 2500 korun\n");
                    printf("3. ASRock Zakladni Deska - 1500 korun\n\n");
                    printf("Vase volba: ");
                    scanf("%d", &mb);

                    switch (mb){
                        case 1:
                            printf("Vybral sis zakladni desku MSI\n");
                            printf("Odecteno 2000 korun\n\n");
                            money -= 2000;
                            skore += 2;
                            strcpy(jmenomb, "MSI Zakladni deska - 2000 korun\n");
                            break;
                        case 2:
                            printf("Vybral sis zakladni desku ASUS\n");
                            printf("Odecteno 2500 korun\n\n");
                            money -= 2500;
                            skore += 3;
                            strcpy(jmenomb, "ASUS Zakladni deska - 2500 korun\n");
                            break;
                        case 3:
                            printf("Vybral sis zakladni desku ASRock\n");
                            printf("Odecteno 1500 korun\n\n");
                            money -= 1500;
                            skore += 1;
                            strcpy(jmenomb, "ASRock Zakladni deska - 1500 korun\n");
                            break;
                    }

                    system("cls");
                    penizemenu(money);
                    printf("Vyber si CPU \n\n");
                    printf("1. Intel CPU - 3000 korun\n");
                    printf("2. AMD CPU - 3500 korun\n\n");
                    printf("Vase volba: ");
                    scanf("%d", &cpu);

                    switch (cpu){
                        case 1:
                            printf("Vybral sis CPU Intel\n");
                            printf("Odecteno 3000 korun\n\n");
                            money -= 3000;
                            skore += 2;
                            strcpy(jmenocpu, "Intel CPU - 3000 korun\n");
                            break;
                        case 2:
                            printf("Vybral sis CPU AMD\n");
                            printf("Odecteno 3500 korun\n\n");
                            money -= 3500;
                            skore += 3;
                            strcpy(jmenocpu, "AMD CPU - 3500 korun\n");
                            break;
                    }

                    system("cls");
                    penizemenu(money);
                    printf("Vyber si chladic CPU \n\n");
                    printf("1. Endorfy CPU chladic - 450 korun\n");
                    printf("2. Arctic CPU chladic - 700 korun\n");
                    printf("3. DeepCool CPU chladic - 600 korun\n");
                    printf("4. CPU Chladic co prisel s procesorem - 0 korun\n\n");
                    printf("Vase volba: ");
                    scanf("%d", &cpuc);

                    switch (cpu){
                        case 1:
                            printf("Vybral sis CPU chladic Endorfy\n");
                            printf("Odecteno 450 korun");
                            money -= 450;
                            skore += 1;
                            strcpy(jmenocpuc, "Endorfy CPU chladic - 450 korun\n");
                            break;
                        case 2:
                            printf("Vybral sis CPU chladic Arctic\n");
                            printf("Odecteno 700 korun\n");
                            money -= 700;
                            skore += 3;
                            strcpy(jmenocpuc, "Arctic CPU chladic - 700 korun\n");
                            break;
                        case 3:
                            printf("Vybral sis CPU chladic DeepCool\n");
                            printf("Odecteno 600 korun\n");
                            money -= 600;
                            skore += 2;
                            strcpy(jmenocpuc, "DeepCool CPU chladic - 600 korun\n");
                            break;
                        case 4:
                            printf("Vybral sis CPU chladic co prisel s procesorem\n");
                            printf("Odecteno 0 korun\n");
                            strcpy(jmenocpuc, "CPU chladic co prisel s CPU - 600 korun\n");
                            break;
                    }

                    system("cls");
                    penizemenu(money);
                    printf("Vyber si RAM \n\n");
                    printf("1. Kingston DDR4 RAM 2x16gb - 6000 korun\n");
                    printf("2. Corsair DDR4 RAM 2x16gb - 7000 korun\n");
                    printf("3. ADATA DDR5 RAM 2x16gb - 12,000 korun\n\n");
                    printf("Vase volba: ");
                    scanf("%d", &ram);

                    switch (ram){
                        case 1:
                            printf("Vybral sis Kingston RAM\n");
                            printf("Odecteno 6000 korun\n");
                            money -= 6000;
                            skore += 1;
                            strcpy(jmenoram, "Kingston DDR4 RAM 2x16gb - 6000 korun\n");
                            break;
                        case 2:
                            printf("Vybral sis Corsair RAM\n");
                            printf("Odecteno 7000 korun\n");
                            money -= 7000;
                            skore += 2;
                            strcpy(jmenoram, "Corsair DDR4 RAM 2x16gb - 7000 korun\n");
                            break;
                        case 3:
                            printf("Vybral sis ADATA RAM\n");
                            printf("Odecteno 12,000 korun\n");
                            money -= 12000;
                            skore += 3;
                            strcpy(jmenoram, "ADATA DDR5 RAM 2x16gb - 12000 korun\n");
                            break;
                    }

                    system("cls");
                    penizemenu(money);
                    printf("Vyber si GPU \n\n");
                    printf("1. AMD Radeon GPU - 10,000 korun\n");
                    printf("2. NVIDIA GeForce RTX GPU - 13,500 korun\n");
                    printf("3. NVIDIA GeForce GTX GPU - 6500 korun\n\n");
                    printf("Vase volba: ");
                    scanf("%d", &gpu);

                    switch (gpu){
                        case 1:
                            printf("Vybral sis AMD Radeon RAM\n");
                            printf("Odecteno 10000 korun\n");
                            money -= 10000;
                            skore += 2;
                            strcpy(jmenogpu, "AMD Radeon GPU - 10,000 korun\n");
                            break;
                        case 2:
                            printf("Vybral sis NVIDIA RTX GPU\n");
                            printf("Odecteno 13500 korun\n");
                            money -= 13500;
                            skore += 3;
                            strcpy(jmenogpu, "NVIDIA GeForce RTX GPU - 13,500 korun\n");
                            break;
                        case 3:
                            printf("Vybral sis NVIDIA GTX GPU\n");
                            printf("Odecteno 6500 korun\n");
                            money -= 6500;
                            skore += 1;
                            strcpy(jmenogpu, "NVIDIA GeForce GTX GPU - 6500 korun\n");
                            break;
                    }

                    system("cls");
                    penizemenu(money);
                    printf("Vyber si disk\n\n");
                    printf("1. Verbatim 256GB SSD - 850 korun\n");
                    printf("2. ADATA 512GB SSD - 1600 korun\n");
                    printf("3. Kingston 1TB SSD - 3000 korun\n\n");
                    printf("Vase volba: ");
                    scanf("%d", &disk);

                    switch (disk){
                        case 1:
                            printf("Vybral sis Verbatim 256GB SSD");
                            printf("Odecteno 850 korun\n");
                            money -= 850;
                            skore += 1;
                            strcpy(jmenodisk, "Verbatim 256GB SSD - 850 korun\n");
                            break;
                        case 2:
                            printf("Vybral sis ADATA 512GB SSD");
                            printf("Odecteno 1600 korun\n");
                            money -= 1600;
                            skore += 2;
                            strcpy(jmenodisk, "ADATA 512GB SSD - 1600 korun\n");
                            break;
                        case 3:
                            printf("Vybral sis Kingston 1TB SSD");
                            printf("Odecteno 3000 korun\n");
                            money -= 3000;
                            skore += 3;
                            strcpy(jmenodisk, "ADATA 512GB SSD - 1600 korun\n");
                            break;
                    }

                    system("cls");
                    penizemenu(money);
                    printf("Vyber si zdroj\n\n");
                    printf("1. Endorfy 500W PSU - 1200 korun\n");
                    printf("2. Gigabyte 750W PSU - 2300 korun\n");
                    printf("3. MSI 650W - 1500 korun\n\n");
                    printf("Vase volba: ");
                    scanf("%d", &psu);

                    switch (psu){
                        case 1:
                            printf("Vybral sis Endorfy 500W PSU\n");
                            printf("Odecteno 1200 korun\n");
                            money -= 1200;
                            skore += 1;
                            strcpy(jmenopsu, "Endorfy 500W PSU - 1200 korun\n");
                            break;
                        case 2:
                            printf("Vybral sis Gigabyte 750W PSU\n");
                            printf("Odecteno 2300 korun\n");
                            money -= 2300;
                            skore += 3;
                            strcpy(jmenopsu, "Gigabyte 750W PSU - 2300 korun\n");
                            break;
                        case 3:
                            printf("Vybral sis MSI 650W\n");
                            printf("Odecteno 1500 korun\n");
                            money -= 1500;
                            skore += 2;
                            strcpy(jmenopsu, "Gigabyte 750W PSU - 2300 korun\n");
                            break;
                    }

                    system("cls");
                    printf("######################################\n");
                    printf("  Tady je vase sestava a statistiky\n");
                    printf("######################################\n\n");
                    printf("Zakladni deska: %s", jmenomb);
                    printf("Procesor: %s", jmenocpu);
                    printf("Chladic: %s", jmenocpuc);
                    printf("RAM: %s", jmenoram);
                    printf("Graficka karta: %s", jmenogpu);
                    printf("Disk: %s", jmenodisk);
                    printf("Zdroj %s\n", jmenopsu);

                    printf("Celkovy skore sestavy: %d z 21\n", skore);
                    printf("Zbylo vam %d korun\n", money);
                    if(money <= 0){
                        printf("Jste v minusu\n\n");
                    }
                    else{
                        printf("Nejste v minusu\n\n");
                    }
                    printf("Dekuju za hrani PCBuilder 2.\n");
                    printf("Tuhle hru jsem udelal 3 dny po te co jsem se zacal ucit C\n");
                    printf("Vytvoreno: ZuhaGames\n");
                    
                    menunastaveni = 1;
                    break;
                case 2:
                    menunastaveni = 2;
                    break;
            }
        }

        if (menunastaveni == 2){
            system("cls");
            nastaveni();
            scanf("%d", &menunastaveni); 

            switch (menunastaveni){
                case 1:
                    money = 9999999;
                    break;
            }

            menunastaveni = 0; 
        }
    }

    return(0);
}
    
