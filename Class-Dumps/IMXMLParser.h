//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXMLParserDelegate.h"

@class IMXMLParserContext, IMXMLParserFrame, NSMutableArray, NSXMLParser;

@interface IMXMLParser : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *_parser;
    IMXMLParserContext *_context;
    IMXMLParserFrame *_topFrame;
    NSMutableArray *_otherFrames;
    struct _TidyDoc *_tidyDoc;
    struct __CFDictionary *_framespace;
}

+ (id)sharedInstance;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundIgnorableWhitespace:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (BOOL)parseContext:(id)arg1;
- (id)_newDataByTidyingData:(id)arg1;
- (void)_teardownTidy;
- (void)_setupTidy;

@end

