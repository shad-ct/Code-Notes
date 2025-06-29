# Adding backgorund image : 
![image](https://github.com/user-attachments/assets/29c42bdf-ec42-45b8-80af-5d6f8c37729e)

> add textureRect => in Texture add your img => Stretch Mode : Tile => Texure Filter : Nearest (to gain the quality)

----------------------------------

# Adding Tile : 
![image](https://github.com/user-attachments/assets/e0ee76e2-96b6-4f11-849e-93fb12489555)

> Add timemap => tile set : new tile set => in tile set at the bottom : drop the asset => use tailmap to get stuff.

> Tip : To increase size of the block use "transform" and adjust the Scale

----------------------------------

# Adding Character : 

> characterBody2D => add Sprite2D => Upload the image to texture => add collisionShape2D
![image](https://github.com/user-attachments/assets/ffd7d655-e397-4c54-96be-64c2396464a3)
> Note : Don't create the hero as Node, instead a 2D Scene or something.


### Animated Character : 
> characterBody2D => AnimatedSprite2D => In animation : new SpriteFrame => in SpriteFrame (bottom) next to playbutton click on "add frames from sprite sheet
![image](https://github.com/user-attachments/assets/7a0871db-5b4f-4b8a-a605-8464a4c5de7c)

> adjust the Horizontal and Vertical to get the right square 
![image](https://github.com/user-attachments/assets/997a5a3b-53e3-4c7c-af5d-659f898b64b6)
![image](https://github.com/user-attachments/assets/fb9d64a3-bb30-4757-9e14-b2a84427a340)
> select the frame in order or movement. Also make sure to conver the texure into nearest.
![image](https://github.com/user-attachments/assets/a315abae-f55c-422a-b366-00fd159cbcdd)


# Adding script to the character : 
![image](https://github.com/user-attachments/assets/e9b6bd5d-5dbe-43d6-a6d0-b35bef3c9c09)


# Making floor solid : 

![image](https://github.com/user-attachments/assets/77814ef1-709b-440c-a4c6-bf1cf9b02c8b)

> TileMap => TileMap (right) => Physics Layer : add element => TileSet : set select property editor to Physics Layer => Select the one needed the physics 
