//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSSavePanelTagSetter.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _NSSavePanelPrefixWatchingTagSetter : _NSSavePanelTagSetter
{
    NSURL *directoryURL;
    NSString *prefix;
}

- (BOOL)_checkAndSetTagsForURL:(id)arg1 usingAttributeCache:(BOOL)arg2;
- (void)_enumerateURLsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_URLForDirectoryToWatch;
- (BOOL)_isRelevantURL:(id)arg1;
- (void)dealloc;
- (id)_initWithDirectoryURL:(id)arg1 prefix:(id)arg2 tags:(id)arg3;

@end

