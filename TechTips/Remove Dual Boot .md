# Step 1 : Remove from partition 
![image](https://github.com/user-attachments/assets/77517814-8e1e-41f1-83cb-c16e037ba03e)

# Step 2 : Run cmd as admin . and run : 
```
bcdedit /enum firmware
```
![image](https://github.com/user-attachments/assets/b33e60f3-0b6b-4a2f-864b-a694e654e4ab)
Copy the identifier id 

# Step 4 : 
```
bcdedit /delete {bd4a7998-2171-11f0-9bc4-806e6f6e6963}
```
![image](https://github.com/user-attachments/assets/4f48754b-cb2d-4d0a-bddc-760e971123c5)

# Step 5 : Get into diskpart 
```
diskpart
```
![image](https://github.com/user-attachments/assets/41fecd4a-8124-47c2-bd4b-6ab961ac67f1)


# Step 6 : list the volume and select the volume with about 100mb , that's where the EFI is. then assign a letter to it.
```
list volume

select volume 2

assign LETTER=x:
```
![image](https://github.com/user-attachments/assets/9237753f-977d-4c15-b5c7-200b93522127)

# Step 7 : exit and open the new named part. (here X: )
![image](https://github.com/user-attachments/assets/8eb02b7f-d214-48d8-b5fc-c7c85f0fc3fb)

# Step 8 : go to efi and remove ubuntu (or whatever your os is)
```
rmdir /s ubuntu
```
![image](https://github.com/user-attachments/assets/3cff717d-e6de-4fdf-9b42-74d8a4e107b6)

# Step 9 : REBOOT AND ENJOY!
