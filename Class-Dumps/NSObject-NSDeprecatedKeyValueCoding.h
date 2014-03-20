//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (NSDeprecatedKeyValueCoding)
+ (BOOL)useStoredAccessor;
- (id)createKeyValueBindingForKey:(id)arg1 typeMask:(unsigned long long)arg2;
- (id)_createKeyValueBindingForKey:(id)arg1 name:(const char *)arg2 bindingType:(unsigned long long)arg3;
- (id)keyValueBindingForKey:(id)arg1 typeMask:(unsigned long long)arg2;
- (void)takeStoredValue:(id)arg1 forKey:(id)arg2;
- (void)takeValue:(id)arg1 forKey:(id)arg2;
- (id)storedValueForKey:(id)arg1;
- (id)_oldValueForKey:(id)arg1;
- (void)unableToSetNilForKey:(id)arg1;
- (void)handleTakeValue:(id)arg1 forUnboundKey:(id)arg2;
- (id)handleQueryWithUnboundKey:(id)arg1;
- (void)takeValuesFromDictionary:(id)arg1;
- (id)valuesForKeys:(id)arg1;
- (void)takeValue:(id)arg1 forKeyPath:(id)arg2;
- (id)_oldValueForKeyPath:(id)arg1;
@end

