#include <stdio.h>
#include <unistd.h>

int main() {
    int num,cnt=1,c;
    char a[5][9]={' ',' ','|',' ',' ',' ','|',' ',' ',
        '-','-','-','-','-','-','-','-','-',
        ' ',' ','|',' ',' ',' ','|',' ',' ',
        '-','-','-','-','-','-','-','-','-',
        ' ',' ','|',' ',' ',' ','|',' ',' ' };
   usleep(1000000);
    printf("            tick ");
    fflush(stdout); // Flush the buffer to ensure the text is displayed
    usleep(2000000);
    printf("tack ");
    fflush(stdout); // Flush the buffer again
    usleep(2000000);
    printf("toe\n\n");
    fflush(stdout);
    usleep(1000000); 
    fflush(stdout);
printf("             O |   | X\n             ---------\n             X | O | \n             ---------\n             X | X | O\n");

usleep(1000000); 
    fflush(stdout);
    printf("\nChoose your player:\n1 - \'X\'\n2 - \'O\'\nPlayer 1: ");
    scanf("%d",&c);
    if(c == 1)
    {
        printf("Player 1 your: \'X\'\n");
        printf("Player 2 your: \'O\'\n");
    }
    else
    {
        printf("Player 1 your: \'O\'\n");
        printf("Player 2 your: \'X\'\n\n");
    }
    usleep(1000000); 
    fflush(stdout);

printf("Now Start Selecting the position to block your spot:\nEnter 0 to exit game\n");

printf("             1 | 2 | 3\n             ---------\n             4 | 5 | 6\n             ---------\n             7 | 8 | 9\n");

    while(cnt<=9)
    {   
        if(cnt%2!=0){printf("Player 1: ");}
        else{printf("Player 2: ");}
scanf("%d",&num);
        switch(num)
        {
            case 1:
            if(cnt%2!=0){ a[0][0] = 'X'; }
            else{ a[0][0] = 'O'; }
            break;
            case 2:
            if(cnt%2!=0){ a[0][4] = 'X'; }
            else{ a[0][4] = 'O'; }
            break;
            case 3:
            if(cnt%2!=0){ a[0][8] = 'X'; }
            else{ a[0][8] = 'O'; }
            break;
            case 4:
            if(cnt%2!=0){ a[2][0] = 'X'; }
            else{ a[2][0] = 'O'; }
            break;
            case 5:
            if(cnt%2!=0){ a[2][4] = 'X'; }
            else{ a[2][4] = 'O'; }
            break;
            case 6:
            if(cnt%2!=0){ a[2][8] = 'X'; }
            else{ a[2][8] = 'O'; }
            break;
            case 7:
            if(cnt%2!=0){ a[4][0] = 'X'; }
            else{ a[4][0] = 'O'; }
            break;
            case 8:
            if(cnt%2!=0){ a[4][4] = 'X'; }
            else{ a[4][4] = 'O'; }
            break;
            case 9:
            if(cnt%2!=0){ a[4][8] = 'X'; }
            else{ a[4][8] = 'O'; }
            break;
            default:
            break;
        }
        
        for(int i=0;i<5;i++)
        {
            printf("             ");
            for(int j=0;j<9;j++)
            {
                 printf("%c",a[i][j]);
            }
            printf("\n");
        }
        if(((a[0][0] == 'X') && (a[0][4] == 'X') && (a[0][8] == 'X')) || 
        ((a[2][0] == 'X') && (a[2][4] == 'X') && (a[2][8] == 'X')) || 
        ((a[4][0] == 'X') && (a[4][4] == 'X') && (a[4][8] == 'X')) || 
        ((a[0][0] == 'X') && (a[2][0] == 'X') && (a[4][0] == 'X')) || 
        ((a[0][4] == 'X') && (a[2][4] == 'X') && (a[4][4] == 'X')) || 
        ((a[0][8] == 'X') && (a[2][8] == 'X') && (a[4][8] == 'X')) || 
        ((a[0][0] == 'X') && (a[2][4] == 'X') && (a[4][8] == 'X')) || 
        ((a[0][8] == 'X') && (a[2][4] == 'X') && (a[4][0] == 'X')) )
        {
            if(cnt%2!=0){printf("Player 1 Won!! ");break;}
            else{printf("Player 2 Won!! ");break;}
        }
        else if(((a[0][0] == 'O') && (a[0][4] == 'O') && (a[0][8] == 'O')) || 
        ((a[2][0] == 'O') && (a[2][4] == 'O') && (a[2][8] == 'O')) || 
        ((a[4][0] == 'O') && (a[4][4] == 'O') && (a[4][8] == 'O')) || 
        ((a[0][0] == 'O') && (a[2][0] == 'O') && (a[4][0] == 'O')) || 
        ((a[0][4] == 'O') && (a[2][4] == 'O') && (a[4][4] == 'O')) || 
        ((a[0][8] == 'O') && (a[2][8] == 'O') && (a[4][8] == 'O')) || 
        ((a[0][0] == 'O') && (a[2][4] == 'O') && (a[4][8] == 'O')) || 
        ((a[0][8] == 'O') && (a[2][4] == 'O') && (a[4][0] == 'O')) )
        {
            if(cnt%2!=0){printf("Player 1 Won!! ");break;}
            else{printf("Player 2 Won!! ");break;}
        }
        cnt++;
    }
    return 0;
}