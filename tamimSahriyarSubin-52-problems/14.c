#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
    
    // while(t--){
         
    //     char word[10001], letter[2];

    //     scanf(" %[^\n]",word);
    //     scanf("%s", letter);
         
    //     int count = 0;
    //     for(int i = 0; i< strlen(word); i++){
    //         if(word[i] == letter[0]){
    //             count++;    
    //         }
    //     }
    //     if(count != 0){
    //         printf("Occurrence of '%c' in '%s' = %d\n",letter[0],word,count);
    //     }else{
    //         printf("'%c' is not present\n",letter[0]);
    //     }
    // } 

     while(t--){
        getchar();
        char word[10001], letter;
        fgets(word,sizeof(word),stdin);
        word[strcspn(word, "\n")] = '\0';
       
        scanf("%c", &letter);
        
        int count = 0;
        for(int i = 0; i< strlen(word); i++){
            if(word[i] == letter){
                count++;    
            }
        }
        if(count != 0){
            printf("Occurrence of '%c' in '%s' = %d\n",letter,word,count);
        }else{
            printf("'%c' is not present\n",letter);
        }
    } 
}