//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColorPanel, NSControl, NSString, NSTimer;

@interface NSColorPanelTextController : NSObject
{
    NSColorPanel *_colorPanel;
    NSControl *_textControl;
    NSTimer *_textTimer;
    NSString *_lastEditedStringValue;
    id _delegate;
    BOOL _acceptLastEnteredText;
}

- (BOOL)acceptLastEnteredText;
- (BOOL)control:(id)arg1 isValidObject:(id)arg2;
- (BOOL)control:(id)arg1 didFailToFormatString:(id)arg2 errorDescription:(id)arg3;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)fieldEditorTextDidChange:(id)arg1;
- (void)textTimerFired:(id)arg1;
- (void)setLastEditedStringValue:(id)arg1;
- (void)_forceSetLastEditedStringValue:(id)arg1;
- (void)dealloc;
- (void)startTextTimer;
- (void)stopTextTimer;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)cancel:(id)arg1;
- (id)initWithTextControl:(id)arg1 colorPanel:(id)arg2 delegate:(id)arg3;

@end

