//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSInternalQueueController : NSObject
{
    struct dispatch_queue_s *_queue;
}

+ (id)sharedInstance;
- (struct dispatch_queue_s *)queue;
- (void)assertQueueIsNotCurrent;
- (void)assertQueueIsCurrent;
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(BOOL)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

