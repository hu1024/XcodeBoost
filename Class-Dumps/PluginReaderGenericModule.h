//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PluginReaderGenericModule : NSObject
{
    NSMutableDictionary *_inputMethodInformation;
    NSDictionary *_wordList;
    NSString *_fileName;
}

- (void)setIntendedLanguage:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setInputModeID:(id)arg1;
- (void)setInputSourceID:(id)arg1;
- (id)inputMethodInformation;
- (id)dictionary;
- (BOOL)parse;
- (BOOL)parseForBasicProperties;
- (void)dealloc;
- (id)initForBasicProperties;
- (id)init;
- (void)_setModeInformation;

@end

