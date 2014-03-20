//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSMenuItem;

@interface NSMenuItemViewer : NSView
{
    NSMenuItem *_menuItem;
    NSView *_menuItemView;
    struct CGRect _clipRect;
    struct {
        unsigned int settingSize:1;
        unsigned int drawnFromCarbon:1;
        unsigned int installedWidthConstraints:1;
        unsigned int reserved:29;
    } _menuItemViewerFlags;
    void *_hiView;
    struct CGSize _minimumViewSize;
    id _rememberedFirstResponder;
    id _itemViewerReserved[2];
}

+ (struct __CFString *)_getMenuItemViewerHIViewClassRegisteringIfNecessary;
- (void)_displayFromCarbonIgnoringOpacity;
- (void)_displayRectIgnoringOpacity:(struct CGRect)arg1 isVisibleRect:(BOOL)arg2 rectIsVisibleRectForView:(id)arg3;
- (BOOL)_restoreOrBecomeFirstResponder;
- (BOOL)_rememberAndResignFirstResponder;
- (BOOL)_isContainedInMenu;
- (id)opaqueAncestor;
- (id)_enclosingMenuItem;
- (BOOL)lockFocusIfCanDraw;
- (void)_setClipRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawMenuItemBackgroundWithHighlight:(BOOL)arg1 inRect:(struct CGRect)arg2 withClipRect:(struct CGRect)arg3;
- (BOOL)wantsDefaultClipping;
- (id)initWithFrame:(struct CGRect)arg1 forMenuItem:(id)arg2;
- (void)dealloc;
- (void *)_hiView;
- (void)_setHIView:(void *)arg1;
- (void)_setMenuItemView:(id)arg1;
- (struct CGSize)_minimumViewSize;
- (void)updateConstraints;
- (void)_menuItemViewFrameChanged:(id)arg1;
- (void)_setFrameFromHIViewFrame:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_clearMenuItem;
- (id)_menuItem;
- (id)_menuItemView;
- (id)accessibilityParentAttribute;
- (id)accessibilityAttributeNames;
- (id)accessibilityWindowAttribute;

@end

