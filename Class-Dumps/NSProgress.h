//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSProgressPublisher.h"

@class NSLock, NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection;

@interface NSProgress : NSObject <NSProgressPublisher>
{
    id _group;
    long long _reserved4;
    id _values;
    id _reserved5;
    CDUnknownBlockType _cancellationHandler;
    CDUnknownBlockType _pausingHandler;
    CDUnknownBlockType _prioritizationHandler;
    long long _reserved3;
    id _userInfoProxy;
    NSString *_publisherID;
    NSXPCConnection *_connection;
    long long _unpublishingBlockageCount;
    long long _disconnectingBlockageCount;
    long long _remoteObserverCount;
    NSMutableDictionary *_acknowledgementHandlersByBundleID;
    NSMutableDictionary *_lastNotificationTimesByKey;
    NSMutableDictionary *_userInfoLastNotificationTimesByKey;
    NSLock *_lock;
    NSMutableSet *_childrenGroups;
}

+ (id)addSubscriberForFileURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)_addSubscriberForCategory:(id)arg1 usingPublishingHandler:(CDUnknownBlockType)arg2;
+ (void)_removeSubscriber:(id)arg1;
+ (id)_addSubscriberForFileURL:(id)arg1 withPublishingHandler:(CDUnknownBlockType)arg2;
+ (void)removeSubscriber:(id)arg1;
+ (id)addSubscriberForFileURL:(id)arg1 withPublishingHandler:(CDUnknownBlockType)arg2;
+ (id)keyPathsForValuesAffectingLocalizedAdditionalDescription;
+ (id)keyPathsForValuesAffectingLocalizedDescription;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)progressWithTotalUnitCount:(long long)arg1;
+ (id)currentProgress;
+ (id)_registrarInterface;
+ (id)_subscriberInterface;
+ (id)_publisherInterface;
- (void)handleAcknowledgementByAppWithBundleIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (oneway void)prioritize;
- (CDUnknownBlockType)prioritizationHandler;
- (void)setPrioritizationHandler:(CDUnknownBlockType)arg1;
- (BOOL)isPrioritizable;
- (void)setPrioritizable:(BOOL)arg1;
- (id)_publishingAppBundleIdentifier;
- (void)_acknowledgeWithSuccess:(BOOL)arg1;
- (CDUnknownBlockType)_acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)_setAcknowledgementHandler:(CDUnknownBlockType)arg1 forAppBundleIdentifier:(id)arg2;
- (void)_unpublish;
- (void)_publish;
@property(readonly, getter=isOld) BOOL old;
- (void)acknowledgeWithSuccess:(BOOL)arg1;
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(BOOL)arg2;
- (oneway void)stopProvidingValues;
- (oneway void)startProvidingValuesWithInitialAcceptor:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)setAcknowledgementHandler:(CDUnknownBlockType)arg1 forAppBundleIdentifier:(id)arg2;
- (void)unpublish;
- (void)_unblockUnpublishing;
- (void)_unblockDisconnecting;
- (void)publish;
@property(copy) NSString *kind;
- (id)ownedDictionaryObjectForKey:(id)arg1;
- (id)ownedDictionaryKeyEnumerator;
- (unsigned long long)ownedDictionaryCount;
- (id)userInfo;
- (void)pause;
- (void)cancel;
@property(readonly) double fractionCompleted;
@property(readonly, getter=isIndeterminate) BOOL indeterminate;
- (id)description;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2;
@property(copy) CDUnknownBlockType pausingHandler;
@property(copy) CDUnknownBlockType cancellationHandler;
@property(readonly, getter=isPaused) BOOL paused;
@property(readonly, getter=isCancelled) BOOL cancelled;
@property(getter=isPausable) BOOL pausable;
@property(getter=isCancellable) BOOL cancellable;
- (BOOL)isFinished;
@property(copy) NSString *localizedAdditionalDescription;
@property(copy) NSString *localizedDescription;
@property long long completedUnitCount;
- (void)_removeGroup:(id)arg1;
- (void)_updateGroupFractionCompletedFrom:(double)arg1 to:(double)arg2 forPortion:(long long)arg3;
@property long long totalUnitCount;
- (void)_setValueForKeys:(CDUnknownBlockType)arg1 settingBlock:(CDUnknownBlockType)arg2;
- (void)_notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2;
- (void)__notifyRemoteObserversOfValueForKey:(id)arg1 inUserInfo:(BOOL)arg2;
- (void)resignCurrent;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)dealloc;
- (void)_setGroup:(id)arg1;
- (void)_addChild:(id)arg1 toGroup:(id)arg2 isPaused:(char *)arg3 isCancelled:(char *)arg4;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;
- (id)init;
- (void)_setRemoteValue:(id)arg1 forKey:(id)arg2 inUserInfo:(BOOL)arg3;
- (id)_initWithValues:(id)arg1;
- (void)acknowledge;
- (void)handleAcknowledgementByAppWithBundleIdentifer:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end

