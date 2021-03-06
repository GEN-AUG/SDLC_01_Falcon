##                                                                      PROJECT REPORT

# ***Rubik's Cube Solver***

## ABSTRACT
The Rubik's Cube is a 3-D combination puzzle invented in 1974 by Hungarian sculptor and professor of architecture ***Ernő Rubik***. Originally called the Magic Cube, the puzzle was licensed by Rubik to be sold by Ideal Toy Corp. in 1980 via businessman Tibor Laczi and Seven Towns founder Tom Kremer. Rubik's Cube won the 1980 German Game of the Year special award for Best Puzzle. As of January 2009, 350 million cubes had been sold worldwide, making it the world's bestselling puzzle game and bestselling toy.
In this project, the user is able to provide colors present in the rubik's cube as input. Based on the color information (input) provided by the user, a small check is done on whether the colors provided is valid or invalid. If all the colors provided by the user is valid then the steps to solve the rubik's cube will be displayed using which the rubik's cube can be solved.



|PS No.|Name|
|:-------|:------------|
|99005677 |Nikhil Nevin Vas |
|99005655 |Vinay B C |
|99005642 |N Namratha Reddy |
|99005698 |Sampanna T |
|99005639 |Harshitha M S |
|99005686 |Hamsa G |
|99005675 |Shruthi Suresh |
|99005696 |Dibyanshu Gupta |
|99005697 |Chandippa Sai Ram |
|99005692 |Kausikaa B |
|99005643 |Uttam R |



## FOLDER STRUCTURE
|Folder|Description|
|:-----|:----------|
|1_Requirements|Documents detailing and research|
|2_Architecture|Documents regarding design details|
|3_Implementation|Complete code and documentation|
|4_TestPlanAndOutput|Documents with test plan and procedure|
|5_Report|Project Report|
|6_ImagesAndVideos|Project output and videos|

## INTRODUCTION
In this project the user is able to provide colors present in the rubik's cube as input. Based on the color information provided by the user a small check is done, on whether the colors provided is valid or not. If all the colors provided by the user is valid then the number of steps required to solve the rubik's cube will be displayed using which the rubik's cube can be solved.

