//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface IDSPushHandlerContext : NSObject
{
    struct dispatch_queue_s *_queue;
    NSSet *_topics;
    NSSet *_commands;
}

@property(readonly, nonatomic) struct dispatch_queue_s *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSSet *commands; // @synthesize commands=_commands;
@property(copy, nonatomic) NSSet *topics; // @synthesize topics=_topics;
- (void)dealloc;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1 topics:(id)arg2 commands:(id)arg3;

@end

