//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperation;

__attribute__((visibility("hidden")))
@interface __NSOperationQueueInternal : NSObject
{
    int __queueLock;
    NSOperation *__firstOperation;
    NSOperation *__lastOperation;
    NSOperation *__pendingFirstOperation;
    NSOperation *__pendingLastOperation;
    NSOperation *__firstPriOperation[5];
    NSOperation *__lastPriOperation[5];
    struct dispatch_queue_s *__pending_barrier;
    long long __maxNumOps;
    int __actualMaxNumOps;
    int __numExecOps;
    unsigned int __unused2;
    unsigned char __mainQ;
    unsigned char __suspended;
    unsigned char __overcommit;
    unsigned char __pad1[1];
    struct dispatch_queue_s *__dispatchQueue;
    char __nameBuffer[160];
}

- (void)finalize;
- (void)dealloc;
- (id)init;

@end

