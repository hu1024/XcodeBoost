//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSAnimationDelegate.h"

@class DVTMorphingDragImageView, NSAnimation, NSImage, NSPasteboard, NSString, NSView, NSWindow;

@interface DVTMorphingDragImageController : NSObject <NSAnimationDelegate>
{
    NSImage *originalImage;
    struct CGSize maxImageSize;
    struct CGSize originalViewOffset;
    NSPasteboard *dragPasteboard;
    id dragSource;
    NSView *sourceView;
    NSWindow *dragWindow;
    DVTMorphingDragImageView *dragImageView;
    NSAnimation *morphAnimation;
    NSAnimation *slideBackAnimation;
    struct CGPoint slideBackStartTranslation;
    struct CGPoint slideBackEndTranslation;
    NSWindow *windowUnderMouse;
    id <DVTMorphingDragImageDropTarget> targetUnderMouse;
    NSString *runLoopMode;
    BOOL dragDone;
    BOOL _targetAcceptsDrag;
    BOOL mouseOverSystemWindow;
    BOOL scheduledRedisplay;
}

+ (void)dragImage:(id)arg1 maximumSize:(struct CGSize)arg2 fromView:(id)arg3 at:(struct CGPoint)arg4 pasteboard:(id)arg5 source:(id)arg6 inMode:(id)arg7;
- (void).cxx_destruct;
- (void)_morphToDragImage:(id)arg1 force:(BOOL)arg2;
- (void)_sendMovedToPointOnScreenToDragSource;
- (void)_setTargetUnderMouse:(id)arg1;
- (void)_setWindowUnderMouse:(id)arg1;
- (void)_findWindowUnderMouse:(id *)arg1 level:(int *)arg2 viewUnderMouse:(id *)arg3;
- (id)_dragInfoForNoTargetUnderMouse;
- (id)_dragInfoForTargetUnderMouse;
- (void)_animateSlideBack;
- (void)_animateMorphWindow;
- (void)_dragComplete;
- (void)_applicationDidResignActive;
- (void)_handleMouseUp;
- (void)_handleFlagsChanged;
- (void)_handleMouseDragged;
- (void)_handleEvent:(id)arg1;
- (id)_runLoopMode;
- (void)_runDrag;
- (void)_prepareForDragWithImage:(id)arg1;
- (void)_dragImage:(id)arg1 maximumSize:(struct CGSize)arg2 fromView:(id)arg3 at:(struct CGPoint)arg4 pasteboard:(id)arg5 source:(id)arg6 inMode:(id)arg7;
- (void)_redisplayWindows;
- (void)_scheduleRedisplay;
- (void)animationDidEnd:(id)arg1;
- (id)dragWindow;
- (void)morphToDragImage:(id)arg1;

@end

