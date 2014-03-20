//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSWindow;

@interface BUStarField : NSObject
{
    void *_reserved[3];
}

+ (void)drawInvalidRevisionImageWithSize:(struct CGSize)arg1 inContext:(struct CGContext *)arg2;
+ (double)fadeBackAlphaForWindowIndex:(unsigned long long)arg1 numberShown:(unsigned long long)arg2;
+ (id)starfield;
@property(nonatomic) struct CGRect lastWindowFrame;
@property(readonly, nonatomic) NSWindow *window;
- (void)performAnimation:(unsigned long long)arg1 withDuration:(double)arg2 options:(id)arg3;
- (void)hide;
- (void)showOnScreen:(id)arg1;
- (id)contentLayer;
- (void)finalize;
- (void)dealloc;
- (void)tearDownPrivateData;
- (struct BUStarFieldPrivate *)privateData;

@end

