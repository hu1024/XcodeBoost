//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HIToolbox/PluginReaderGenericModule.h>

@class NSArray, NSMutableDictionary, NSString, PluginParser;

__attribute__((visibility("hidden")))
@interface PluginReaderNativeFileModule : PluginReaderGenericModule
{
    PluginParser *_parser;
    NSArray *_encodingNames;
    NSMutableDictionary *_keyMappings;
    NSString *_separator;
    NSString *_version;
    NSString *_maxCode;
    unsigned short _termChar;
    NSString *_IMChineseName;
    NSString *_selectionKeys;
    int _encoding;
    NSString *_validInputKeys;
    NSString *_keyPrompt;
}

- (BOOL)parseForBasicProperties;
- (BOOL)parseForBasicPropertiesWithByteOrder:(long long)arg1;
- (BOOL)parse;
- (void)writePluginInformationIntoDictionary;
- (BOOL)parseBody:(id)arg1;
- (id)parseHeader;
- (void)setKeyPrompt:(id)arg1;
- (void)setValidInputKeys:(id)arg1;
- (void)setMaxCode:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setVersion:(id)arg1;
- (void)setIMChineseName:(id)arg1;
- (void)setEncoding:(int)arg1;
- (void)dealloc;
- (id)initForBasicPropertiesWithFile:(id)arg1;
- (id)initWithFile:(id)arg1;
- (void)_initParsingInformation;

@end

