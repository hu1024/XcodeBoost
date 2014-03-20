//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class DVTDispatchLock, NSError, NSMutableArray;

@interface DVTOperation : NSOperation
{
    CDUnknownBlockType _block;
    NSError *_error;
    DVTDispatchLock *_cancellationRegistrationLock;
    DVTDispatchLock *_cancellationBlockLock;
    NSMutableArray *_cancellationBlockTokens;
    DVTDispatchLock *_finishingLock;
    NSMutableArray *_finishingTokens;
    BOOL _preventFinish;
}

+ (void)_trackStateChange:(id)arg1 ofOperation:(id)arg2 forKeyPath:(id)arg3;
+ (id)unfinishedOperations;
+ (id)operationWithBlock:(CDUnknownBlockType)arg1;
@property BOOL preventFinish; // @synthesize preventFinish=_preventFinish;
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (id)stateString;
- (void)allowFinishForToken:(id)arg1;
- (id)disallowFinishWithReason:(id)arg1;
- (BOOL)isFinished;
- (void)cancel;
- (BOOL)unregisterCancellationBlockForToken:(id)arg1;
- (id)registerCancellationBlock:(CDUnknownBlockType)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)main;
- (id)description;
- (id)init;
- (void)trackFuture:(id)arg1 cancel:(BOOL)arg2 error:(BOOL)arg3;

@end

