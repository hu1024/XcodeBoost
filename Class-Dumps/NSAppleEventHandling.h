//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAppleEventDescriptor, NSScriptCommand;

__attribute__((visibility("hidden")))
@interface NSAppleEventHandling : NSObject
{
    NSAppleEventDescriptor *_event;
    NSAppleEventDescriptor *_replyEvent;
    NSScriptCommand *_scriptCommand;
    BOOL _isSuspendedWithAE;
    char _padding[3];
}

- (void)resumeWithScriptCommandResult:(id)arg1;
- (void)suspend;
- (id)scriptCommand;
- (id)replyEvent;
- (id)event;
- (void)setScriptCommand:(id)arg1;
- (void)dealloc;
- (id)initWithEvent:(const struct AEDesc *)arg1 replyEvent:(struct AEDesc *)arg2;

@end

