//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface __CFNotification : NSObject <NSCopying>
{
    id _name;
    id _object;
    id _userInfo;
    BOOL _fouSemantics;
    BOOL _dyingObject;
}

- (void)finalize;
- (void)dealloc;
- (id)initWithName:(struct __CFString *)arg1 object:(const void *)arg2 userInfo:(struct __CFDictionary *)arg3 foundation:(BOOL)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)userInfo;
- (id)object;
- (id)name;

@end

