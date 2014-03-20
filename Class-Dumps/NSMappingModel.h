//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface NSMappingModel : NSObject
{
    void *_reserved;
    void *_reserved1;
    void *_reserved2;
    NSMutableArray *_entityMappings;
    NSMutableDictionary *_entityMappingsByName;
    struct __modelMappingFlags {
        unsigned int _isInUse:1;
        unsigned int _reservedModelMapping:31;
    } _modelMappingFlags;
}

+ (id)inferredMappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id *)arg3;
+ (id)mappingModelFromBundles:(id)arg1 forSourceModel:(id)arg2 destinationModel:(id)arg3;
+ (id)_newMappingModelFromPaths:(id)arg1 forSourceHashes:(id)arg2 destinationHashes:(id)arg3;
+ (void)initialize;
+ (id)_modelPathsFromBundles:(id)arg1;
+ (void)setMigrationDebugLevel:(int)arg1;
+ (int)migrationDebugLevel;
- (id)entityMappingsByName;
- (void)setEntityMappings:(id)arg1;
- (id)entityMappings;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1;
- (id)init;
- (id)_destinationEntityVersionHashesByName;
- (id)_sourceEntityVersionHashesByName;
- (void)_throwIfNotEditable;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_createCachesAndOptimizeState;
- (BOOL)isEditable;
- (void)_addEntityMapping:(id)arg1;
- (id)_initWithEntityMappings:(id)arg1;
- (BOOL)_hasInferredMappingNeedingValidation;
- (BOOL)_isInferredMappingModel;

@end

