//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@interface ABWindowController : NSWindowController
{
    CDUnknownBlockType _completionHandler;
}

- (void)abEndSheet:(id)arg1;
- (void)abSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)abBeginSheetForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

