//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding.h"

@interface NSResponder : NSObject <NSCoding>
{
    id _nextResponder;
}

+ (id)restorableStateKeyPaths;
- (BOOL)validateProposedFirstResponder:(id)arg1 forEvent:(id)arg2;
- (id)willPresentError:(id)arg1;
- (BOOL)presentError:(id)arg1;
- (void)presentError:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didPresentSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (void)_postEventNotification:(id)arg1 fromCell:(id)arg2;
- (void)_postEventNotification:(id)arg1;
- (void)_setShouldPostEventNotifications:(BOOL)arg1;
- (BOOL)_shouldPostEventNotifications;
- (void)doCommandBySelector:(SEL)arg1;
- (void)insertText:(id)arg1;
- (void)showContextHelp:(id)arg1;
- (void)helpRequested:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)undoManager;
- (id)menu;
- (void)setMenu:(id)arg1;
- (void)flushBufferedKeyEvents;
- (void)interpretKeyEvents:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (id)_recursiveResponderThatWantsForwardedScrollEventsForAxis:(long long)arg1 intendedForSwipe:(char *)arg2;
- (BOOL)_recursiveWantsForwardedScrollEventsForAxis:(long long)arg1;
- (BOOL)wantsForwardedScrollEventsForAxis:(long long)arg1;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1;
- (BOOL)wantsForwardedScrollEvents;
- (BOOL)shouldBeTreatedAsInkEvent:(id)arg1;
- (void)didResignActiveFirstResponder;
- (void)didBecomeActiveFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setGestureEventMask:(unsigned long long)arg1;
- (unsigned long long)gestureEventMask;
- (BOOL)acceptsFirstResponder;
- (void)noResponderFor:(SEL)arg1;
- (void)quickLookPreviewItemsAtWindowLocation:(struct CGPoint)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)endGestureWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)smartMagnifyWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)tabletProximity:(id)arg1;
- (void)tabletPoint:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)performMnemonic:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (BOOL)tryToPerform:(SEL)arg1 with:(id)arg2;
- (void)setNextResponder:(id)arg1;
- (id)_nextResponderForEvent:(id)arg1;
- (id)nextResponder;
- (id)colorFactory;
- (void)setInterfaceStyle:(unsigned long long)arg1;
- (unsigned long long)interfaceStyle;
- (id)presentationWindowForError:(id)arg1 originatedInWindow:(id)arg2;
- (id)_persistentUIEncodedReference;
- (void)_changePersistentKeyPathObservationTo:(BOOL)arg1;
- (void)_recursivelyReinvalidateRestorableStateIfNecessary;
- (void)invalidateRestorableState;
- (void)_restorePersistentState:(id)arg1;
- (void)_encodeObjectIntoRestorableState:(id)arg1 forKey:(id)arg2;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)_markAsEverHavingInvalidRestorableState;
- (BOOL)_hasEverHadInvalidRestorableState;
- (BOOL)_hasInvalidRestorableState;
- (void)_setHasInvalidRestorableState:(BOOL)arg1;
- (id)_persistentUIIdentifier;
- (unsigned int)_persistentUIWindowID;
- (id)_persistentUIWindow;
- (id)_copyPersistentUIChildren;
- (id)ns_widgetType;

@end

