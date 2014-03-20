//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NSPopover;

__attribute__((visibility("hidden")))
@interface _NSPopoverWindow : NSPanel
{
    NSPopover *_popover;
    id _accessibilityParent;
    BOOL _animates;
    BOOL _nonActivating;
}

+ (Class)frameViewClassForStyleMask:(unsigned long long)arg1;
+ (unsigned long long)_validateStyleMask:(unsigned long long)arg1;
+ (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 appearance:(long long)arg2 anchorSize:(struct CGSize)arg3 contentInset:(CDStruct_d2b197d1)arg4;
+ (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 appearance:(long long)arg2 anchorSize:(struct CGSize)arg3 contentInset:(CDStruct_d2b197d1)arg4;
@property BOOL animates; // @synthesize animates=_animates;
@property(retain) id accessibilityParent; // @synthesize accessibilityParent=_accessibilityParent;
@property NSPopover *_popover; // @synthesize _popover;
- (unsigned long long)styleMask;
- (BOOL)_isNonactivatingPanel;
- (void)_setNonactivatingPanel:(BOOL)arg1;
- (id)presentationWindowForError:(id)arg1 originatedInWindow:(id)arg2;
- (BOOL)canBecomeMainWindow;
- (void)cancelOperation:(id)arg1;
- (id)_windowTransformAnimationForOrdering:(long long)arg1 animationType:(long long)arg2 interruptingAnimation:(id)arg3;
- (void)_setOrderOutAnimationType:(long long)arg1;
- (long long)_orderOutAnimationType;
- (void)_setOrderFrontAnimationType:(long long)arg1;
- (long long)_orderFrontAnimationType;
- (void)_windowTransformAnimationDidEnd:(id)arg1;
- (void)_windowTransformAnimationWillBegin:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)_allowsImplicitRemovalFromMovementGroup;
- (id)_parentWindowForAddingToMovementGroupWithProposedParent:(id)arg1;
- (long long)_childWindowOrderingPriority;
- (void)setContentView:(id)arg1;
- (void)_fromConstraintsSetWindowFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
@property long long popoverAppearance; // @dynamic popoverAppearance;
@property CDStruct_d2b197d1 contentInset; // @dynamic contentInset;
@property struct CGSize anchorSize; // @dynamic anchorSize;
@property unsigned long long anchorEdge; // @dynamic anchorEdge;
@property struct CGPoint anchorPoint; // @dynamic anchorPoint;
- (BOOL)_shouldRemoveFromParentIfPossible;
- (void)dealloc;
- (id)_initWithPopover:(id)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)_popoverFrame;
- (BOOL)_hasActiveDragTypes;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsHelpAttributeSettable;
- (id)accessibilityHelpAttribute;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityWindowAttribute;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (id)accessibilityTopLevelUIElementAttribute;
- (id)accessibilityParentAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;

@end

