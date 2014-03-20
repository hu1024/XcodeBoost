//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionReplyTable : NSObject
{
    struct __CFDictionary *_replyTable;
    int _replyTableLock;
    unsigned long long _sequence;
}

- (id)replyInfoForSequence:(unsigned long long)arg1;
- (unsigned long long)sequenceForReplyBlock:(id)arg1 errorBlock:(CDUnknownBlockType)arg2 cleanupBlock:(CDUnknownBlockType)arg3 protocol:(id)arg4 selector:(SEL)arg5 proxyNumber:(unsigned long long)arg6 userInfo:(id)arg7;
- (void)invokeErrorBlockForSequence:(unsigned long long)arg1 withError:(id)arg2;
- (void)cleanupReplyBlocksWithError:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

