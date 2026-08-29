#include <tools2.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void cr_fake_loading_text(void)
{
    printf("loading");
    printf("-");
    sleep(1);
    printf("-");
    sleep(1);
    printf("-");
    sleep(1);
    printf("-");
    sleep(1);
    printf("-");
    sleep(1);
    printf("[ ok ] terminal\n[ ok ] commands\n[ ok ] files\n[ ok ] libraries\n[ ok ] dependencies\n");
}

void cr_fake_installing_text(void)
{
    printf("installing");
    sleep(3);
    printf("cmd-commands ms31 719.3MB\nsys-lib.dll 913.2BM\n");
    sleep(5);
    printf("main.exe 1.5GB\n");
    sleep(1);
    printf("assets.png 1.0GB\n");
    sleep(2);
    printf("setting regestry hives\n");
    sleep(1);
    printf("setting up environment variables\n");
    sleep(1);
    printf("installation complete\n");
}
void cr_fake_uninstalling_text(void)
{
    printf("uninstalling");
    sleep(3);
    printf("cmd-commands ms31 719.3MB\nsys-lib.dll 913.2BM\n");
    sleep(5);
    printf("main.exe 1.5GB\n");
    sleep(1);
    printf("assets.png 1.0GB\n");
    sleep(2);
    printf("removing regestry hives\n");
    sleep(1);
    printf("removing environment variables\n");
    sleep(1);
    printf("uninstallation complete\n");
}
void cr_fake_turning_off_text(void)
{
    printf("shutting down\n");
    sleep(1);
    printf("saved\n");
}
void exit_with_error(const char *error_message)
{
    fprintf(stderr, "Error: %s\n", error_message);
    exit(1);
}
void cr_fake_updating_text(void)
{
    printf("do you want to update? (y/n): ");
    char key = _getch();
    if (key == 'y' || key == 'Y')
    {
        printf("updating...\n");
        sleep(3);
        printf("update complete\n");
    }
    else
    {
        printf("update cancelled\n");
    }
}
void cr_exit(void)
{
    while (1)
    {
        break;
    }
}
void cr_fake_os_terminal(void)
{
    char have_example = 'n';
    cr_fake_loading_text();
    printf("Welcome to the fake OS terminal!\n");
    while (1) {
        printf("C:/> ");
        char command[100];
        fgets(command, sizeof(command), stdin);
        if (strncmp(command, "exit", 4) == 0) {
            printf("Exiting terminal...\n");
            break;
        } else if (strncmp(command, "update", 6) == 0) {
            printf("checking for updates...\n");
            sleep(5);
            cr_fake_updating_text();
        } else if (strncmp(command, "install example", 15) == 0) {
            have_example = 'y';
            cr_fake_installing_text();
        } else if (strncmp(command, "uninstall example", 17) == 0) {
            have_example = 'n';
            cr_fake_uninstalling_text();
        } else if (strncmp(command, "shutdown", 8) == 0) {
            cr_fake_turning_off_text();
            break;
        } else if (strncmp(command, "dir", 3) == 0) {
            printf("/\n/commands\n/commands/defultcmd.dll\n");
            if (have_example == 'y') {
                printf("/example\n/example/example.exe\n");
            }
        } else if (strncmp(command, "help", 4) == 0) {
            printf("Available commands:\n");
            printf("exit - Exit the terminal\n");
            printf("update - Check for updates\n");
            printf("install example - Install the example program\n");
            printf("uninstall example - Uninstall the example program\n");
            printf("shutdown - Shutdown the terminal\n");
            printf("dir - List files and directories\n");
            printf("help - Show this help message\n");
        }
         else {
            printf("Unknown command: %s", command);
        }
    }
}
void cr_help_tools_2(void)
{
    printf("read the code to know\ncus im lazy");
}
void cr_tools_v(void)
{
    printf("TOOLS v2\n");
}
void cr_tp_ln(void)
{
    printf("-------------------x\n");
}
void cr_lw_ln(void)
{
    printf("--------------------\n");
}
void cr_fake_hardwr(void)
{
    printf("|CPU=AND RUZEN 1 1700 5 core processor NOT REAL|\n");
    printf("|RAM=1GB DDR3 unknow|\n");
    printf("|HDD=64GB|\n");
    printf("|ETHERNET=128MB(128 MEGABITES)/s\n");
}
void cr_fake_tskmn(void)
{
    cr_tp_tskmg_ln();
    cr_fake_hardwr();
    cr_lw_ln();
}
void cr_tp_tskmg_ln(void)
{
    printf("---taskmanager----x");
}
void cr_tools_creadits(void)
{
    cr_tools_creadits_tp_bar();
    cr_tools_creadits_text();
    cr_lw_ln();
}
void cr_tools_creadits_tp_bar(void)
{
    printf("creadits----------x");
}
void cr_tools_creadits_text(void)
{
    printf("|made by augura312|");
    printf("|idea by augura312|");
}
void cr_cmput_ascii(void)
{
    printf("+-------+\n");
    printf("|       |\n");
    printf("|\n");
    printf("|\n");
    printf("|       |\n");
    printf("+-------+\n");
    printf("C ");
    printf("C ");
    printf("C ");
    printf("C\n");
    printf("+-------+\n");
    printf("|       |\n");
    printf("|\n");
    printf("|\n");
    printf("|       |\n");
    printf("+-------+\n");
    printf("made by augura312");
}
