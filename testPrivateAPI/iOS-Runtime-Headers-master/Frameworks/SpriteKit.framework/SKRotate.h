/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKRotate : SKAction {
    struct SKCRotate { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; double x6; double x7; float x8; float x9; double x10; bool x11; bool x12; id /* block */ x13; int x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; } * _mycaction;
}

+ (id)rotateByAngle:(float)arg1 duration:(double)arg2;
+ (id)rotateByX:(float)arg1 duration:(double)arg2;
+ (id)rotateByX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4;
+ (id)rotateByY:(float)arg1 duration:(double)arg2;
+ (id)rotateToAngle:(float)arg1 duration:(double)arg2;
+ (id)rotateToAngle:(float)arg1 duration:(double)arg2 shortestUnitArc:(BOOL)arg3;
+ (id)rotateToX:(float)arg1 duration:(double)arg2;
+ (id)rotateToX:(float)arg1 y:(float)arg2 z:(float)arg3 duration:(double)arg4;
+ (id)rotateToY:(float)arg1 duration:(double)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end