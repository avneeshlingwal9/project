from django.urls import path
from . import views

urlpatterns = [
    path('' , views.video_page , name = "video_page"),
    path('page1' , views.loading_animation , name = "animation_page"),
    path('page2' , views.scroll_bar , name = "scroll_bar"),
    path('page3' , views.image_transition , name = "image_transition")
]
