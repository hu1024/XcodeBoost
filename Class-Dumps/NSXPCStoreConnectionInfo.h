//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSPersistentStoreCoordinator;

__attribute__((visibility("hidden")))
@interface NSXPCStoreConnectionInfo : NSObject
{
    NSDictionary *_entitlements;
    NSPersistentStoreCoordinator *_coordinator;
    CDStruct_4c969caf _token;
    id _userInfo;
    int _lock;
}

- (id)userInfo;
- (CDStruct_4c969caf)auditToken;
- (id)persistentStoreCoordinator;
- (id)entitlements;
- (id)description;
- (void)dealloc;
- (void)setUserInfo:(id)arg1;
- (id)initForToken:(CDStruct_4c969caf)arg1 entitlementNames:(id)arg2 coordinator:(id)arg3;

@end

