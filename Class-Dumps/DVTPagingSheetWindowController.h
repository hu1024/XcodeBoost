//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "DVTInvalidation.h"

@class DVTStackBacktrace, DVTViewController;

@interface DVTPagingSheetWindowController : NSWindowController <DVTInvalidation>
{
    DVTViewController *_contentViewController;
    CDUnknownBlockType _completionBlock;
}

+ (BOOL)automaticallyNotifiesObserversOfContentViewController;
+ (void)initialize;
+ (id)defaultWindowNibName;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) DVTViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)dvt_sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)beginSheetModalForWindow:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)didEndSheetWithReturnCode:(long long)arg1;
- (void)willBeginSheet;
@property(retain, nonatomic) Class contentViewControllerClass;
- (void)primitiveInvalidate;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

