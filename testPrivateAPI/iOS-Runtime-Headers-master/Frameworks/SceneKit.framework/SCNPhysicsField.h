/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _active;
    unsigned int  _categoryBitMask;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _direction;
    BOOL  _exclusive;
    float  _falloffExponent;
    struct c3dPhysicsField { int (**x1)(); struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; float x3; float x4; float x5; unsigned int x6; bool x7; bool x8; bool x9; bool x10; float x11; } * _field;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _halfExtent;
    float  _minimumDistance;
    SCNNode * _node;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _offset;
    int  _scope;
    float  _strength;
    BOOL  _usesEllipsoidalExtent;
    SCNPhysicsWorld * _world;
}

@property (getter=isActive, nonatomic) BOOL active;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } direction;
@property (getter=isExclusive, nonatomic) BOOL exclusive;
@property (nonatomic) float falloffExponent;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } halfExtent;
@property (nonatomic) float minimumDistance;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } offset;
@property (nonatomic) int scope;
@property (nonatomic) float strength;
@property (nonatomic) BOOL usesEllipsoidalExtent;

+ (float)_displayScaleFactor;
+ (void)_setDisplayScaleFactor:(float)arg1;
+ (id)customFieldWithEvaluationBlock:(id /* block */)arg1;
+ (id)dragField;
+ (id)electricField;
+ (id)field;
+ (id)linearGravityField;
+ (id)magneticField;
+ (id)noiseFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2;
+ (id)radialGravityField;
+ (id)springField;
+ (BOOL)supportsSecureCoding;
+ (id)turbulenceFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2;
+ (id)vortexField;

- (void)_commonInit;
- (struct c3dPhysicsField { int (**x1)(); struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; float x3; float x4; float x5; unsigned int x6; bool x7; bool x8; bool x9; bool x10; float x11; }*)_createField;
- (struct c3dPhysicsField { int (**x1)(); struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; float x3; float x4; float x5; unsigned int x6; bool x7; bool x8; bool x9; bool x10; float x11; }*)_handle;
- (id)_owner;
- (void)_removeOwner;
- (void)_setOwner:(id)arg1;
- (void)_setWorld:(id)arg1;
- (void)_setupCommonProperties;
- (void)_willRemoveFromPhysicsWorld;
- (unsigned int)categoryBitMask;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct SCNVector3 { float x1; float x2; float x3; })direction;
- (void)encodeWithCoder:(id)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })evalAtLocation:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (float)falloffExponent;
- (struct SCNVector3 { float x1; float x2; float x3; })halfExtent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isActive;
- (BOOL)isExclusive;
- (float)minimumDistance;
- (struct SCNVector3 { float x1; float x2; float x3; })offset;
- (int)scope;
- (void)setActive:(BOOL)arg1;
- (void)setCategoryBitMask:(unsigned int)arg1;
- (void)setDirection:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setExclusive:(BOOL)arg1;
- (void)setFalloffExponent:(float)arg1;
- (void)setHalfExtent:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setMinimumDistance:(float)arg1;
- (void)setOffset:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setScope:(int)arg1;
- (void)setStrength:(float)arg1;
- (void)setUsesEllipsoidalExtent:(BOOL)arg1;
- (float)strength;
- (BOOL)supportsDirection;
- (BOOL)supportsOffset;
- (BOOL)usesEllipsoidalExtent;

@end