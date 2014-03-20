//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInspectorBar, NSString, NSView;

@interface NSInspectorBarItem : NSObject
{
    NSString *_identifier;
    NSInspectorBar *_inspectorBar;
    id <NSInspectorBarItemController> _controller;
}

+ (id)separatorItem;
@property(readonly) NSInspectorBar *inspectorBar; // @synthesize inspectorBar=_inspectorBar;
@property(readonly) id <NSInspectorBarItemController> controller; // @synthesize controller=_controller;
- (void)_setInspectorBar:(id)arg1;
@property(readonly) NSView *view; // @dynamic view;
@property(readonly) NSString *identifier;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 controller:(id)arg2;

@end

