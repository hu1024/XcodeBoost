//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABDatumView, NSButton, NSPanel, NSTextField;

__attribute__((visibility("hidden")))
@interface ABCustomLabelController : NSObject
{
    NSPanel *mEditPanel;
    NSTextField *mLabelField;
    NSButton *mOkayButton;
    ABDatumView *mDatumView;
}

+ (void)addCustomLabelToDatumView:(id)arg1;
- (void)dealloc;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)controlTextDidChange:(id)arg1;
- (void)help:(id)arg1;
- (void)cancel:(id)arg1;
- (void)commit:(id)arg1;
- (void)runLabelSheet;
- (id)initWithDatumView:(id)arg1;

@end

