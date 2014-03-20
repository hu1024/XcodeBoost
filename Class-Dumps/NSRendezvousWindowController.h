//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ViewBridge/NSViewService.h>

@class NSString, NSWindow;

@interface NSRendezvousWindowController : NSViewService
{
    NSWindow *_window;
    NSString *_identifier;
}

+ (id)controllerForIdentifier:(id)arg1;
+ (id)controllerForWindow:(id)arg1;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSWindow *window; // @synthesize window=_window;
@property(readonly) NSString *parentIdentifier;
- (unsigned long long)awakeFromRemoteView;
- (void)loadView;
- (void)invalidate;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (void)initIvarsWithWindow:(id)arg1;
- (void)releaseIvars;

@end

