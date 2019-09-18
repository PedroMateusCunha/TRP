#include <stdlib.h>
#include <stdio.h>

int torre();
int fibra();

int fibra_centro();
int fibra_floresta();
int fibra_paciencia();
int fibra_prado();

int torre_anajas();
int torre_araca();
int torre_barrerinha();
int torre_caretinha();
int torre_conjuntoBarcelona();
int torre_criuli();
int torre_lan();
int torre_floresta();
int torre_furnas();
int torre_germano();
int torre_lagoaDaCruz();
int torre_macambira();
int torre_paciencia();
int torre_recreio();
int torre_peDoMorro();
int torre_prado();
int torre_salomao();
int torre_vertente();
int torre_village();


int main()
{
    int tipo;
    system("cls");
    printf("[ * ] ESCOLHA O TIPO DE TESTE: \n\n");
    printf("[ 1 ] Fibra\n[ 2 ] Torre\n");
    scanf("%d", &tipo);

    switch (tipo)
    {
        case 1:
            fibra();
            break;

        case 2:
            torre();
            break;

        default:
            printf("Valor invalido!\n");
    }
    return 0;
}

int fibra()
{
    switch (lugar)
    {
        case 1:
            fibra_centro();
            break;
        case 2:
            fibra_floresta();
            break;
        case 3:
            fibra_paciencia();
            break;
        case 4:
            fibra_prado();
            break;
        default:
            printf ("OPCAO INVALIDA\n");
    }
    return 0;
}

int torre()
{
    switch (lugar)
    {
        case 1:
            torre_anajas();
            break;
        case 2:
            torre_araca();
            break;
        case 3:
            torre_barrerinha();
            break;
        case 4:
            torre_caretinha();
            break;
        case 5:
            torre_conjuntoBarcelona();
            break;
        case 6:
            torre_criuli();
            break;
        case 7:
            torre_floresta();
            break;
        case 8:
            torre_furnas();
            break;
        case 9:
            torre_germano();
            break;
        case 10:
            torre_lagoaDaCruz();
            break;
        case 11:
            torre_lan();
            break;
        case 12:
            torre_macambira();
            break;
        case 13:
            torre_paciencia();
            break;
        case 14:
            torre_peDoMorro(;)
            break;
        case 15:
            torre_prado();
            break;
        case 16:
            torre_recreio();
            break;
        case 17:
            torre_salomao();
            break;
        case 18:
            torre_vertente();
            break;
        case 19:
            torre_village();
            break;
            
        default:
            printf ("OPCAO INVALIDA\n");
            break;
    }
}

int fibra_centro()
{
    system("start ping -t 172.16.254.245");
    system("start ping -t 172.16.254.246");
    system("start ping -t 172.16.254.247");
    system("start ping -t 172.16.254.248");
    system("start ping -t 172.16.254.249");
    return 0;
}
int fibra_floresta()
{
    system("start ping -t 172.16.254.240");
    system("start ping -t 172.16.254.241");
    system("start ping -t 172.16.254.242");
    system("start ping -t 172.16.254.243");
    system("start ping -t 172.16.254.244");
    return 0;
}
int fibra_paciencia()
{
    system("start ping -t 172.16.254.140");
    system("start ping -t 172.16.254.141");
    return 0;
}
int fibra_prado()
{
    system("start ping -t 172.16.254.142");
    system("start ping -t 172.16.254.143");
    system("start ping -t 172.16.254.144");
    system("start ping -t 172.16.254.145");
    system("start ping -t 172.16.254.146");
    return 0;
}

int torre_anajas()
{
    system("start ping -t 172.16.254.100");
    system("start ping -t 172.16.254.101");
    system("start ping -t 172.16.254.102");
    return 0;

}

int torre_araca()
{
    system("start ping -t 172.16.254.70");
    system("start ping -t 172.16.254.71");
    system("start ping -t 172.16.254.72");
    system("start ping -t 172.16.254.73");
    system("start ping -t 172.16.254.74");
    return 0;
}

int torre_barrerinha()
{
    system("start ping -t 172.16.254.80");
    system("start ping -t 172.16.254.81");
    return 0;
}

int torre_caretinha()
{
    system("start ping -t 172.16.254.60");
    system("start ping -t 172.16.254.61");
    system("start ping -t 172.16.254.62");
    system("start ping -t 172.16.254.63");
    system("start ping -t 172.16.254.64");
    system("start ping -t 172.16.254.65");
    return 0;
}

