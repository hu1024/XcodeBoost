//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QLPreviewBubbleDelegate.h"

@class NSDictionary, NSTextCheckingResult, QLPreviewBubble;

@interface DDBubbleController : NSObject <QLPreviewBubbleDelegate>
{
    QLPreviewBubble *_bubble;
    NSTextCheckingResult *_textCheckingResult;
    struct __DDResult *_dataDetectorsResult;
    NSDictionary *_context;
}

@property(retain) NSTextCheckingResult *textCheckingResult; // @synthesize textCheckingResult=_textCheckingResult;
- (void)bubbleDidClose:(id)arg1;
- (BOOL)bubble:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (void)showModalBubbleForURL:(id)arg1 textCheckingResult:(id)arg2 DDResult:(struct __DDResult *)arg3 context:(id)arg4 parentWindow:(id)arg5;
- (void)showModalBubbleForURL:(id)arg1 forFrame:(struct CGRect)arg2;
- (void)configureBubble:(id)arg1;
@property struct __DDResult *dataDetectorsResult;
- (void)dealloc;

@end

