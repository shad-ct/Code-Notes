## Install an image :
```
docker pull [name]
```

## Run an image to container : 
```
docker run [name]
```
![image](https://github.com/user-attachments/assets/0d76c325-b020-4291-81f6-7d4f0a505198)
### Run in detatch mode : 
```
docker run -d [name] 
```
![image](https://github.com/user-attachments/assets/dafec8ed-690b-4bf2-bc9d-0c3480171f2a)

can be used to run 2 or more different versions of the same image
to stop : 
```
docker start/stop [id]
```

### How 2 runs at a time : 
![image](https://github.com/user-attachments/assets/6c251a27-d548-4c15-8615-2a4a6f97c0ff)
host will have different ports but the containers can have same or diff port because thye're independent  

## Check running containers : {process status}
```
docker ps  
```

## To map and run containers : 
```
docker run -p5000:[container port]  redis 
```
here mapped to 5000 
