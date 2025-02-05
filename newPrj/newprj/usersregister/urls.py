from django.urls import path
from . import views
app_name = 'usersregister'
urlpatterns = [
    path('', views.homepage, name='userhomepage'),
    path('register/', views.user_register , name='registeration')
]
