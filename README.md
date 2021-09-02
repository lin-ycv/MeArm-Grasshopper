# MeArm-Grasshopper
IK solver for MeArm.


## [Kangaroo Method](https://github.com/lin-ycv/MeArm-Grasshopper/blob/main/meArm_InverseKinematics_K2.gh)
Kinematics is solved thru simulation (Kangaroo), therefore some inaccuracies is to be expected. This shouldn't be an issue, since meArm isn't highly accurate to begin with.


## [Trigonometric Method](https://github.com/lin-ycv/MeArm-Grasshopper/blob/main/meArm_InverseKinematics.gh)
Kinematics is solved thru trigonometry, and proper mechanical limit checks are implemented.


## Custom MeArm
To use a custom sized meArm, CAD your own 2D skeleton by referencing this:
![](https://github.com/lin-ycv/MeArm-Grasshopper/blob/main/meArmSkeleton.png)
