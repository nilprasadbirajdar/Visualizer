# Bezier Curve Implementation
## Overview
This C++ code provides an implementation of a cubic Bezier curve, which is a mathematical curve defined by four control points. The Bezier curve is commonly used in computer graphics and animation to create smooth and visually appealing paths.

## Files
Bezier.h: Header file containing the declaration of the Bezier class.
Bezier.cpp: Source file containing the implementation of the Bezier class methods.
pch.h: Precompiled header file.
Other dependencies: Ensure that you have necessary dependencies installed or included in your project.
Usage
To use the Bezier curve implementation, follow these steps:

Include the necessary headers in your project:
<pre>
```

bezierCurve.drawCurve(p0, p1, p2, p3, vertices, colors);
Integrate the generated vertices and colors into your rendering pipeline as needed.

### Notes
Ensure that the necessary dependencies are properly configured and included in your project.
The drawCurve method uses a parameter t varying from 0 to 1 with a step of 0.001 to calculate points along the curve. Adjust the step size as needed for your specific use case.
License
This code is provided under the [insert your chosen license here] license. See the LICENSE file for details.

Author
[Nil]
```
</pre>
