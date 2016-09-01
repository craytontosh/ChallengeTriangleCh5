//
//  main.c
//  Chapter 5 Challenge Triangle
//
//  Created by Crayton McIntosh on 8/16/16.
//  Copyright © 2016 Crayton McIntosh. All rights reserved.
//

#include <stdio.h>

const float triangleAngle = 180;

float remainingAngle(float angleA, float angleB){
    float angleC;
    angleC = ((triangleAngle - angleA) - angleB);
    
    return angleC;
}

int main(int argc, const char * argv[]) {
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}
