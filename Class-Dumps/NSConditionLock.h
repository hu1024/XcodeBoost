//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSLocking.h"

@interface NSConditionLock : NSObject <NSLocking>
{
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)unlockWithCondition:(long long)arg1;
- (void)unlock;
- (BOOL)tryLockWhenCondition:(long long)arg1;
- (BOOL)tryLock;
- (BOOL)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2;
- (void)lockWhenCondition:(long long)arg1;
- (BOOL)lockBeforeDate:(id)arg1;
- (void)lock;
- (long long)condition;
- (void)finalize;
- (void)dealloc;
- (id)initWithCondition:(long long)arg1;
- (id)init;

@end

