# Starting with venv :
```
  python -m venv venvName
```
### activate venv :
```
  venvName\Scripts\activate
```
### Install Django :
```
pip install django
```
### Create a Project : 
```
django-admin startproject projName
```
### Create an App :
```
python manage.py startapp appName
```
### Run the server : 
```
python manage.py runserver
```



# Adding a page/app (adding home): 


> url.py of projName :
```
urlpatterns = [
    path('admin/', admin.site.urls),
    path('', include('home.urls')), 
]
```
> url.py of home :
```
from django.urls import include, path
from . import views
urlpatterns = [
    path('', views.index), 
]
```

> views.py of home :
```
from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def index(request):
    return HttpResponse("Hello, welcome to the Home Page!")

```
