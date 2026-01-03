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
    path('about/', views.about), 
]

we have made a about page too.
```

> views.py of home :
```
from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def index(request):
    return HttpResponse("Hello, welcome to the Home Page!")

def about(request):
    return HttpResponse("This is the About Page.")
```






# Django Templates : (load HTML)

// create a templates folder in main directory:
<img width="274" height="243" alt="image" src="https://github.com/user-attachments/assets/32f092f0-c9c6-4fbf-992d-9751922439e5" />



> views.py of home :
```
def index(request):
    return render(request, 'index.html')
```

// create a index.html in template folder 

> settings of projName:
```

TEMPLATES = [
    {
        'BACKEND': 'django.template.backends.django.DjangoTemplates',
        'DIRS': ['templates'],

```
