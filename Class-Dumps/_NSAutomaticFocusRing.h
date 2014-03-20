//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _NSAutomaticFocusRing : NSObject
{
}

+ (void)setActiveFirstResponderChanged;
+ (void)translateFocusRingRegionBy:(struct CGPoint)arg1 forWindow:(id)arg2;
+ (id)focusRingRegionForWindow:(id)arg1;
+ (void)compositeIfShownInWindow:(id)arg1;
+ (id)focusRingViewForWindow:(id)arg1;
+ (void)hideForView:(id)arg1;
+ (void)setNeedsUpdateForView:(id)arg1;
+ (void)updateForView:(id)arg1;
+ (void)updateIfNeeded;
+ (void)showForView:(id)arg1;
+ (void)_focusRingViewDidChangeGeometryInWindow:(id)arg1;
+ (void)_clearOldFocusRing;
+ (void)_setFocusRingView:(id)arg1;
+ (id)_state;

@end

