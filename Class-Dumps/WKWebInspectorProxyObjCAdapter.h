//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSWindowDelegate.h"

@interface WKWebInspectorProxyObjCAdapter : NSObject <NSWindowDelegate>
{
    void *_inspectorProxy;
}

- (void)inspectedViewFrameDidChange:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)close;
- (void)attachBottom:(id)arg1;
- (void)attachRight:(id)arg1;
- (id)initWithWebInspectorProxy:(struct WebInspectorProxy *)arg1;
@property(readonly) struct OpaqueWKInspector *inspectorRef;

@end

