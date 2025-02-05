from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.
def video_page(request):
    return render(request, 'base/home.html')