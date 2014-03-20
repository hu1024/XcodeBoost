//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCardViewMultiValue.h>

#import "ABCardViewMutableMultiValue.h"

__attribute__((visibility("hidden")))
@interface ABCardViewMutableMultiValue : ABCardViewMultiValue <ABCardViewMutableMultiValue>
{
}

- (void)setAccountBadge:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setProperty:(id)arg1;
- (void)setPersonIdentifiers:(id)arg1;
- (void)setMultiValueIdentifiers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setPersonIdentifiers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setIsPrivateValue:(BOOL)arg1 index:(unsigned long long)arg2;
- (void)removeEntryAtIndex:(unsigned long long)arg1;
- (void)duplicateEntryAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)setDuplicate:(BOOL)arg1 atIndex:(unsigned long long)arg2;
- (void)setReadOnly:(BOOL)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceAccountNameAtIndex:(unsigned long long)arg1 withAccountName:(id)arg2;
- (void)replaceLabelAtIndex:(unsigned long long)arg1 withLabel:(id)arg2;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(id)arg2;
- (void)addValue:(id)arg1 withLabel:(id)arg2 andIdentifier:(id)arg3;
- (id)addValue:(id)arg1 withLabel:(id)arg2;
- (id)addEmptyValueWithLabel:(id)arg1;
- (id)addEmptyValueAndLabel;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

