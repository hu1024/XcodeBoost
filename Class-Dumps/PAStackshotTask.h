//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PAStackshotTask : NSObject
{
    NSMutableArray *threadSnapshots;
    struct task_snapshot *task_snap;
}

- (const struct task_snapshot *)task_snap;
- (id)threadSnapshots;
- (void)printTask;
- (unsigned long long)bytesUsedInBuffer;
- (void)dealloc;
- (id)initWithTraceBufferPosition:(const char *)arg1;
- (unsigned long long)bytesUsedByHeader;

@end

