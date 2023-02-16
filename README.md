# character-driver
1) Build driver

To build driver we need to write, make file and save it in the same directory where our driver code is save. Below is the example of make file.![image](https://user-images.githubusercontent.com/31912867/219355951-a450789b-8b97-4225-8ce2-b8e15e3be4b1.png)

2)inserting driver module

We can insert our driver module in kernel by using insmod command. 
insmod character_driver.ko

3) make device(In linux device can be file)
command: maknod /dev/mydev c 90 10

4)check device : cat proc/devices

5) chmod a+r+w /dev/mydev

6)compile and run test_app file

7)check logs using dmesg

8)Remove module rmmode character_driver.ko
