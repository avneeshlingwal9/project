from django.shortcuts import render
from django.http.response import HttpResponse

# Create your views here.
def first(request):
    return HttpResponse("Hello dear")