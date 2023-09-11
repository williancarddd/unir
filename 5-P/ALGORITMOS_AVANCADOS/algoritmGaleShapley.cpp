#include <stdio.h>
#define SINGLE 0


/**
 * @brief 
 * 
1
4
1 4 3 1 2
2 2 1 3 4
3 1 3 4 2
4 4 3 1 2

1 3 2 4 1
2 2 3 1 4
3 3 1 2 4
4 3 2 4 1
 * 
 * @return int 
 */
int main() {
    int t, n;
    scanf("%d", &t);                           
    while(t--) {
        scanf("%d", &n);
        int mList[n+1][n+1];                   
        int wList[n+1][n+1];                  
        int manCurrentMatch[n+1];            
        int womanCurrentMatch[n+1];            
        int manNextProposal[n+1];              

        //taking inputs...
        for (int i = 1; i <= n; i++) {         
            womanCurrentMatch[i] = SINGLE;     
            for(int j = 0; j <= n; j++) {
                scanf("%d", &wList[i][j]);
            }
        }

        for (int i = 1; i <= n; i++) {         
            manCurrentMatch[i] = SINGLE;       
            manNextProposal[i] = 1;           
            for(int j = 0; j <= n; j++) {
                scanf("%d", &mList[i][j]);
            }
        }

        //algorithm...
        bool freeManAvailable = true;           
        int m = 1;                              
        while(freeManAvailable) {
            freeManAvailable = false;
            int w = mList[m][manNextProposal[m]++];
            if(womanCurrentMatch[w] == SINGLE) {
                
                womanCurrentMatch[w] = m;
                manCurrentMatch[m] = w;
            } else {
               
                bool itsABetterProposal = false;     
                
                for(int y = 1; y <= n; y++) {
                    if(wList[w][y] == womanCurrentMatch[w]) {
                        itsABetterProposal = false; break;
                    }
                    if(wList[w][y] == m) {
                        itsABetterProposal = true; break;
                    }
                }
                if(itsABetterProposal) {
            
                    manCurrentMatch[womanCurrentMatch[w]] = SINGLE;
                    womanCurrentMatch[w] = m;
                    manCurrentMatch[m] = w;
                }
            }

    
            for(int x = 1; x <= n; x++) {
                if(manCurrentMatch[x] == SINGLE) {
                    m = x;
                    freeManAvailable = true;
                    break;
                }
            }
        }
        for(int i = 1; i <= n;  i++) {
            printf("%d %d\n", i, manCurrentMatch[i]);
        }
    }

    return 0;
}