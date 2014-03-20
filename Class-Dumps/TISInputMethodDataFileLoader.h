//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TISInputMethodDataFileLoader : NSObject
{
    NSString *_fileName;
    BOOL _isValidFile;
    id _module;
    BOOL _parseOnlyForBasicProperties;
}

- (struct __CFDictionary *)wordList;
- (struct __CFDictionary *)propertyList;
- (BOOL)parseForBasicProperties;
- (BOOL)parse;
- (void)chooseFormat:(id)arg1;
- (void)dealloc;
- (id)initForBasicPropertiesWithFile:(id)arg1;
- (id)initWithFile:(id)arg1;

@end

