//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSLocking.h"

@interface NSCondition : NSObject <NSLocking>
{
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)broadcast;
- (void)signal;
- (BOOL)waitUntilDate:(id)arg1;
- (void)wait;
- (void)unlock;
- (void)lock;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

