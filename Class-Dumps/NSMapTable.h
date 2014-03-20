//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"

@interface NSMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration>
{
}

+ (id)weakToWeakObjectsMapTable;
+ (id)strongToWeakObjectsMapTable;
+ (id)weakToStrongObjectsMapTable;
+ (id)strongToStrongObjectsMapTable;
+ (id)mapTableWithWeakToWeakObjects;
+ (id)mapTableWithStrongToWeakObjects;
+ (id)mapTableWithWeakToStrongObjects;
+ (id)mapTableWithStrongToStrongObjects;
+ (id)mapTableWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)mutableDictionary;
- (void)removeAllObjects;
- (unsigned long long)getKeys:(const void **)arg1 values:(const void **)arg2;
- (BOOL)mapMember:(const void *)arg1 originalKey:(const void **)arg2 value:(const void **)arg3;
- (id)enumerator;
- (void)removeAllItems;
- (id)allValues;
- (id)allKeys;
- (void)replaceItem:(const void *)arg1 forExistingKey:(const void *)arg2;
- (void *)existingItemForSetItem:(const void *)arg1 forAbsentKey:(const void *)arg2;
- (void)setItem:(const void *)arg1 forKnownAbsentKey:(const void *)arg2;
- (void)setItem:(const void *)arg1 forAbsentKey:(const void *)arg2;
- (void)setItem:(const void *)arg1 forKey:(const void *)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)valuePointerFunctions;
- (id)keyPointerFunctions;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)copy;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3;
- (id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;

@end

