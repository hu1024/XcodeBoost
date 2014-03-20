//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface NSRuleEditorLocalizer : NSObject
{
    NSMutableArray *_default;
    NSMutableArray *_localized;
    NSDictionary *_dictionary;
    id _ruleEditorLocalizerReserved;
}

- (id)localizeOptionDictionaries:(id)arg1;
- (id)_constructTitleMappingDictionariesFromOptionDictionaries:(id)arg1 localizationItemIndex:(unsigned long long *)arg2;
- (id)_localizedItemForDefaultItemAtLayoutIndex:(unsigned long long)arg1 inDefaultItemsAtIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)dictionary;
- (BOOL)_parseKey:(id)arg1 value:(id)arg2 errorDescription:(id *)arg3;
- (id)_extractOrderedNonStaticItemsFromArray:(id)arg1;
- (BOOL)_parseHalf:(id)arg1 intoArray:(id)arg2 isValue:(BOOL)arg3 ignoringSeparators:(BOOL)arg4 errorDescription:(id *)arg5;
- (BOOL)_tokenizeString:(id)arg1 intoArray:(id)arg2 ignoringSeparators:(BOOL)arg3 errorDescription:(id *)arg4;

@end

