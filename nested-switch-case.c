#include <stdio.h>

int main() {
    int choice;
    
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Press 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            
            switch(choice) {
                case 1:
                    printf("You have successfully done Internet Recharge.\n");
                    break;
                case 2:
                    printf("You have successfully done Top-up Recharge.\n");
                    break;
                case 3:
                    printf("You have successfully done Special Recharge.\n");
                    break; 
                default:
                    printf("Invalid choice.\n");
            }
            break;
        case 2:
            printf("Internet Recharge ke liye 1 dabaiye\n");
            printf("Top-Up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            
            switch(choice) {
                case 1:
                    printf("Aapne safaltapurvak Internet Recharge kar liya hai.\n");
                    break;
                case 2:
                    printf("Aapne safaltapurvak Top-Up Recharge kar liya hai.\n");
                    break;
                case 3:
                    printf("Aapne safaltapurvak Special Recharge kar liya hai.\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;
        case 3:
            printf("Internet Recharge mate 1 dabavo\n");
            printf("Top-Up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            
            switch(choice) {
                case 1:
                    printf("Tame safaltapurvak Internet Recharge karyu chhe.\n");
                    break;
                case 2:
                    printf("Tame safaltapurvak Top-Up Recharge karyu chhe.\n");
                    break;
                case 3:
                    printf("Tame safaltapurvak Special Recharge karyu chhe.\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }
    
    return 0;
}
