//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCDGroup.h>

__attribute__((visibility("hidden")))
@interface ABCDSmartGroup : ABCDGroup
{
}

+ (id)_table;
+ (id)abEntityName;
+ (void)addMappedKeysToDictionary:(id)arg1 mappedEntities:(id)arg2 mappedEntitiesMainKeys:(id)arg3 entityWithValueConverter:(struct __CFDictionary *)arg4 valueWithEntityConverter:(struct __CFDictionary *)arg5;
- (id)affectedStoresInMembershipPredicate;
- (id)contactMembershipRecursivePredicate;
- (id)searchElement;
- (id)transformedSearchElement;
- (id)contactMembershipPredicate;
- (id)modifiedUniqueIdsSet;
- (void)setModifiedUniqueIdsSet:(id)arg1;

@end

