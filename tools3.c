#include <tools3.h>
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
void cr_help_tools_3(void)
{
    printf("read the code to know\ncus im lazy");
}
void cr_tools_v(void)
{
    printf("TOOLS v3\n");
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
    printf("---taskmanager----x\n");
}
void cr_tools_creadits(void)
{
    cr_tools_creadits_tp_bar();
    cr_tools_creadits_text();
    cr_lw_ln();
}
void cr_tools_creadits_tp_bar(void)
{
    printf("creadits----------x\n");
}
void cr_tools_creadits_text(void)
{
    printf("|made by augura312|\n");
    printf("|idea by augura312|\n");
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
void cr_coolhex(void)
{
    printf("68 65 6c 6c 6f 20 75 73 65 72 20 74 68 61 6e 6b 73 20 66 6f 72 20 75 73 69 6e 67 20 6d 79 20 74 6f 6f 6c 73 33 0a 69 73 20 74 6f 6f 6c 73 33 20 63 6f 6f 6c 3f");
    char key = _getch();
    if (key == 'y' || key == 'Y'){
        printf("thanks user\n<3\npls spread this c extention\n");
    }
}
void cr_fake_loading_text2(void)
{
    printf("CPU\n");
    sleep(1);
    printf("CPU.\n");
    sleep(1);
    printf("CPU..\n");
    sleep(1);
    printf("CPU...OK\n");
    sleep(1);
    printf("RAM\n");
    sleep(1);
    printf("RAM.\n");
    sleep(1);
    printf("RAM..\n");
    sleep(1);
    printf("RAM...OK\n");
    sleep(1);
    printf("DISPLAY\n");
    sleep(1);
    printf("DISPLAY.\n");
    sleep(1);
    printf("DISPLAY..\n");
    sleep(1);
    printf("DISPLAY...OK\n");
    sleep(5);
    printf("initialized\n");
}
void cr_fake_installing_text2(void)
{
    printf("installing.\n");
    sleep(1);
    printf("installing..\n");
    sleep(1);
    printf("installing...\n");
    sleep(1);
    printf("installing....\n");
    sleep(1);
    printf("installing.....\n");
    sleep(1);
    printf("installing......\n");
    sleep(1);
    printf("installing.......\n");
    sleep(1);
    printf("creating regesty hives\n");
    sleep(1);
    printf("created regesty hives\n");
    printf("installed\n");
}
void cr_fake_uninstalling_text2(void)
{
    printf("deleting.\n");
    sleep(1);
    printf("deleting..\n");
    sleep(1);
    printf("deleting...\n");
    sleep(1);
    printf("deleting.\n");
    sleep(1);
    printf("deleting..\n");
    sleep(1);
    printf("deleting...\n");
    sleep(1);
    printf("deleted sucsesfuly\n");
}
void cr_fake_unsucsesful_uninstal_text(void)
{
    printf("deleting.\n");
    sleep(1);
    printf("deleting..\n");
    printf("an error is preventing to uninstall this program\n");
}
void cr_fake_unsucsesful_installing_text(void)
{
    printf("installing\n");
    sleep(1);
    printf("installing.\n");
    sleep(5);
    printf("an error is preventing you to install this program\n");
}
void cr_fake_unsucsesful_uninstal_text2(void)
{
    printf("deleting.\n");
    sleep(1);
    printf("deleting..\n");
    sleep(1);
    printf("deleting...\n");
    sleep(5);
    printf("an error is preventing to uninstall this program\n");
}
void cr_fake_unsucsesful_installing_text2(void)
{
    printf("installing.\n");
    sleep(1);
    printf("installing..\n");
    sleep(1);
    printf("installing...\n");
    sleep(5);
    printf("an error is preventing you to install this program\n");
}
void cr_fake_loading_text3(void)
{
    printf("[ok] kernel\n");
    sleep(1);
    printf("[ok] cpu\n[ok] ram\n[ok] drivers\n[ok] display\n[ok] commands\n");
    sleep(1);
    printf("[ok] terminal\n[ok] tools3\n[ok] c\n");
    sleep(1);
    printf("loaded total 3s\n");
}
void cr_fake_turning_off_text2(void)
{
    printf("saving.\n");
    sleep(1);
}
void cr_fake_unsucsesful_loading_text(void)
{
    printf("turning off\n");
    sleep(1);
    printf("unsucsesful save\nplesse try again");
}
void cr_binary(void)
{
    printf("011010000110010101101100011011000110111100100000011000010110111001100100001000000111010001101000011010010111001100100000011010010111001100100000011011010110000101100100011001010010000001101001011011100010000001100011\nyou can change this\n");
    printf("this is example text\n");
}
void exit_with_error2(const char *error_message2)
{
    printf("a fatal error");
    sleep(1);
    fprintf(stderr, "Error: %s\n", error_message2);
    exit(1);
}
void cr_fake_line_load(void)
{
    printf("_");
    sleep(1);
    printf("_");
    sleep(1);
    printf("_");
    sleep(1);
    printf("_");
    sleep(1);
    printf("_");
    sleep(1);
    printf("_");
    sleep(1);
    printf("_");
    sleep(1);
    printf("_");
    sleep(1);
    printf("_");
    sleep(1);
    printf("_");
    sleep(1);
    printf("loaded");
}
void cr_exit2(void)
{
    printf("-");
    sleep(2);
    printf("----");
    sleep(1);
    printf("-----");
    while (1) {
        printf("exiting\n");
        break;
    }
}
void cr_fake_hardwr2(void)
{
    printf("CPU=INTAL 2 7100x\n");
    printf("DISPLAY=asus\n");
    printf("SSD=kingston gen3 512GB\n");
    printf("ETHERNET=cat5\n");
}
void cr_fake_os_terminal2(void)
{
    cr_fake_loading_text3();
    while (1) {
        printf("C:/> ");
        char command[100];
        fgets(command, sizeof(command), stdin);
        if (strcmp(command, "help\n") == 0) {
            printf("commands:\nhelp shows the avalible commands\ndir shows the files\nturn_off exits the program\ncreadits\n");
        } else if (strcmp(command, "dir\n") == 0) {
            printf("c:\nc:/toolslib.dll\nc:/example.exe\nc:/example.dll");
        } else if (strcmp(command, "example.exe\n") == 0) {
            printf("hello\nthis is an example\n:)\nthe veagan teacher is the worst youtuber\n");
        } else if (strcmp(command, "turn_off\n") == 0) {
            printf("turning off\n");
            break;
        } else if (strcmp(command, "creadits\n") == 0) {
            cr_tools_creadits();
        } else {
            printf("comamnd not exists\n");
        }
    }
}
void cr_inf_i_use_arch_linux_btw(void)
{
    while (1) {
        printf("i use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\ni use arch btw\n");
    }
}