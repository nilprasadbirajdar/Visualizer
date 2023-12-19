# Hermite Curve Implementation
## Overview
This C++ code provides an implementation of a cubic Hermite curve, a mathematical curve defined by four control points. The Hermite curve interpolation is commonly used in computer graphics and animation to create smooth paths with specified tangent vectors at each control point.

## Files
Hermite.h: Header file containing the declaration of the Hermite class.
Hermite.cpp: Source file containing the implementation of the Hermite class methods.
pch.h: Precompiled header file.
Other dependencies: Ensure that you have necessary dependencies installed or included in your project.
Usage
To use the Hermite curve implementation, follow these steps:

Include the necessary headers in your project:
```


Hermite Curve Formula
The Hermite curve is calculated using the following formula:

x
=
blend1
⋅
inP0.x()
+
blend2
⋅
(
inP1.x()
−
inP0.x()
)
+
blend3
⋅
inP2.x()
+
blend4
⋅
(
inP3.x()
−
inP2.x()
)
x=blend1⋅inP0.x()+blend2⋅(inP1.x()−inP0.x())+blend3⋅inP2.x()+blend4⋅(inP3.x()−inP2.x())
y
=
blend1
⋅
inP0.y()
+
blend2
⋅
(
inP1.y()
−
inP0.y()
)
+
blend3
⋅
inP2.y()
+
blend4
⋅
(
inP3.y()
−
inP2.y()
)
y=blend1⋅inP0.y()+blend2⋅(inP1.y()−inP0.y())+blend3⋅inP2.y()+blend4⋅(inP3.y()−inP2.y())
z
=
blend1
⋅
inP0.z()
+
blend2
⋅
(
inP1.z()
−
inP0.z()
)
+
blend3
⋅
inP2.z()
+
blend4
⋅
(
inP3.z()
−
inP2.z()
)
z=blend1⋅inP0.z()+blend2⋅(inP1.z()−inP0.z())+blend3⋅inP2.z()+blend4⋅(inP3.z()−inP2.z())
```
Notes
Ensure that the necessary dependencies are properly configured and included in your project.
The drawCurve method uses a parameter t varying from 0 to 1 with a step of 0.001 to calculate points along the Hermite curve. Adjust the step size as needed for your specific use case.
