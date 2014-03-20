//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABSearchHighlightFormatter.h>

@class CNPhoneNumberDetector;

@interface ABPhoneFormatter : ABSearchHighlightFormatter
{
    CNPhoneNumberDetector *_phoneNumberDetector;
}

+ (id)sharedPhoneFormatter;
- (_Bool)stringContainsOnlyPhoneCharacters:(id)arg1;
- (id)stringByStandardizingPhoneNumber:(id)arg1;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (void)setFormatAutosaveName:(id)arg1;
- (void)dealloc;
- (id)init;

@end

