//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSView;

@interface _DVTSlidingView : NSObject
{
    NSView *view;
    struct CGRect startFrame;
    struct CGRect endFrame;
    double startTime;
    double duration;
}

- (void).cxx_destruct;
- (struct CGRect)frameForTime:(double)arg1;
- (struct CGRect)endFrame;
- (id)initWithStartFrame:(struct CGRect)arg1 endFrame:(struct CGRect)arg2 duration:(double)arg3;

@end

