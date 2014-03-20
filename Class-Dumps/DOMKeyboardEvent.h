//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/DOMUIEvent.h>

@class NSString;

@interface DOMKeyboardEvent : DOMUIEvent
{
}

- (void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10;
- (void)initKeyboardEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(BOOL)arg7 altKey:(BOOL)arg8 shiftKey:(BOOL)arg9 metaKey:(BOOL)arg10 altGraphKey:(BOOL)arg11;
- (BOOL)getModifierState:(id)arg1;
@property(readonly) int charCode;
@property(readonly) int keyCode;
@property(readonly) BOOL altGraphKey;
@property(readonly) BOOL metaKey;
@property(readonly) BOOL altKey;
@property(readonly) BOOL shiftKey;
@property(readonly) BOOL ctrlKey;
@property(readonly) unsigned int keyLocation;
@property(readonly) NSString *keyIdentifier;

@end

