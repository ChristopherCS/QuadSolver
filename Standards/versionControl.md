# Version Control Standard

### Git & Github
We are using git and github for version control. The repository is located at: https://github.com/ChristopherCS/QuadSolver.

### One Branch
For this project we are developing on the master branch. We recognize that this is only acceptable because this is a small project with a limited scope. As such, there are a few practices that should be observed when pushing to the repository.
 ##### 1. **Pull Before you Push**
Be sure to pull the repository before you push. Really, pull before you do any new work. To make life easier on yourself, make sure you have the latest changes in the project before you work on the project. 
 ##### 2. **Merge before you Push**
 Now that you have pulled the repository, make sure your changes don't conflict with changes others have made. If your changes do confict, git will tell you so! Open the file(s) that git says there is a problem with in your favorite text editor. In the editor you will see the code you wrote, and the code that someone else wrote that are conflicting. They will be between opening and closing arrows like this:
 "<<<<<<< HEAD:nameOfTheFile.txt
 ONE SET OF CHANGES HERE
 \===========
ANOTHER SET OF CHANGES HERE
 \>>>>>>>> 77976da35a11db4580b80ae27e8d65caf5208086:nameOfTheFile.txt	
Your job is to decide how the code should look. Usually this is pretty simple. You just have to decide where your changes should be, and where the other changes should be. Once you have fixed the file, save it, add the changes to git, commit the changes to git, and then you are ready to push the changes to git. 

##### 3. **Make sure nothing got broken before you Push** 
Before we push to github, we should make sure we haven't broken anything. If there are/were passing tests, run the tests and make sure they are still passing. If they aren't passing, figure out why and fix it before you push the code. If the program compiled before you changed it, make sure it still compiles. If it isn't compiling, fix the issues the compiler has before you push.