int torre_conjuntoBarcelona()
{
    system("start ping -t 172.16.254.200");
    system("start ping -t 172.16.254.201");
    system("start ping -t 172.16.254.202");
    return 0;
}

int torre_criuli()
{
    system("start ping -t 172.16.254.160");
    system("start ping -t 172.16.254.161");
    system("start ping -t 172.16.254.162");
    system("start ping -t 172.16.254.163");
    return 0;
}

int torre_lan()
{
    system("start ping -t 172.16.254.120");
    system("start ping -t 172.16.254.121");
    system("start ping -t 172.16.254.122");
    system("start ping -t 172.16.254.123");
    system("start ping -t 172.16.254.124");
    system("start ping -t 172.16.254.125");
    system("start ping -t 172.16.254.126");
    system("start ping -t 172.16.254.127");
    system("start ping -t 172.16.254.128");
    return 0;
}

int torre_floresta()
{
    system("start ping -t 172.16.254.90");
    system("start ping -t 172.16.254.91");
    system("start ping -t 172.16.254.92");
    system("start ping -t 172.16.254.93");
    system("start ping -t 172.16.254.94");
    system("start ping -t 172.16.254.95");
    system("start ping -t 172.16.254.96");
    return 0;
}

int torre_furnas()
{
    system("start ping -t 172.16.254.230");
    system("start ping -t 172.16.254.231");
    return 0;
}

int torre_germano()
{
    system("start ping -t 172.16.254.210");
    system("start ping -t 172.16.254.211");
    return 0;
}

int torre_lagoaDaCruz()
{
    system("start ping -t 172.16.254.50");
    system("start ping -t 172.16.254.51");
    system("start ping -t 172.16.254.52");
    system("start ping -t 172.16.254.53");
    system("start ping -t 172.16.254.54");
    return 0;
}

int torre_macambira()
{
    system("start ping -t 172.16.254.220");
    system("start ping -t 172.16.254.221");
    return 0;
}

int torre_paciencia()
{
    system("start ping -t 172.16.254.170");
    system("start ping -t 172.16.254.171");
    system("start ping -t 172.16.254.172");
    system("start ping -t 172.16.254.173");
    return 0;
}

int torre_recreio()
{
    system("start ping -t 172.16.254.110");
    system("start ping -t 172.16.254.111");
    system("start ping -t 172.16.254.112");
    system("start ping -t 172.16.254.113");
    system("start ping -t 172.16.254.114");
    system("start ping -t 172.16.254.115");
    return 0;
}

int torre_peDoMorro()
{
    system("start ping -t 172.16.254.40");
    system("start ping -t 172.16.254.41");
    system("start ping -t 172.16.254.42");
    system("start ping -t 172.16.254.43");
    system("start ping -t 172.16.254.44");
    system("start ping -t 172.16.254.45");
    return 0;
}

int torre_prado()
{
    system("start ping -t 172.16.254.180");
    system("start ping -t 172.16.254.181");
    system("start ping -t 172.16.254.183");
    system("start ping -t 172.16.254.184");
    system("start ping -t 172.16.254.185");
    system("start ping -t 172.16.254.186");
    system("start ping -t 172.16.254.187");
    return 0;
}

int torre_salomao()
{
    system("start ping -t 172.16.254.150");
    system("start ping -t 172.16.254.151");
    system("start ping -t 172.16.254.152");
    system("start ping -t 172.16.254.153");
    system("start ping -t 172.16.254.154");
    system("start ping -t 172.16.254.155");
    system("start ping -t 172.16.254.156");
    return 0;
}

int torre_vertente()
{
    system("start ping -t 172.16.254.20");
    system("start ping -t 172.16.254.21");
    system("start ping -t 172.16.254.22");
    system("start ping -t 172.16.254.23");
    system("start ping -t 172.16.254.24");
    system("start ping -t 172.16.254.25");
    system("start ping -t 172.16.254.25");
    system("start ping -t 172.16.254.26");
    system("start ping -t 172.16.254.27");
    return 0;
}

int torre_village()
{
    system("start ping -t 172.16.254.2");
    system("start ping -t 172.16.254.3");
    system("start ping -t 172.16.254.4");
    system("start ping -t 172.16.254.5");
    system("start ping -t 172.16.254.6");
    return 0;
}

