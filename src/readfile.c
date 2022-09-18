#include <stdio.h>

int main(){
    FILE*fp;
    char filename[20] = "program.txt";
    char content[1000];

    fp = fopen(filename, "r");

//    while (fscanf(fp, "%s", content) != EOF)
//    {
//     /* code */
//     printf("%s ", content);
//    }r
    
    // while (fgets(content, 1000, fp))
    // {
    //     /* code */
    //     printf("%s", content);
    // }

    int res = remove(filename);

    if (res == 0)
    {
        /* code */
        printf("%s was deleted successfully", filename);
    }else{
        printf("%s does not exit", filename);
    }
    
    
    
   
}