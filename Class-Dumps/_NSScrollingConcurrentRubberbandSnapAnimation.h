//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSScrollingConcurrentVBLPreprocessFilter.h>

__attribute__((visibility("hidden")))
@interface _NSScrollingConcurrentRubberbandSnapAnimation : _NSScrollingConcurrentVBLPreprocessFilter
{
    struct CGPoint _lastSetOrigin;
    struct CGPoint _initialOrigin;
    struct CGPoint _initialVelocity;
    struct CGSize _initialStretchAmount;
    double _initialTimestamp;
}

- (void)scrollingVBLMonitor:(id)arg1 synchronizeForVBLSerialNumber:(unsigned long long)arg2 timestamp:(double)arg3 updateDuration:(double)arg4;
- (void)dealloc;
- (id)initWithInitialOrigin:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 stretch:(struct CGSize)arg3;

@end

