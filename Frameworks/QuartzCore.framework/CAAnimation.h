/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */



@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSCoding, NSCopying, CAMediaTiming, CAAction>
{
    void *_attr;
    NSUInteger _flags;
}

@property NSInteger _mapkit_ID;
@property(readonly) BOOL _mapkit_isScrollingAnimation;
@property(readonly) BOOL _mapkit_isHeadingRotationAnimation;
@property(getter=isEnabled) BOOL enabled;
@property double frameInterval;
@property(retain) CAMediaTimingFunction *timingFunction;
@property(retain) id delegate;
@property(getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property(copy) NSString *fillMode;
@property BOOL autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property double timeOffset;
@property float speed;
@property double duration;
@property double beginTime;

+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)animation;
+ (BOOL)CA_encodePropertyConditionally:(NSUInteger)arg1 type:(NSInteger)arg2;
+ (int (*)())CA_setterForType:(NSInteger)arg1;
+ (int (*)())CA_getterForType:(NSInteger)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)properties;
+ (id)defaultValueForKey:(id)arg1;

- (float)repeatCount;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (double)beginTime;
- (void)setTimeOffset:(double)arg1;
- (BOOL)autoreverses;
- (id)fillMode;
- (BOOL)isRemovedOnCompletion;
- (id)timingFunction;
- (void)setSpeed:(float)arg1;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (id)debugDescription;
- (double)repeatDuration;
- (void)setRepeatDuration:(double)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setRemovedOnCompletion:(BOOL)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setFrameInterval:(double)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setAutoreverses:(BOOL)arg1;
- (void)setFillMode:(id)arg1;
- (float)speed;
- (id)valueForKeyPath:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setDuration:(double)arg1;
- (double)duration;
- (id)valueForKey:(id)arg1;
- (BOOL)isEnabled;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (double)timeOffset;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (BOOL)removedOnCompletion;
- (double)frameInterval;
- (BOOL)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; float x3; struct Timing {} *x4; struct Vector {} *x5; void *x6; NSUInteger x7; NSUInteger x8; }*)arg1 layer:(id)arg2;
- (void)setDefaultDuration:(double)arg1;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (NSUInteger)_propertyFlagsForLayer:(id)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (BOOL)_mapkit_isScrollingAnimation;
- (BOOL)_mapkit_isHeadingRotationAnimation;
- (void)set_mapkit_ID:(NSInteger)arg1;
- (NSInteger)_mapkit_ID;

@end