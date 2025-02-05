from django.urls import path
from . import views
app_name = 'posts'

urlpatterns = [
    path('', views.posts , name = 'list'),
    path('<str:name>', views.post_page , name='page')
    
]