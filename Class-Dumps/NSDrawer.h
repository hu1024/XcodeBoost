//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

@class NSLock, NSString, NSWindow;

@interface NSDrawer : NSResponder
{
    unsigned long long _drawerState;
    unsigned long long _drawerNextState;
    unsigned long long _drawerEdge;
    unsigned long long _drawerNextEdge;
    unsigned long long _drawerPreferredEdge;
    float _drawerPercent;
    float _drawerPercentSaved;
    double _drawerLeadingOffset;
    double _drawerTrailingOffset;
    NSLock *_drawerLock;
    NSWindow *_drawerWindow;
    NSWindow *_drawerParentWindow;
    NSWindow *_drawerNextParentWindow;
    NSString *_drawerSaveName;
    double _drawerStartTime;
    double _drawerTotalTime;
    struct __CFRunLoop *_drawerLoop;
    struct __CFRunLoopTimer *_drawerTimer;
    id _drawerDelegate;
    unsigned int _drawerFlags;
    struct __CFRunLoopObserver *_drawerObserver;
}

+ (BOOL)_usesCorrectContentSize;
+ (void)initialize;
+ (unsigned long long)_drawerTransform;
+ (void)_setDrawerTransform:(unsigned long long)arg1;
+ (double)_drawerVelocity;
+ (void)_setDrawerVelocity:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)autosaveName;
- (void)setAutosaveName:(id)arg1;
- (double)trailingOffset;
- (void)setTrailingOffset:(double)arg1;
- (double)leadingOffset;
- (void)setLeadingOffset:(double)arg1;
- (struct CGSize)maxContentSize;
- (void)setMaxContentSize:(struct CGSize)arg1;
- (struct CGSize)minContentSize;
- (void)setMinContentSize:(struct CGSize)arg1;
- (struct CGSize)contentSize;
- (void)setContentSize:(struct CGSize)arg1;
- (unsigned long long)edge;
- (long long)state;
- (BOOL)isOpen;
- (void)removeImmediately:(BOOL)arg1;
- (void)toggle:(id)arg1;
- (void)close:(id)arg1;
- (void)open:(id)arg1;
- (void)close;
- (void)openOnEdge:(unsigned long long)arg1;
- (void)open;
- (unsigned long long)preferredEdge;
- (void)setPreferredEdge:(unsigned long long)arg1;
- (void)_moveByOffset:(struct CGSize)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (BOOL)_allowsImplicitRemovalFromMovementGroup;
- (id)parentWindow;
- (void)setParentWindow:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentSize:(struct CGSize)arg1 preferredEdge:(unsigned long long)arg2;
- (void)_setVisibleWithoutLogin;
- (void)_setLevel;
- (void)_endLiveResize;
- (void)_startLiveResize;
- (id)_resetPostingCounts;
- (id)_resetDisableCounts;
- (id)_registerDragTypesIfNeeded;
- (void)_resizeWithDelta:(struct CGPoint)arg1 fromFrame:(struct CGRect)arg2 beginOperation:(BOOL)arg3 endOperation:(BOOL)arg4;
- (void)_slideWithDelta:(struct CGPoint)arg1 beginOperation:(BOOL)arg2 endOperation:(BOOL)arg3;
- (struct CGSize)_minParentWindowContentSize;
- (void)_takeFocus;
- (void)_changeFirstResponderToParentsFirstResponder;
- (void)_changeMainState;
- (void)_changeKeyState;
- (void)_sizeWithRect:(struct CGRect)arg1;
- (void)_size;
- (void)_position;
- (void)_displayIfNeeded;
- (void)_destroyRealWindow;
- (void)_unhide;
- (void)_hide;
- (void)_setDrawerEdge:(unsigned long long)arg1;
- (unsigned long long)_edge;
- (id)_initWithContentSize:(struct CGSize)arg1 preferredEdge:(unsigned long long)arg2;
- (id)_drawerWindow;
- (void)_doAutoselectEdge;
- (void)_doSetParentWindow:(id)arg1;
- (void)_doRemoveDrawer;
- (void)_doCloseDrawer;
- (void)_doOpenDrawer;
- (void)_doResizeDrawerWithDelta:(struct CGPoint)arg1 fromFrame:(struct CGRect)arg2;
- (void)_doSlideDrawerWithDelta:(struct CGPoint)arg1;
- (void)_doPositionDrawerAndSize:(struct CGSize)arg1 parentFrame:(struct CGRect)arg2 stashSize:(BOOL)arg3;
- (void)_doPositionDrawerAndSize:(struct CGSize)arg1 parentFrame:(struct CGRect)arg2;
- (void)_doPositionDrawer;
- (void)_doStopDrawer;
- (void)_doStartDrawer;
- (void)_doDetachDrawer;
- (void)_doAttachDrawer;
- (void)_doAttachDrawerIgnoreHidden:(BOOL)arg1;
- (id)undoManager;
- (void)doCommandBySelector:(SEL)arg1;
- (void)helpRequested:(id)arg1;
- (id)menu;
- (void)setMenu:(id)arg1;
- (void)flushBufferedKeyEvents;
- (void)interpretKeyEvents:(id)arg1;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)tryToPerform:(SEL)arg1 with:(id)arg2;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsParentAttributeSettable;
- (id)accessibilityParentAttribute;
- (id)accessibilityAttributeNames;

@end

