//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSScrollingBehavior.h>

@class NSScrollView, _NSPeriodicInvoker;

__attribute__((visibility("hidden")))
@interface NSScrollingBehaviorLegacy : NSScrollingBehavior
{
    struct __SblFlags {
        unsigned int inScrollGesture:1;
        unsigned int momentumScrollInProgress:1;
        unsigned int ignoreMomentumScrolls:1;
        unsigned int momentumScrollPreventsForwarding:1;
        unsigned int processingScrollMayBegin:1;
        unsigned int acceleratedScrollPreventsForwarding:1;
        unsigned int RESERVED:26;
    } _flags;
    struct CGSize _overflowScrollDelta;
    struct CGSize _stretchScrollForce;
    struct CGSize _momentumVelocity;
    double _lastMomentumScrollTimeStamp;
    id _endGestureMonitor;
    id _mouseDownMonitor;
    NSScrollView *_scrollViewRefForCarbonApps;
    _NSPeriodicInvoker *_snapBackAnimator;
}

@property(retain) NSScrollView *scrollViewRefForCarbonApps; // @synthesize scrollViewRefForCarbonApps=_scrollViewRefForCarbonApps;
@property id endGestureMonitor; // @synthesize endGestureMonitor=_endGestureMonitor;
- (void)_latchAcceleratedScrollEventsToScrollView:(id)arg1;
- (void)_latchMomentumScrollEventsToScrollView:(id)arg1;
- (void)automateLiveScrollOfScrollView:(id)arg1;
- (void)_snapRubberBandWhenMouseReleasedFromTrackingLoopOfScrollView:(id)arg1;
- (void)snapRubberBandOfScrollView:(id)arg1;
- (void)_scrollView:(id)arg1 snabRubberBandWithVelocity:(struct CGSize)arg2;
- (void)_endSnapBackAnimationIfNeededForScrollView:(id)arg1;
- (void)scrollView:(id)arg1 scrollWheelWithEvent:(id)arg2;
- (void)_scrollView:(id)arg1 discreetScrollWithEvent:(id)arg2;
- (void)_scrollView:(id)arg1 smoothScrollWithEvent:(id)arg2;
- (void)scrollView:(id)arg1 endScrollGestureDueToReason:(id)arg2;
- (id)scrollView:(id)arg1 responderToForwardScrollEvents:(id)arg2;
- (BOOL)isInScrollGesture;
- (void)dealloc;

@end

