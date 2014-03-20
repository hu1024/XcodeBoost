//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABScrollView.h>

@class NSWindow;

__attribute__((visibility("hidden")))
@interface ABFlareScrollView : ABScrollView
{
    NSWindow *_flareWindow;
    BOOL _showFlare;
    int _type;
}

- (void)updateFlareWindow;
- (void)windowDidResignKey:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)updateFlare;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)updateNotifications;
- (void)_send:(id)arg1;
- (int)messageType;
- (void)setMessageType:(int)arg1;
- (BOOL)showFlare;
- (void)setShowFlare:(BOOL)arg1;
- (void)finalize;
- (void)dealloc;

@end

