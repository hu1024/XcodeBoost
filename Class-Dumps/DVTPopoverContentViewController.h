//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import "NSPopoverDelegate.h"

@class NSPopover;

@interface DVTPopoverContentViewController : DVTViewController <NSPopoverDelegate>
{
    CDUnknownBlockType _didCloseBlock;
    NSPopover *_popover;
}

+ (id)configuredPopoverWithViewController:(id)arg1 didCloseBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_popoverDidClose:(id)arg1;
- (void)_popoverWillClose:(id)arg1;
- (void)_setDidCloseBlock:(CDUnknownBlockType)arg1;
- (void)_setPopover:(id)arg1;
- (void)primitiveInvalidate;
- (void)closePopover:(id)arg1;
- (id)popover;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

