from django.urls import path
from . import views

urlpatterns = [
    path('' , views.video_page , name = "video_page"),
    path('page1' , views.loading_animation , name = "animation_page")
]
