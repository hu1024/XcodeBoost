//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTTabSwitcher, DVTTabbedWindowTabViewItem;

@protocol DVTTabSwitcherDelegate <NSObject>

@optional
- (void)tabSwitcherDidChangeNumberOfTabViewItems:(DVTTabSwitcher *)arg1;
- (void)tabSwitcher:(DVTTabSwitcher *)arg1 didSelectTabViewItem:(DVTTabbedWindowTabViewItem *)arg2;
- (void)tabSwitcher:(DVTTabSwitcher *)arg1 willSelectTabViewItem:(DVTTabbedWindowTabViewItem *)arg2;
- (BOOL)tabSwitcher:(DVTTabSwitcher *)arg1 shouldSelectTabViewItem:(DVTTabbedWindowTabViewItem *)arg2;
@end

