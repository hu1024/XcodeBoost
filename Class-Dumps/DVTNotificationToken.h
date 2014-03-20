//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DVTCancellable.h"

@class DVTStackBacktrace;

@interface DVTNotificationToken : NSObject <DVTCancellable>
{
    id _observer;
    id _observedObject;
    CDUnknownBlockType _cancellationBlock;
    DVTStackBacktrace *_creationBacktrace;
    void *_keepSelfAliveUntilCancellationRef;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (id)initWithObserver:(id)arg1 observedObject:(id)arg2 cancellationBlock:(CDUnknownBlockType)arg3;
- (void)setCancellationBlock:(CDUnknownBlockType)arg1;

@end

