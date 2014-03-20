//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding.h"

@class NSDictionary, NSMutableDictionary, NSString, PFUbiquityKnowledgeVector, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineMetadata : NSObject <NSCoding>
{
    NSString *_storeName;
    NSString *_authorPeerID;
    NSString *_modelVersionHash;
    PFUbiquityLocation *_rootLocation;
    PFUbiquityKnowledgeVector *_pKV;
    PFUbiquityKnowledgeVector *_kv;
    NSMutableDictionary *_peerRanges;
}

@property(readonly) NSDictionary *peerRanges; // @synthesize peerRanges=_peerRanges;
@property(readonly) PFUbiquityKnowledgeVector *knowledgeVector; // @synthesize knowledgeVector=_kv;
@property(readonly, nonatomic) PFUbiquityKnowledgeVector *previousKnowledgeVector; // @synthesize previousKnowledgeVector=_pKV;
@property(readonly) PFUbiquityLocation *rootLocation; // @synthesize rootLocation=_rootLocation;
@property(readonly) NSString *modelVersionHash; // @synthesize modelVersionHash=_modelVersionHash;
@property(readonly) NSString *authorPeerID; // @synthesize authorPeerID=_authorPeerID;
@property(readonly) NSString *storeName; // @synthesize storeName=_storeName;
- (void)setKnowledgeVector:(id)arg1;
- (id)createNewLocalRangeWithRangeStart:(unsigned long long)arg1 andRangeEnd:(unsigned long long)arg2 forEntityNamed:(id)arg3;
- (void)addDictionaryForPeerRange:(id)arg1;
- (id)createPeerRangeDictionary:(id)arg1;
- (void)_migrateToModelVersionHash:(id)arg1;
- (void)setPreviousKnowledgeVectorFromCurrentMetadata:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)gatherMetadataWithStore:(id)arg1 andError:(id *)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (id)init;

@end

