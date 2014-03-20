//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface NSImageCacheView : NSView
{
    struct __CFDictionary *_threadEntries;
    BOOL isOpaque;
}

+ (void)initialize;
- (void)setOpaque:(BOOL)arg1;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (struct CGRect)bounds;
- (struct CGRect)frame;
- (void)unlockFocus;
- (BOOL)lockFocusIfCanDraw;
- (BOOL)lockFocusIfCanDrawInFrame:(struct CGRect)arg1 flipped:(BOOL)arg2 clip:(BOOL)arg3;
- (void)finalize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

