from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.
def video_page(request):
    return render(request, 'base/home.html')
def loading_animation(request):
    return render(request, 'base/loading_animation.html')
def scroll_bar(request):
    return render(request , 'base/scroll_bar.html')
def image_transition(request):
    return render(request , 'base/image_transition.html')
def btn1(request):
    return render(request, 'base/btn1.html')
def btn2(request):
    return render(request, 'base/btn2.html')
def btn3(request):
    return render(request, 'base/btn3.html')
def btn4(request):
    return render(request, 'base/btn4.html')
def btn5(request):
    return render(request, 'base/btn5.html')