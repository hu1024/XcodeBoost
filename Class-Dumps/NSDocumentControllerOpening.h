//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDocument, NSError, NSString, NSURL, QLSeamlessDocumentOpener;

__attribute__((visibility("hidden")))
@interface NSDocumentControllerOpening : NSObject
{
    NSURL *_url;
    QLSeamlessDocumentOpener *_seamlessOpener;
    NSDocument *_document;
    BOOL _documentWasAlreadyOpen;
    NSString *_recentDocumentRecordsKey;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSString *recentDocumentRecordsKey; // @synthesize recentDocumentRecordsKey=_recentDocumentRecordsKey;
@property BOOL documentWasAlreadyOpen; // @synthesize documentWasAlreadyOpen=_documentWasAlreadyOpen;
@property(retain) NSDocument *document; // @synthesize document=_document;
@property(retain) QLSeamlessDocumentOpener *seamlessOpener; // @synthesize seamlessOpener=_seamlessOpener;
@property(retain, setter=setURL:) NSURL *url; // @synthesize url=_url;
- (void)dealloc;

@end

