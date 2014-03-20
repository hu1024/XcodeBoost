//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSStatusItem;

@interface NSStatusBarWindow : NSWindow
{
    NSStatusItem *_statusItem;
}

@property NSStatusItem *statusItem; // @synthesize statusItem=_statusItem;
- (void)flushWindow;
- (BOOL)_ignoreForFullScreenTransition;
- (int)_semanticContext;
- (void)_automateLiveResize;
- (BOOL)canHide;
- (BOOL)worksWhenModal;
- (struct CGPoint)convertBaseToScreen:(struct CGPoint)arg1;
- (void)sendEvent:(id)arg1;
- (void)_noticeStatusBarVisibilityChangeIfNecessary;
- (void *)windowRef;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (void)_setWindowTag;
- (void)_updateManagedDisplay;
- (id)_bestScreenByGeometry;
- (BOOL)_showToolTip;
- (void)_setWindowNumber:(long long)arg1;
- (id)initWithContentRect:(struct CGRect)arg1;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityHitTest:(struct CGPoint)arg1;

@end

