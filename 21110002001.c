//
//  main.c
//  coffe store
//
//  Created by Yusuf Baykan on 17.10.2022.
//

#include <stdio.h>

int main()
{
    printf("Welcome To The cShark Coffee shop:)).\n");
    // Coffee:cof, Size:siz, total price:tot.
    int cof,siz,sug = 0;
    int a = 1;
    float tot = 0.0;
    printf("Choosee Your coffee to get ready for C exam.\n1::::>Latte.\n2::::>Mocha.\n3::::>Ice Chocolate Mocha.\nPress 1 after you chooseed your coffee if you want to add sugar.\nPress 0 if you don't want any sugar.\n");
    scanf("%d",&cof);
    
    switch (cof) {
        case 1:
        printf("You coffee is Latte, Choosee size of your coffee now\n");
        printf("Tall(1)===>3.75TL.\nGrande(2)===>4.5TL.\nVenti(3)===>6TL.\nAdd Sugar(1)===>+1 TL");
        scanf("%d",&siz);
        scanf("%d",&sug);
        if (siz == 1) {
            tot = (3*1.25);
            }
        if (siz == 2) {
            tot = (3*1.5);
        }
            if (siz == 3) {
                tot = (3*2);
            }
            if ( sug == 1) {
                tot+=a;
            }
            printf("%fTL\nEnjoy your coffee\n",tot);
        break;
            
        case 2:
            printf("You coffee is Mocha, Choosee size of your coffee now\n");
            printf("Tall(1)===>5.00TL.\nGrande(2)===>6.00TL.\nVenti(3)===>8.00TL.\nAdd Sugar(1)===>+1 TL");
            scanf("%d",&siz);
            scanf("%d",&sug);
            if (siz == 1) {
                tot = (4*1.25);
                }
            if (siz == 2) {
                tot = (4*1.5);
            }
                if (siz == 3) {
                    tot = (4*2);
                }
            if ( sug == 1) {
                tot+=a;
            }
            
                printf("%fTL\nEnjoy your coffee\n",tot);
            break;
            
        case 3:
            printf("You coffee is Ice Chocolate Mocha, Choosee size of your coffee now\n");
            printf("Tall(1)===>12.50TL.\nGrande(2)===>15.00TL.\nVenti(3)===>20.00TL.\nAdd Sugar(1)===>+1 TL");
            scanf("%d",&siz);
            scanf("%d",&sug);
            if (siz == 1) {
                tot = (10*1.25);
                }
            if (siz == 2) {
                tot = (10*1.5);
            }
                if (siz == 3) {
                    
                    tot = (10*2);
                }
            if ( sug == 1) {
                tot+=a;
            }
            
            
                printf("%fTL\nEnjoy your coffee\n",tot);
            break;
            
        default:
        
            printf("Unkown Coffee Check Python coffee for this\n");
            break;
            
        
        
        
        
    }

    return 0;
}
