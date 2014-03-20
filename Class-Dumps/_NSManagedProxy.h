//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSPredicate, NSString;

@interface _NSManagedProxy : NSObject
{
    id _callbackHandler;
    NSManagedObjectContext *_managedObjectContext;
    NSString *_entityName;
    NSPredicate *_fetchPredicate;
    NSArray *_sortDescriptors;
    id _lazyFetchingArray;
}

- (id)_lazyFetchResultProxyForObjects:(id)arg1;
- (void)updateBatchSizeForRange:(struct _NSRange)arg1;
- (void)_managedObjectsChangedInContext:(id)arg1;
- (void)_refetchForContext:(id)arg1;
- (void)_managedObjectContextDidSave:(id)arg1;
- (BOOL)_objectMatchesFetchPredicate:(id)arg1;
- (void)_storesDidChange:(id)arg1;
- (BOOL)_objectMatchesEntity:(id)arg1;
- (void)deleteObject:(id)arg1;
- (id)newInsertedObject;
- (id)newInsertedObjectForEntity:(id)arg1;
- (void)_executeFetchForObjects:(id)arg1;
- (id)fetchObjectsWithFetchRequest:(id)arg1 error:(id *)arg2;
- (id)fetchRequestWithSortDescriptors:(id)arg1 limit:(unsigned long long)arg2;
- (id)_relationshipKeyPathsForPrefetching;
- (id)usableSortDescriptorsFromArray:(id)arg1;
- (BOOL)isEntityUsable:(id)arg1;
- (id)_entity;
- (id)_persistentStoreCoordinator;
- (id)_managedObjectContext;
- (id)sortDescriptors;
- (void)setSortDescriptors:(id)arg1;
- (id)fetchPredicate;
- (void)setFetchPredicate:(id)arg1;
- (id)entityName;
- (void)setEntityName:(id)arg1;
- (id)managedObjectContext;
- (void)setManagedObjectContext:(id)arg1;
- (id)_callbackHandler;
- (void)_setCallbackHandler:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

