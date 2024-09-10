# Development Rule
|No|Name|
|---|---|
|1|[Develop](#Develop)|
|2|[Commit](#Commit)|
|3|[Branch and Pull request](#Branch-and-Pull-request)|
|4|[Workflow Summary](#Workflow-Summary)|

> [!Caution]
> Please read this document before you start your work. Keep in your mind that all information of this repository such as commits, pull requests is important, because they are estimated by the government.

# Develop
First of all, refer to [the caution and warning in "How to test?" part of README](https://github.com/TOC-Lab-POSTECH/Test/blob/main/README.md).
Moreover, you must follow the rules below.
- Your own filters for header files and source files may be already created in the project. You can create your own header and source files in your filter. If your own filter does not exist, request creating that, or create that and report by commit.
- When you develop something, you have to create your `namespace` for the declaration of variables, functions, classes, and etc. Otherwise, some errors about ambiguity occur if other developers use the same name.
- Until you request merging your branch, your all components must be in your namespace. Your namespace will be unpacked when managers refactor the whole codes of your subject.
- DO NOT TOUCH something that belongs to others.

---
# Commit
## When do you commit?
Please create a commit when your smallest task is done. For example, assume that you develop Kruskal's algorithm for MST. Then you may need to develop a disjoint set data structure for the subroutine of the algorithm. And, a disjoint set includes a push function and a get-id function. Then, you can create a commit after completely developing a push function, get-id function, a disjoint set data structure, and Kruskal's algorithm. Refer to [the commit message rule below](#Commit-Message). DO NOT create a commit after you develop all of the algorithms including developing a disjoint set.

If your task is done, then create a pull request.

## Commit Message
A commit consists of a summary and a description. The summary of a commit has to be simple, and you have to add the proper type of head following the table below.

|Head||
|---|---|
|FEAT|New function, class, etc|
|UPDATE|Change your code because of any reason not including debugging|
|DEBUG|Fix your code because of debugging|
|REFACTOR|Refactoring codes|

---
# Branch and Pull request
## Branch
Before starting the project about a subject such as 'PAU-VC for Tree', 'PAU-VC for interval graphs' and 'Clustering', the manager (e.g., Shinwoo An, Kyungjin Cho, Hyeonjun Shin) has to create a branch named as the name of the subject.

For developers, before you develop, you must request to your manager to create your own branch under the branch about your subject. For example, if you work on 'PAU-VC for tree', your manager will create your own branch under the branch named 'PAU-VC for tree'.

When your own branch is created, fork the repository on the branch. If you already fork this repository, then you have to change the branch to your own branch.

## Pull request
The writing rule for a pull request is free. However, you have to write a pull request appropriately. You have to describe your work in detail.

For managers, when you accept a pull request, you will create a new commit for merging the branch. Please DO NOT change the title of such a commit message, because the title will be automatically created and the title includes the link to the corresponding pull request. By the rules above, you will remove the branch after merging.

---
# Workflow Summary
Here, we describe the workflow.

|No|Manager|Developer|
|---|---|---|
|0|Create a branch for a subject||
|1||Fork the repository|
|2||Request the manager to create your own branch|
|3|Create a branch for a developer||
|4||Develop (Carefully commit)|
|5||After completely developing the tasks, create a pull request|
|6|Check and merge (, and remove branch)||
|7|If your subject is done, merge to the `main` branch||
|8|\[Only for the chef manager\] Refactoring all codes after a bundle of subjects is completely done.||
