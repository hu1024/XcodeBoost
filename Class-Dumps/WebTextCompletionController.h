//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class NSArray, NSString, NSTableView, NSWindow, WebHTMLView, WebView;

__attribute__((visibility("hidden")))
@interface WebTextCompletionController : NSObject <NSTableViewDelegate, NSTableViewDataSource>
{
    WebView *_view;
    WebHTMLView *_htmlView;
    NSWindow *_popupWindow;
    NSTableView *_tableView;
    NSArray *_completions;
    NSString *_originalString;
    int prefixLength;
}

- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableAction:(id)arg1;
- (void)_reflectSelection;
- (BOOL)filterKeyDown:(id)arg1;
- (BOOL)popupWindowIsOpen;
- (void)endRevertingChange:(BOOL)arg1 moveLeft:(BOOL)arg2;
- (void)doCompletion;
- (void)_placePopupWindow:(struct CGPoint)arg1;
- (void)_buildUI;
- (void)_insertMatch:(id)arg1;
- (void)dealloc;
- (id)initWithWebView:(id)arg1 HTMLView:(id)arg2;

@end

