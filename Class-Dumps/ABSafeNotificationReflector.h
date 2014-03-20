//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABCopyOnWriteSet, NSCountedSet;

__attribute__((visibility("hidden")))
@interface ABSafeNotificationReflector : NSObject
{
    unsigned long long _signatureCode;
    ABCopyOnWriteSet *_entries;
    NSCountedSet *_notificationSignatures;
    long long _receivedNotifications;
    long long _reflectedNotifications;
    long long _skippedNotifications;
}

- (void)dumpStatistics;
- (void)dumpEntries;
- (id)shortDescription;
- (id)description;
- (id)debugLogDescription;
- (BOOL)containsEntry:(id)arg1;
- (void)collectGarbageEntry:(id)arg1 into:(id)arg2;
- (void)reflectNotification:(id)arg1 toEntryIfElligible:(id)arg2;
- (void)notificationFunnel:(id)arg1;
- (id)entriesMatchingObeserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)removeEntriesWithObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (id)entriesMatchingObeserver:(id)arg1;
- (void)collectEntriesToRemove:(id)arg1 into:(id)arg2;
- (void)removeObserversInCollection:(id)arg1;
- (void)removeEntriesWithObserver:(id)arg1;
- (void)removeEntry:(id)arg1;
- (void)nts_removeSignature:(id)arg1;
- (void)nts_removeSignaturesForEntries:(id)arg1;
- (void)nts_removeAllEntriesInSet:(id)arg1;
- (void)removeAllEntriesInSet:(id)arg1;
- (id)nts_addEntryWithObserver:(id)arg1 selector:(SEL)arg2 notificationSignature:(id)arg3;
- (id)addEntryWithObserver:(id)arg1 selector:(SEL)arg2 notificationSignature:(id)arg3;
- (void)dealloc;
- (id)initWithSignatureCode:(unsigned long long)arg1;
- (id)init;

@end

