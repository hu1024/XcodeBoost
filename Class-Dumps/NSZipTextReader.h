//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableAttributedString, NSMutableDictionary, NSZipFileArchive;

@interface NSZipTextReader : NSObject
{
    NSMutableAttributedString *_attrStr;
    NSMutableDictionary *_documentAttrs;
    NSZipFileArchive *_archive;
    NSDictionary *_options;
    NSData *_contentData;
    NSData *_wordData;
    NSData *_opfData;
    NSData *_smilData;
    NSData *_xmlData;
    long long _indexingLimit;
    long long _thumbnailLimit;
    long long _errorCode;
}

- (void)setMutableAttributedString:(id)arg1;
- (id)documentAttributes;
- (id)attributedString;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithPath:(id)arg1 options:(id)arg2;
- (id)initWithArchive:(id)arg1 options:(id)arg2;
- (void)dealloc;
- (void)_load;
- (void)_loadXMLData;
- (void)_loadWordData;
- (void)_loadContentData;

@end

