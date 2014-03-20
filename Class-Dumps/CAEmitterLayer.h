//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSArray, NSString;

@interface CAEmitterLayer : CALayer
{
}

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)_shouldFinalizeOnMainThread;
+ (id)defaultValueForKey:(id)arg1;
+ (id)CA_attributes;
@property unsigned int seed;
@property BOOL preservesDepth;
@property(copy) NSString *renderMode;
@property float spin;
@property float scale;
@property float velocity;
@property double emitterDepth;
@property struct CGSize emitterSize;
@property double emitterZPosition;
@property struct CGPoint emitterPosition;
@property(copy) NSString *emitterMode;
@property(copy) NSString *emitterShape;
@property float lifetime;
@property float birthRate;
@property(copy) NSArray *emitterCells;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (void)_colorSpaceDidChange;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (void)reloadValueForKeyPath:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
@property double cullMaxZ;
@property double cullMinZ;
@property struct CGRect cullRect;
@property float spinBias;
@property float emitterDuration;
@property struct CGPath *emitterPath;
@property(copy) NSArray *emitterBehaviors;

@end

