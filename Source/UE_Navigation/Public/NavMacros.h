#pragma once

//如果位置发生了距离在min到max大小范围内的突变就限制其变化，系数为DelayCoefficient，系数越小变化就越平缓
#define DelayRangeMin 10.0
#define DelayRangeMax 2000.0
#define DelayCoefficient 0.050

//如果位置变化小于这个值就不变了
#define StillDistance 1 

//浮点0
#define FZero 1e-6

#define pi 3.141592654

#define LabelDistance "TextDistance"
