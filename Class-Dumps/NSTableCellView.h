//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSImageView, NSTextField;

@interface NSTableCellView : NSView
{
    long long _backgroundStyle;
    id _objectValue;
    id _aux;
    long long _rowSizeStyle;
    NSTextField *_textField;
    NSImageView *_imageView;
}

@property long long rowSizeStyle; // @synthesize rowSizeStyle=_rowSizeStyle;
@property NSImageView *imageView; // @synthesize imageView=_imageView;
@property NSTextField *textField; // @synthesize textField=_textField;
@property(retain) id objectValue; // @synthesize objectValue=_objectValue;
@property(readonly) NSArray *draggingImageComponents;
- (void)layout;
- (void)viewWillDraw;
- (void)_doStandardRowSizeStyleLayout;
- (void)_updateSourceListAttributesIfNecessary;
- (void)_updateSourceListAttributesInRowView:(id)arg1;
- (void)_updateSourceListGroupRowAttributesInRowView:(id)arg1;
- (id)_enclosingTableView;
- (struct CGRect)_textFieldFrame;
- (void)_updateFont;
- (struct CGRect)_imageViewFrame;
- (BOOL)isOpaque;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)preservesContentDuringLiveResize;
- (id)_autounbinder;
@property long long backgroundStyle;
- (oneway void)release;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

