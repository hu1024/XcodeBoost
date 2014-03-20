//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityGlobalObjectIDCache : NSObject
{
    NSString *_storeName;
    NSString *_localPeerID;
    NSMutableDictionary *_peerIDToEntityNameToPrimaryKey;
    NSRecursiveLock *_peerIDToEntityNameToPrimaryKeyLock;
}

+ (id)stringValueFromArray:(id)arg1 atIndexDescribedByStringNumber:(id)arg2;
@property(retain, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(retain, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
- (void)purgeCache;
- (id)createGlobalIDForPrimaryKeyString:(id)arg1 entityName:(id)arg2 andOwningPeerID:(id)arg3;
- (id)createGlobalIDForPrimarKey:(unsigned long long)arg1 entityName:(id)arg2 andOwningPeerID:(id)arg3;
- (id)createGlobalIDForGlobalIDString:(id)arg1;
- (id)createGlobalIDForCompressedString:(id)arg1 withEntityNames:(id)arg2 primaryKeys:(id)arg3 peerIDs:(id)arg4;
- (void)dealloc;
- (id)initWithLocalPeerID:(id)arg1 forStoreName:(id)arg2;
- (id)init;

@end

