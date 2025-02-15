from django.urls import path
from . import views

urlpatterns = [
    path('' , views.video_page , name = "video_page"),
    path('page1' , views.loading_animation , name = "animation_page"),
    path('page2' , views.scroll_bar , name = "scroll_bar"),
    path('page3' , views.image_transition , name = "image_transition"),
    path('btn1', views.btn1 , name = "btn1" ),
    path('btn2', views.btn2 , name = "btn2" ),
    path('btn3', views.btn3 , name = "btn3" ),
    path('btn4', views.btn4 , name = "btn4" ),
    path('btn5', views.btn5 , name = "btn5" ),

]
