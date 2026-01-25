# Theories : 
## Scaffold : 
  it's like a place of screen. a body tag in html ig.
  within it , we build stuff

# Navbar + title : 
  here, instead of navbar, we say appbar : 
  ```
  appBar: AppBar(
          title: Text('I am rich1'),
          backgroundColor: const Color.fromARGB(174, 244, 67, 54),
        ),
  ```


# Image adding : 

  to add local iamge you have to mention the image url in the pubsec.yaml in the assets 
  ```
    assets:
    - images/RANDOM.png
  ```
## adding images as rows : 
```
        body: Row(
          children: [
            Image.asset('images/RANDOM.png', width: 100, height: 100),
            Image.asset('images/RANDOM.png', width: 100, height: 100),
            Image.asset('images/RANDOM.png', width: 100, height: 100),
          ],
        ),
```
<img width="504" height="253" alt="image" src="https://github.com/user-attachments/assets/29c356fc-dfbc-42a3-9f9a-ebe685eb8feb" />
the coolest one is one with "expanded" that will take max space. 

```

        body: Row(
          children: [
            Expanded(child: Image.asset('images/RANDOM.png')),
            Expanded(child: Image.asset('images/RANDOM.png')),
          ],
        ),
```
<img width="504" height="457" alt="image" src="https://github.com/user-attachments/assets/22d7e106-5acf-4e8d-9a36-b3306d5517ee" />
