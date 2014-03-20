//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding.h"

@class NSConditionLock;

@interface AOSTransaction : NSObject <NSCoding>
{
    unsigned char didSucceed;
    unsigned char didFinish;
    void *result;
    struct __CFError *error;
    CDUnknownFunctionPointerType callbackFunction;
    CDUnknownBlockType callbackBlock;
    struct dispatch_queue_s *callbackQueue;
    void *context;
    NSConditionLock *waitLock;
    CDUnknownFunctionPointerType contextRetain;
    CDUnknownFunctionPointerType contextRelease;
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)error;
- (id)result;
- (BOOL)isSuccessful;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

