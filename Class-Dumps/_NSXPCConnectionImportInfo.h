//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionImportInfo : NSObject
{
    NSLock *_lock;
    struct __CFDictionary *_map;
}

- (BOOL)decrement:(unsigned long long)arg1;
- (void)increment:(unsigned long long)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

