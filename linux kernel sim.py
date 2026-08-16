print("simulation start")
import time
import random
file_created = ""
file_created_in_desktop = ""
filename1 = ""
text = ""
print("---SYSTEM-CHECK---")
time.sleep(0.5)
print("MEMORY")
time.sleep(0.5)
print("MEMORY.")
time.sleep(0.5)
print("MEMORY..")
time.sleep(0.5)
print("MEMORY...4GB.OK")
time.sleep(0.5)
print("CPU")
time.sleep(0.5)
print("CPU.")
time.sleep(0.5)
print("CPU..")
time.sleep(0.5)
print("CPU...2.7GHz.OK")
time.sleep(1)
print("linux kernal 6x 64bit")
time.sleep(3.5)
while True:
    command = input("COMMAND: ")
    if command == "help":
        print("help shows all avalible commands")
        print("mkdir <location> creates a file at the destination")
        print("system shows the system specs")
        print("DISKMANAGER shows all filesystems and drives")
        print("exit turns off the kernal (os)")
        print("files shows the files")
        print("clear clears 100 lines in the terminal")
        print("lscpu shows cpu details")
        print("sudo apt install <pakage name> installes an app from a pakage")
        print("ping 8.8.8.8 pings https://google.com")
        print("kill <program/command> stops a program/command")
        print("rm -rf <location> deletes a file")
        print("python <location> use it to open .py files")
        print("lsgpu shows the gpu details")
        print("lsram shows the ram details")
        print("lsbios shows the bios details")
        print()
    elif command == "mkdir /":
        filename = input("filename: ")
        file_created = "True"
        print("created file in /")
    elif command == "mkdir / desktop":
        filename1 = input("filename: ")
        file_created_in_desktop = "True"
        print("created file in / desktop")
    elif command == "system":
        print("MEMORY 4GB")
        print("CPU 2.7GHZ")
        print("HARDDISK 20GB")
        print("VRAM 2GB")
        print("OS linux 64bit")
        print()
    elif command == "DISKMANAGER":
        print("/dev1/ 20GB")
        print("/dev0/ 128MB BIOS PARTITION")
        print("/dev2/ 4GB USB")
        print()
    elif command == "diskmanager":
        print("/dev1/ 20GB")
        print("/dev0/ 128MB BIOS PARTITION")
        print("/dev2/ 4GB USB")
        print()
    elif command == "exit":
        print("exiting")
        time.sleep(5)
        exit()
    elif command == "files":
        print("/")
        print("/ user")
        print("/ commands")
        print("/ pakages")
        print("/ pakages / pakage.apt")
        print("/ programs")
        print("/ desktop")
        print("/ programs / adder.py")
        print("/ programs / program.py")
        print("/ programs / thanks.py")
        print("/ user / textfile.txt")
        print("/ desktop / trashcan")
        print("/ user / my documents")
        print("/ drivers")
        print("/ drivers / keyboard.ini")
        print("/ drivers / plugandplay.ini")
        if file_created == "True":
            print("/",filename)
        elif file_created_in_desktop == "True":
            print("/ desktop /",filename1)
        print()
    elif command == "clear":
        for _ in range(100):
            print()
    elif command == "lscpu":
        print("CPU NAME: simulated cpu")
        print("L1 cache 480 KB L2 cache 6,0 MB L3 32,0 MB")
        print("cores 1")
        print("64bit")
    elif command == "ping 8.8.8.8":
        print("error can't ping https://google.com")
    elif command.startswith("sudo apt install "):
        package = command.replace("sudo apt install ", "")
        print(f"Installing {package}...")
        print("pakage.apt has been installed")
        pakage_apt_installed = "true"
        if pakage_apt_installed == "true":
            if command == "print":
                print("hello you now know how to install .apt files")
    elif command == "kill terminal":
        exit()
    elif command == "rm -rf /":
        print("-    10%  ")
        time.sleep(0.7)
        print("--   20%  ")
        time.sleep(0.7)
        print("---  30%  ")
        time.sleep(0.7)
        print("---- 40%  ")
        time.sleep(0.7)
        print("-----50%  ")
        time.sleep(0.7)
        print("-----60%  ")
        time.sleep(0.7)
        print("-----70%  ")
        time.sleep(0.7)
        print("-----80%  ")
        time.sleep(0.7)
        print("-----90%- ")
        time.sleep(0.7)
        print("----100%--")
        exit()
    elif command == "python / programs / adder.py":
        one_number = int(input("First number: "))
        two_number = int(input("Second number: "))
        print(one_number + two_number)
    elif command == "python / programs / program.py":
        for _ in range(50):
            print(random.randint(1, 500))
            time.sleep(0.1)
    elif command == "python / programs / thanks.py":
        print("thanks for trying my fake os. is inspired by linux kernel 6x 64bit")
    elif command == "python / programs / .txt editor.py":
        text = input("type your text: ")
    elif command == "lsgpu":
        print("simulated nvidia GT 635 2GB")
    elif command == "lsram":
        print("4GB DDR3 simulated")
    elif command == "lsbios":
        print("SIMULATED BIOS name = pheonixSE 64bit")
        print("made in 2026-07-19")
    else:
        print("command doesent exist")