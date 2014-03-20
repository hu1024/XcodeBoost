//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSRecentDocumentInfo.h"

@class NSImage, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _NSRecentDocumentInfo : NSObject <NSRecentDocumentInfo>
{
    NSURL *resolvedURL;
    NSURL *originalURL;
    struct OpaqueLSSharedFileListItemRef *sharedFileListItem;
    NSString *displayName;
    NSImage *icon;
    CDUnknownBlockType deletionBlock;
    BOOL fileIsUnavailable;
    long long state;
}

@property long long state; // @synthesize state;
@property(copy) CDUnknownBlockType deletionBlock; // @synthesize deletionBlock;
@property(retain) NSImage *icon; // @synthesize icon;
@property(retain) NSString *displayName; // @synthesize displayName;
@property(retain) NSURL *resolvedURL; // @synthesize resolvedURL;
@property(readonly) struct OpaqueLSSharedFileListItemRef *sharedFileListItem; // @synthesize sharedFileListItem;
- (void)resolveURLWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) NSURL *URL;
- (void)resolveByMountingVolumesIfNecessary:(BOOL)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly) NSURL *originalURL; // @synthesize originalURL;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithSharedFileListItem:(struct OpaqueLSSharedFileListItemRef *)arg1;

@end

