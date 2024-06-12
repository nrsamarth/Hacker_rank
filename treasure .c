#include <stdio.h>

int main() {
    int totalCoins, benSharePercent, blackbeardSharePercent;
    int benShare, blackbeardShare, remainingCoins, otherPiratesShare;
    
   
    scanf("%d %d %d", &totalCoins, &benSharePercent, &blackbeardSharePercent);
    

    benShare = totalCoins * benSharePercent / 100;
    
   
    remainingCoins = totalCoins - benShare;
    
   
    blackbeardShare = remainingCoins * blackbeardSharePercent / 100;
    
   
    remainingCoins -= blackbeardShare;
    
   
    otherPiratesShare = remainingCoins / 3;
    
 
    printf("%d\n", benShare);
    printf("%d\n", blackbeardShare);
    printf("%d\n", otherPiratesShare);

    return 0;
}
