//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSToolbar;

@interface _NSToolbarDefaultImageRepWindow : NSWindow
{
    BOOL segmentedCellsGetTextures;
    NSToolbar *defaultItemsToolbar;
}

- (void)dealloc;
- (BOOL)_shouldSuppressRolloversForSegmentedCellInView;
- (BOOL)_shouldUseTexturedAppearanceForSegmentedCellInView:(id)arg1;

@end

