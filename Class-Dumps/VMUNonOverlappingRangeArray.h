//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Symbolication/VMURangeArray.h>

__attribute__((visibility("hidden")))
@interface VMUNonOverlappingRangeArray : VMURangeArray
{
}

- (struct _VMURange)largestUnusedWithInUse:(id)arg1;
- (id)subtract:(id)arg1 mergeRanges:(BOOL)arg2;
- (void)_mergeAllBitsOfRange:(struct _VMURange)arg1 excludingRanges:(id)arg2 mergeRanges:(BOOL)arg3;
- (void)mergeRanges:(id)arg1 excludingRanges:(id)arg2;
- (void)mergeRange:(struct _VMURange)arg1 excludingRanges:(id)arg2;
- (void)mergeRanges:(id)arg1;
- (void)mergeRange:(struct _VMURange)arg1;
- (void)sortAndMergeRanges;
- (void)addOrExtendRange:(struct _VMURange)arg1;

@end

