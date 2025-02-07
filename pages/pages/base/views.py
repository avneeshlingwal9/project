from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.
def video_page(request):
    return render(request, 'base/home.html')
def loading_animation(request):
    return render(request, 'base/loading_animation.html')
def scroll_bar(request):
    return render(request , 'base/scroll_bar.html')