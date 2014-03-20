//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface BU_TBUStarfieldShadowLayer : CALayer
{
    struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef>> _shadowImage;
    struct CGRect _shadowImageBounds;
    struct CGRect _windowContentBounds;
    struct vector<TNSRef<CALayer *>, std::__1::allocator<TNSRef<CALayer *>>> _layers;
}

@property(nonatomic) struct CGRect shadowImageBounds; // @synthesize shadowImageBounds=_shadowImageBounds;
@property(nonatomic) struct CGRect windowContentBounds; // @synthesize windowContentBounds=_windowContentBounds;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect)arg1;
- (void)setShadowimageBounds:(struct CGRect)arg1;
@property(nonatomic) struct CGImage *shadowImage;
- (void)updateLayers;
- (struct CGRect)frameForPart:(int)arg1;
- (int)horizontalPosition:(int)arg1;
- (int)verticalPosition:(int)arg1;

@end

