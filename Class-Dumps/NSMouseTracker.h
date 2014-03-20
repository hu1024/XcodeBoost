//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSEvent, NSView;

@interface NSMouseTracker : NSObject
{
    struct CGPoint _initialPoint;
    struct CGPoint _previousPoint;
    struct CGPoint _currentPoint;
    NSEvent *_initialEvent;
    NSEvent *_previousEvent;
    NSEvent *_currentEvent;
    NSView *_view;
    id _delegate;
    double _delay;
    double _interval;
    int _eventMask;
    unsigned long long _trackingConstraint;
    unsigned int _trackingConstraintKeyMask;
    struct __NSMouseTrackerDelegateRespondTo {
        unsigned int startTracking:1;
        unsigned int continueTracking:1;
        unsigned int stopTracking:1;
        unsigned int constrainPoint:1;
        unsigned int handlePeriodicEvents:1;
        unsigned int reserved:27;
    } _delegateRespondTo;
    void *_NSMouseTrackerReserved1;
    void *_NSMouseTrackerReserved2;
    void *_NSMouseTrackerReserved3;
}

- (id)previousEvent;
- (id)initialEvent;
- (struct CGPoint)initialPoint;
- (struct CGPoint)previousPoint;
- (struct CGPoint)currentPoint;
- (id)delegate;
- (id)view;
- (unsigned long long)trackingConstraintKeyMask;
- (void)setTrackingConstraintKeyMask:(unsigned long long)arg1;
- (unsigned long long)trackingConstraint;
- (void)setTrackingConstraint:(unsigned long long)arg1;
- (BOOL)stopTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithEvent:(id)arg1;
- (BOOL)startTrackingWithEvent:(id)arg1 inView:(id)arg2 withDelegate:(id)arg3;
- (BOOL)trackWithEvent:(id)arg1 inView:(id)arg2 withDelegate:(id)arg3;
- (id)nextEventForWindow:(id)arg1;
- (void)_releaseEvents;
- (long long)eventMask;
- (void)setEventMask:(long long)arg1;
- (void)_setDelegate:(id)arg1;
- (void)setPeriodicDelay:(double)arg1 interval:(double)arg2;
- (double)delay;
- (double)interval;
- (struct CGPoint)_constrainPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGPoint)_getLocalPoint:(id)arg1;
- (id)init;

@end

