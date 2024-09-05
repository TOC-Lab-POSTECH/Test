# Test Repository
This is a test repository for setting projects.
The key test elements are
- Set up a project to develop a static library.
- Set up a repository setting such as authority of members, and pull requests.


# How to Test?
First of all, please install Visual Studio on your desktop. You can install Visual Studio at [this link](https://visualstudio.microsoft.com/ko/vs/community/).
Note that you have to check `Desktop development with C++` (`C++를 사용한 데스크톱 개발`) when you select what workload you want to install.

<img src = "https://github.com/user-attachments/assets/0a8c2aae-c816-4084-a600-8ff156339035" width="30%" height="30%">


And, you should install `GitHub Desktop` which is a GUI application of GitHub for Windows. You can install GitHub Desktop at [this link](https://docs.github.com/ko/desktop/installing-and-authenticating-to-github-desktop/installing-github-desktop).
If you are not familiar with GitHub Desktop, see [this recommended link](https://velog.io/@wns450/Github-Desktop-%EC%82%AC%EC%9A%A9%EB%B2%95)(Korean) to get this repository on your computer.

> [!WARNING]  
> Please do NOTHING before following the guidelines below.
> And, NEVER change anything about the settings of projects or solutions.
> Furthermore, please do NOT change the existing files including `Test Console.cpp` in `Test Console` project. The source file is a public testing file for testing settings.
> If you want your own test file, add a source file to the `Test Console` project.
> If you want to add codes to the library, you can add header and source files to the `TOC_Star_Project` project. You can test your own source file.


---
(1) First, clone this repository on your working directory, i.e., anywhere on your computer where you want to work.
If you didn't set the directory where this repository is installed, then the default position may be `C:\Users\USER\Documents\GitHub` (`내 PC\문서\GitHub`).

---

(2) Open the solution file named `TOC_Star_Project.sln` in the main directory.

---

(3) After that, you may see the screen like the screenshot below.

<img src = "https://github.com/user-attachments/assets/c98116de-18dc-4739-858f-40d5ae99e7ba" width="70%" height="70%">

---

(4) Right-click `TOC_Star_Project` project in Solution Explorer, and click `Build`.

<img src = "https://github.com/user-attachments/assets/51ffb47e-ee83-49fa-9d1d-96e71a1da47e" width="30%" height="30%">

Then, you can find the library file and `header` folder like the screenshot below.

<img src = "https://github.com/user-attachments/assets/5516a580-7d03-4a56-8659-94e4cfa36e83" width="30%" height="30%">

---

(5) Right-click `Test Console` project in Solution Explorer, and click `Set as Startup Project`.

<img src = "https://github.com/user-attachments/assets/08ad36ea-7a05-4c92-930a-058c986b5c10" width="30%" height="30%">

After that, you can see the change that `Test Console` becomes bold and `TOC_Star_Project` becomes not bold in Solution Explorer.

<img src = "https://github.com/user-attachments/assets/26b071f5-ab6a-4ba8-b717-b97d8ae919c9" width="30%" height="30%">

---

(6) Run the project (click `F5`), and check the test console.

<img src = "https://github.com/user-attachments/assets/49cde410-cf5d-4f5e-bac1-baa983d9a861" width="30%" height="30%">

