//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionClassCache : NSObject
{
    int _lock;
    NSMutableSet *_cache;
}

- (void)clear;
- (void)addClass:(Class)arg1;
- (BOOL)containsClass:(Class)arg1;
- (void)dealloc;
- (id)init;

@end

