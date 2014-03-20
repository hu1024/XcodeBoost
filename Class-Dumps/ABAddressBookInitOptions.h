//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABPersistentStoreCoordinatorCache;

@interface ABAddressBookInitOptions : NSObject
{
    BOOL _doInitialImports;
    BOOL _registerForChangeNotifications;
    BOOL _tracksAllSources;
    BOOL _provisional;
    BOOL _directoryResults;
    BOOL _overridesReadOnly;
    BOOL _hasUnfilteredAccess;
    ABPersistentStoreCoordinatorCache *_persistentStoreCoordinatorCache;
}

+ (id)defaultOptions;
@property(retain) ABPersistentStoreCoordinatorCache *persistentStoreCoordinatorCache; // @synthesize persistentStoreCoordinatorCache=_persistentStoreCoordinatorCache;
@property BOOL hasUnfilteredAccess; // @synthesize hasUnfilteredAccess=_hasUnfilteredAccess;
@property BOOL overridesReadOnly; // @synthesize overridesReadOnly=_overridesReadOnly;
@property BOOL directoryResults; // @synthesize directoryResults=_directoryResults;
@property BOOL provisional; // @synthesize provisional=_provisional;
@property BOOL tracksAllSources; // @synthesize tracksAllSources=_tracksAllSources;
@property BOOL registerForChangeNotifications; // @synthesize registerForChangeNotifications=_registerForChangeNotifications;
@property BOOL doInitialImports; // @synthesize doInitialImports=_doInitialImports;
- (void)dealloc;

@end

