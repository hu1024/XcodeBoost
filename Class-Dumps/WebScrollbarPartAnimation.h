//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSAnimation.h>

__attribute__((visibility("hidden")))
@interface WebScrollbarPartAnimation : NSAnimation
{
    struct Scrollbar *_scrollbar;
    struct RetainPtr<id> _scrollbarPainter;
    int _featureToAnimate;
    double _startValue;
    double _endValue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setCurrentProgress:(float)arg1;
- (void)setEndValue:(double)arg1;
- (void)setStartValue:(double)arg1;
- (void)startAnimation;
- (id)initWithScrollbar:(struct Scrollbar *)arg1 featureToAnimate:(int)arg2 animateFrom:(double)arg3 animateTo:(double)arg4 duration:(double)arg5;

@end

