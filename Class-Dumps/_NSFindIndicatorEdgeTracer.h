//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _NSFindIndicatorEdgeTracer : NSObject
{
    NSArray *rects;
}

- (void)enumerateCornersWithBlock:(CDUnknownBlockType)arg1;
- (void)_getValues:(id *)arg1 ranges:(id *)arg2 forEdge:(unsigned long long)arg3;
- (id)_unspecifiedRangesInArray:(id)arg1 withRange:(CDStruct_c3b9c2ee)arg2;
- (unsigned long long)_indexInArray:(id)arg1 beforeOrContainingRangeValue:(double)arg2;
- (CDStruct_c3b9c2ee)_rangeInArray:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithRects:(id)arg1;

@end