![image](https://user-images.githubusercontent.com/65846052/130062337-a520132d-b01b-4328-a85b-b0d02f9085d2.png)


## OBJECTIVE 
The main objectives of this project are: 
* To solve a rubik's cube using beginners method.
* To perform operations on rubik's cube and display the results.

## SWOT ANALYSIS
![SWOT](https://github.com/GEN-AUG/SDLC_01_Falcon/blob/main/1_Requirements/swot.jpg)

## ***4 W's and 1 H***
## Who
Anyone who doesn't know how to solve the Rubik's cube can use this project.
## What
This project is concerned about solving the Rubik's cube by using layer by layer method.
## When 
Whenever there is an unsolved Rubik's cube this project helps in solving it.
## Why
As this project uses beginner's algorithm it can be easy to teach beginners who does not know how to solve it.
## How
Implemented using structure, pointers, enum and other functionalities of C.

Basic requirements that are very essential are:
* A rubik's cube application or a real rubik's cube.
* gcc compiler with a good system.
* Any of the two linux/windows.

## HIGH LEVEL REQUIREMENTS:

|ID|DESCRIPTION|CATEGORY|STATUS|
|:-----|:--------------------------------|:----------------|:----------|
|HR01|User shall be able to provide colors present in the rubik’s cube.|Technical|Implemented|
|HR02|User shall be able to solve a Rubik’s cube from any starting condition.|Technical|Implemented|
|HR03|User shall be able to see all the steps needed to solve the rubik's cube along with the colors displayed on the console.|Technical|Implemented|
|HR04|User shall be able to solve the Rubik's cube layer by layer.|Technical|Implemented
|HR05|User should be able to solve the cube in minimum number of steps.|Technical|Future|
|HR06|Displaying a message while the program is figuring out the solution would greatly improve the ease of use|Scenario|Future|
|HR07|Adding an option to view general Rubik's cube algorithms which will increase the uses of solving it easily.|Technical|Future|

## LOW LEVEL REQUIREMENTS:

### VALIDATION
|ID|FUNCTIONS|DESCRIPTION|HLR ID|STATUS|
|:-------|:-------|:-------|:-------|:-------|
|LR01|isNodeValid|checks if all the Nodes entered by the user is valid or not|HR01|Implemented|
|LR02|isRubiksCubeValid|checks if the entered colors of rubiks cube have 6 colors where 9 are of same suit|HR01|Implemented|

### BASIC OPERATIONS
|ID|FUNCTIONS|DESCRIPTION|HLR ID|STATUS|
|:-------|:-------|:-------|:-------|:-------|
|LR03|rotateFront|performs rotate operation on the front layer|HR02_03|Implemented|
|LR04|rotateMiddle|performs rotate operation on the middle layer|HR02_03|Implemented|
|LR05|rotateBack|performs rotate operation on the back layer|HR02_03|Implemented|
|LR06|upHorizontal|performs horizontal motion on upper layer|HR02_03|Implemented|
|LR07|middleHorizontal|performs horizontal motion on the middle layer|HR02_03|Implemented|
|LR08|downHorizontal|performs horizontal motion on the down layer|HR02_03|Implemented|
|LR09|leftVertical|performs vertical motion on the left layer|HR02_03|Implemented|
|LR10|middleVertical|performs vertical motion on the middle layer|HR02_03|Implemented|
|LR11|rightVertical|performs vertical motion on the right layer|HR02_03|Implemented|

### ALGORITHMS
|ID|FUNCTIONS|DESCRIPTION|HLR ID|STATUS|
|:-------|:-------|:-------|:-------|:-------|
|LR12|L|This algorithm is used to solve a corner piece while solving layer1 and also used to solve corner piece at the end|HR04|Implemented|
|LR13|layer2|This algorithm is used to solve the second layer of rubik's cube |HR04|Implemented|
|LR14|twistFront|This algorithm is used to create a plus mark at the top|HR04|Implemented|
|LR15|upTwist|This algorithm is used to align the edge pieces of the top layer|HR04|Implemented|
|LR16|corner|algorithm is used to solve the corner pieces of the top layer|HR04|Implemented|

### SOLUTION
|ID|FUNCTIONS|DESCRIPTION|HLR ID|STATUS|
|:-------|:-------|:-------|:-------|:-------|
|LR17|plusBottom|creates a plus mark at the bottom|HR03|Implemented|
|LR18|layerFirst|completes the first layer|HR03|Implemented|
|LR19|layerSecond|completes the second layer if first layer is complete|HR03|Implemented|
|LR20|plusTop|cretes a plus mark at the top after solving first and second layer|HR03|Implemented|
|LR21|alignCenter|aligns all the centers of the top layer|HR03|Implemented|
|LR20|cornerAlign|positions the corner pieces(at the top) at the right location|HR03|Implemented|
|LR22|layerThird|solves the corner pieces|HR03|Implemented|
|LR23|solveAll|uses all the above functions to solve the rubik's cube|HR03|Implemented|

## Design
## Behavioural Diagrams 
## Use Case Diagram:
![Use Case Diagram](https://github.com/GEN-AUG/SDLC_01_Falcon/blob/main/2_Architecture/Behavioural%20Diagram/useCase.jpg)
## Activity Diagram:
![Activity Diagram](https://github.com/GEN-AUG/SDLC_01_Falcon/blob/main/2_Architecture/Behavioural%20Diagram/activityDiagram.jpg)
## Sequence Diagram:
![Sequence Diagram](https://github.com/GEN-AUG/SDLC_01_Falcon/blob/main/2_Architecture/Behavioural%20Diagram/sequenceDiagram.jpg)

## Structural Diagrams
## Component Diagram:
![Component](https://user-images.githubusercontent.com/80764759/130316980-9ddf12aa-e7cd-46e8-bbda-c09abc0fe70e.png)
## Class Diagram:
![Class Diagram](https://user-images.githubusercontent.com/80383788/130349328-28266f41-2723-4b41-8f0d-f3b5d8d29aca.png)


### Input format:
For normal mode input the colors as asked.

For dev mode, edit the string of setRubixCubeAtOnce function as follows:

* The axis is shown below
* Each piece is considered as a node.
* There are total of 26 nodes.
* Input starts from Front Top Left corner(0,0,0).
* Input ends at the Back Bottom Right corner(2,2,2).
* i.e (0,0,0), (0,0,1) ...  (0,2,2), (1,0,0) ...  (1,2,2), (2,0, 0) ... (2,2,2)  
* For Front and Back layer nodes( i = 0 and i = 2 ), at each node enter the facing colour, then the up/bottom colour( depending on position of node ), and finally the left/right colour.
* For middle layer ( i = 1 ), enter the up/bottom colour, then the left/right colour.

![Axis](https://github.com/GEN-AUG/SDLC_01_Falcon/blob/main/2_Architecture/RubixCubeAxis.png)

## Test Plan and Output:

## High Level Test Plan

| Test ID | Description | Exp I/P | Exp O/P |	Actual Output | Type of Test |
| --- | --- | --- | --- | --- | --- |
| H_01 | Check if the code is working as expected, by considering the test cases | Jumbled cube | Solved Cube | Solved Cube | Scenario Based |
| H_02 | Check if the system handles boundary conditions | Invalid Cube | Error | Error | Boundary Based |
| H_03 | Check if cross is obtained in first layer | Jumbled Cube | Cross obtained | Cross obtained | Integration Based |
| H_04 | Check if first layer is solved| Solved Cross Cube | First layer solved cube | First layer solved cube | Integration Based |
| H_05 | Check if second layer is solved | First layer solved cube | Second layer solved cube | Second layer solved cube | Integration Based |
| H_06 | Check if top layer cross is obtained | Second layer solved cube | Top layer cross obtained | Top layer cross obtained | Integration Based |
| H_07 | Check if top layer edges are aligned | Top layer cross obtained cube| Top layer edges aligned | Top layer edges aligned | Integration Based |
| H_08 | Check if top layer corners are aligned | Top layer edges aligned cube | Top layer corners aligned | Top layer corners aligned | Integration Based |
| H_09 | Check if top layer is solved | Top layer corners aligned | Solved cube | Solved cube | Integration Based |



## Low Level Test Plan 

| Test ID | Function name | Description | Return type | Valid Input Range |	Output Range | Output for out of range/invalid inputs | Type of Test | Status (PASS/FAIL) |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
| L_01 | is_i_j_k_valid | checks if the given i,j,k value is valid or not | boolean | i,j,k value between 0 and 2 | 0 and 1 | 0 | unit test | PASS |
| L_02 | isIndexValid | checks if the given index is valid or not for a given i,j,k value| boolean | i,j,k,index value between 0 and 2 | 0 and 1| 0 | unit test | PASS |
| L_03 | isPositionValid | checks if the given position is valid or not | boolean | position value can be FRONT, BACK, UP, DOWN, LEFT, RIGHT | 0 and 1 | 0 | unit test | PASS |
| L_04 | getSize | returns size for given i,j,k values | int |  i,j,k value between 0 and 3 | 0 to 2 | -1 | unit test | PASS |
| L_05 | getPosition | returns position for given i,j,k,index values | string | i,j,k,index value between 0 and 2 | FRONT, UP, LEFT, RIGHT, BACK, DOWN  | NULL | unit test | PASS |
| L_06 | getLocation | returns location for given i,j,k values | int | i,j,k value between 0 and 2 | all possible locations of rubik's cube | NULL | unit test | PASS |
| L_07 | get_index | returns index value for given i,j,k,position values | int | i,j,k value between 0 and 2  | 0 to 2 | -1 | unit test | PASS |
| L_08 | isNodeValid | checks whether all the Nodes entered by the user is valid or not | boolean | N.A(colors from the user) | 0 and 1 | 0 | unit test | PASS |
| L_09 | isRubiksCubeValid | checks if the entered colors of rubiks cube have 6 colors where 9 are of same suit | boolean | N.A(colors from the user) | 0 and 1 | 0 | unit test | PASS |

### BADGES

|Build    |Static Code Analysis |Dynamic Code Analysis|Code Quality     |Unity   |Git Inspector|
|:--------|:--------|:--------|:----------------|:--------|:-----------|
|[![C/C++ CI](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/c_build.yml/badge.svg)](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/c_build.yml)    |    [![cppcheck-action](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/cppcheck-action.yml/badge.svg)](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/cppcheck-action.yml)   |    [![Dynamic Code Check](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/dynamic.yml/badge.svg)](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/dynamic.yml)    |  [![Codacy Badge](https://app.codacy.com/project/badge/Grade/8a6f16c953994a68a5c039fa6f2a0c17)](https://www.codacy.com/gh/GEN-AUG/SDLC_01_Falcon/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=GEN-AUG/SDLC_01_Falcon&amp;utm_campaign=Badge_Grade) |[![Unit testing](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/unit-test.yml/badge.svg)](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/unit-test.yml)|[![Contribution Check - Git Inspector](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/GEN-AUG/SDLC_01_Falcon/actions/workflows/gitinspector.yml)|

# Images and videos related to the project 


## Fixed Input

### Main Function Image 

#### Description:
In this, we are giving Fixed input to the main file and executing the program, where we will be getting the steps to solve the rubik's cube.
<br>

##### Fixed_Input

<img width="960" alt="Main_Inbuilt_Input" src="https://user-images.githubusercontent.com/43474770/130635066-10ffde29-8fdd-4401-9f4f-78c9b796321c.PNG">
<br>
<br>

### Input Images

#### Description: 
The input pattern provided to the main file is "GREEN RED WHITE GREEN ORANGE GREEN ORANGE WHITE ORANGE YELLOW BLUE BLUE ORANGE YELLOW ORANGE GREEN GREEN RED BLUE WHITE RED YELLOW RED YELLOW WHITE BLUE ORANGE RED GREEN YELLOW WHITE BLUE YELLOW BLUE ORANGE YELLOW WHITE GREEN RED GREEN YELLOW RED BLUE GREEN WHITE ORANGE BLUE ORANGE WHITE WHITE RED YELLOW RED BLUE".
<br>

##### Input_1

<img width="960" alt="Input-1" src="https://user-images.githubusercontent.com/43474770/130634636-cbe5d6a3-f792-4107-9421-151a6f8a4431.PNG">


##### Input_2

<img width="960" alt="Input-2" src="https://user-images.githubusercontent.com/43474770/130634951-d45b1e5d-2269-47a9-9b88-e1a9addf4f54.PNG">
<br>
<br>

### Output Images

#### Description:
The Output obtained, are the steps required to solve the given scrambled rubik's cube. If done accordingly we can have a completely solved rubik's cube.
Order followed in the Layer by layer approach:
1.Plus in the bottom layer
2.First layer
3.Plus in the top layer
4.Align the center
5.Align the corner
6.Third layer
<br>

##### Output_1

<img width="960" alt="Output-1" src="https://user-images.githubusercontent.com/43474770/130636509-216abbba-8217-4de7-90f9-251609be5868.PNG">


##### Output_2

<img width="960" alt="Output-2" src="https://user-images.githubusercontent.com/43474770/130636749-703852ca-f389-4897-b31b-4fb8dfbcd24f.PNG">


##### Output_3

<img width="960" alt="Output-3" src="https://user-images.githubusercontent.com/43474770/130636833-a444b020-a53c-4ce3-a44f-5ae7f8072de2.PNG">


##### Output_4

<img width="960" alt="Output-4" src="https://user-images.githubusercontent.com/43474770/130636886-96db325a-9311-4782-b89d-6ae318fcc0e8.PNG">


##### Output_5

<img width="960" alt="Output-5" src="https://user-images.githubusercontent.com/43474770/130637055-d103ae08-2d57-40f5-ba53-be30eb6f1f77.PNG">


##### Output_6

<img width="960" alt="Output-6" src="https://user-images.githubusercontent.com/43474770/130637229-912eec5c-9154-45b1-a39d-0c4cfe09e361.PNG">


##### Output_7

<img width="960" alt="Output-7" src="https://user-images.githubusercontent.com/43474770/130637303-518e4a52-5ae8-4f2b-ae11-0787cacf6fbb.PNG">


##### Output_8

<img width="960" alt="Output-8" src="https://user-images.githubusercontent.com/43474770/130637414-d07a5170-eeb4-464d-8fcc-f820e48dbf79.PNG">


##### Output_9

<img width="960" alt="Output-9" src="https://user-images.githubusercontent.com/43474770/130637467-cf9d2ff7-51d1-4adb-b650-26cbfb59ee22.PNG">


##### Output_10

<img width="960" alt="Output-10" src="https://user-images.githubusercontent.com/43474770/130637574-30cfedb0-6b96-4723-9fe2-f14c19bc58d1.PNG">


##### Output_11

<img width="960" alt="Output-11" src="https://user-images.githubusercontent.com/43474770/130637693-3213b14f-d3ec-49b9-93bf-ed7de84d06e0.PNG">

<br>
<br>

### User Input

#### Main function Image

##### Description:
 In this we are obtaining the input from the user and executing the program ,where we will be getting the steps to solve the rubik's cube.
 <br>

##### User_Input

<img width="960" alt="Main_User_Input" src="https://user-images.githubusercontent.com/43474770/130638210-0030bdde-6168-4e3c-84f5-f1a58e1885ee.PNG">
<br>
<br>


### Input Images

#### Description:
The input pattern provided to the rubik cube solver applicaion file is "GREEN RED WHITE GREEN ORANGE GREEN ORANGE WHITE ORANGE YELLOW BLUE BLUE ORANGE YELLOW ORANGE GREEN GREEN RED BLUE WHITE RED YELLOW RED YELLOW WHITE BLUE ORANGE RED GREEN YELLOW WHITE BLUE YELLOW BLUE ORANGE YELLOW WHITE GREEN RED GREEN YELLOW RED BLUE GREEN WHITE ORANGE BLUE ORANGE WHITE WHITE RED YELLOW RED BLUE".

### Output Images
#### Description:
The Output obtained, are the steps required to solve the given scrambled rubik's cube. If done accordingly we can have a completely solved rubik's cube.
Order followed in the Layer by layer approach:
1.Plus in the bottom layer
2.First layer
3.Plus in the top layer
4.Align the center
5.Align the corner
6.Third layer
<br>

##### Output_1

<img width="960" alt="Output-1" src="https://user-images.githubusercontent.com/43474770/130636509-216abbba-8217-4de7-90f9-251609be5868.PNG">


##### Output_2

<img width="960" alt="Output-2" src="https://user-images.githubusercontent.com/43474770/130636749-703852ca-f389-4897-b31b-4fb8dfbcd24f.PNG">


##### Output_3

<img width="960" alt="Output-3" src="https://user-images.githubusercontent.com/43474770/130636833-a444b020-a53c-4ce3-a44f-5ae7f8072de2.PNG">


##### Output_4

<img width="960" alt="Output-4" src="https://user-images.githubusercontent.com/43474770/130636886-96db325a-9311-4782-b89d-6ae318fcc0e8.PNG">


##### Output_5

<img width="960" alt="Output-5" src="https://user-images.githubusercontent.com/43474770/130637055-d103ae08-2d57-40f5-ba53-be30eb6f1f77.PNG">


##### Output_6

<img width="960" alt="Output-6" src="https://user-images.githubusercontent.com/43474770/130637229-912eec5c-9154-45b1-a39d-0c4cfe09e361.PNG">


##### Output_7

<img width="960" alt="Output-7" src="https://user-images.githubusercontent.com/43474770/130637303-518e4a52-5ae8-4f2b-ae11-0787cacf6fbb.PNG">


##### Output_8

<img width="960" alt="Output-8" src="https://user-images.githubusercontent.com/43474770/130637414-d07a5170-eeb4-464d-8fcc-f820e48dbf79.PNG">


##### Output_9

<img width="960" alt="Output-9" src="https://user-images.githubusercontent.com/43474770/130637467-cf9d2ff7-51d1-4adb-b650-26cbfb59ee22.PNG">


##### Output_10

<img width="960" alt="Output-10" src="https://user-images.githubusercontent.com/43474770/130637574-30cfedb0-6b96-4723-9fe2-f14c19bc58d1.PNG">


##### Output_11

<img width="960" alt="Output-11" src="https://user-images.githubusercontent.com/43474770/130637693-3213b14f-d3ec-49b9-93bf-ed7de84d06e0.PNG">

<br>
<br>

## How to Build

![make](https://github.com/GEN-AUG/SDLC_01_Falcon/blob/main/3_Implementation/make.gif)





