//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSObject<NSViewBridgeKVOBuddy>;

@interface NSViewBridge : NSObject
{
    NSMutableDictionary *_dict;
    NSObject<NSViewBridgeKVOBuddy> *_kvoBuddy;
    NSMutableSet *_nonLocalChangesInProgress;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
@property NSObject<NSViewBridgeKVOBuddy> *kvoBuddy; // @synthesize kvoBuddy=_kvoBuddy;
- (void)setObject:(id)arg1 forKey:(id)arg2 withKVO:(BOOL)arg3;
- (BOOL)keyIsRelevantToBuddy:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)allKeys;
- (void)registerKey:(id)arg1 defaultObject:(id)arg2 owner:(unsigned char)arg3;
- (unsigned char)ownerForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (BOOL)hasObject:(id)arg1 forKey:(id)arg2;
- (BOOL)hasObjectForKey:(id)arg1;
- (BOOL)hasKey:(id)arg1;
- (BOOL)changeOriginatesLocally;
- (BOOL)changeOriginatesLocally:(id)arg1;
- (void)nonLocalChangeInProgress:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)description;
@property(readonly) CDStruct_4c969caf auditToken;
@property(readonly) int processIdentifier;
- (void)dealloc;

@end

