//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CPTextLineMerge : NSObject
{
    NSMutableArray *avail;
}

- (void)mergeLinesIn:(id)arg1;
- (void)dropCaps:(id)arg1 to:(id)arg2;
- (double)averageHeight:(id)arg1;
- (id)findLineFor:(id)arg1 in:(id)arg2;
- (void)detachDropCaps:(id)arg1 to:(id)arg2;
- (unsigned int)countOverlapsOfLineAtIndex:(unsigned int)arg1 in:(id)arg2;
- (void)removeOverlapping:(id)arg1;
- (void)makeOverlappingLinesTo:(id)arg1;
- (BOOL)hasOverlappingLines;
- (void)eliminate:(id)arg1;
- (void)mergeByColumn:(id)arg1;
- (void)mergeLinesInInterval:(id)arg1 from:(id)arg2;
- (void)mergeColumn:(id)arg1;
- (void)addInterval:(id)arg1 to:(id)arg2;
- (BOOL)fits:(id)arg1 into:(id)arg2;

@end

