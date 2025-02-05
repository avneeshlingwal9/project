from django.shortcuts import render
from django.http import HttpResponse
from .models import Post

# Create your views here.
def posts(request):
    post = Post.objects.all()
    return render(request,'posts/posts_lists.html',{'posts': post} )

def post_page(request,name):
    post = Post.objects.get(name = name)

    return render(request, 'posts/post_page.html',{'post': post})
