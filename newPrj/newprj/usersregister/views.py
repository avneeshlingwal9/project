from django.shortcuts import render, redirect
from django.http import HttpResponse
from django.contrib.auth.forms import UserCreationForm

# Create your views here.
def homepage(request):
    return HttpResponse("This is the user homepage")
def user_register(request):
    if request.method == "POST":
        form = UserCreationForm(request.POST)
        if form.is_valid():
            form.save()
            return redirect('posts:list')
    else:
        form = UserCreationForm()

    return render(request, 'usersregister/user_temp.html', {'form': form})
