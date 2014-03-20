//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface DVTStackBacktrace : NSObject
{
    unsigned long long *_returnAddresses;
    unsigned long long _returnAddressesCount;
    NSMutableArray *_symbolicatedArrayRepresentation;
}

+ (unsigned long long *)_callStackReturnAddressesExcludingTopFrames:(unsigned long long)arg1 returningCount:(unsigned long long *)arg2;
+ (unsigned long long *)_callStackReturnAddressesFromNumbers:(id)arg1 excludingTopFrames:(unsigned long long)arg2 returningCount:(unsigned long long *)arg3;
+ (id)currentStackBacktrace;
+ (id)stackBacktraceWithCallStackReturnAddresses:(id)arg1;
- (void).cxx_destruct;
- (id)callStackReturnAddresses;
- (id)_frameForAddress:(unsigned long long)arg1 symbolicatorPtr:(struct _CSTypeRef *)arg2 symbolPtr:(struct _CSTypeRef *)arg3;
- (id)symbolicatedStackBacktraceFrames;
- (id)stringRepresentation;
- (void)dealloc;
- (id)initWithCallStackReturnAddresses:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)init;

@end

