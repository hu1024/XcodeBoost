//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSAnimationDelegate.h"

@class DVTSourceTextView, DVTWeakInterposer, NSAnimation;

@interface DVTTextVisualization : NSObject <NSAnimationDelegate>
{
    DVTWeakInterposer *_textView_dvtWeakInterposer;
    NSAnimation *_fadeAnimation;
    double _opacity;
}

@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
- (void).cxx_destruct;
- (void)drawUnderTextInRect:(struct CGRect)arg1;
- (void)drawOverTextInRect:(struct CGRect)arg1;
@property(readonly) struct CGRect bounds;
- (void)animationDidEnd:(id)arg1;
- (void)fadeToOpacity:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;
@property(retain) DVTSourceTextView *textView;

@end

