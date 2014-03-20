//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@interface ABScrollView : NSScrollView
{
    id <ABScrollViewDelegate> _delegate;
    BOOL _dynamicVerticalScroller;
}

@property id <ABScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)scrollBarVisible;
- (void)reflectScrolledClipView:(id)arg1;
- (void)_turnOffVerticalScroller;
- (void)_turnOnVerticalScroller;
- (void)setDynamicVerticalScroller:(BOOL)arg1;
- (BOOL)dynamicVerticalScroller;
- (unsigned long long)borderType;
- (BOOL)accessibilityIsIgnored;

@end

