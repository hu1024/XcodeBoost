//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol ABCompare
- (BOOL)_abCompareNotWithinIntervalFromTodayYearless:(id)arg1;
- (BOOL)_abCompareNotWithinIntervalFromToday:(id)arg1;
- (BOOL)_abCompareWithinIntervalFromTodayYearless:(id)arg1;
- (BOOL)_abCompareWithinIntervalFromToday:(id)arg1;
- (BOOL)_abCompareNotWithinIntervalAroundTodayYearless:(id)arg1;
- (BOOL)_abCompareNotWithinIntervalAroundToday:(id)arg1;
- (BOOL)_abCompareWithinIntervalAroundTodayYearless:(id)arg1;
- (BOOL)_abCompareWithinIntervalAroundToday:(id)arg1;
- (BOOL)_abCompareSuffixMatch:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)_abComparePrefixMatch:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)_abCompareContainsSubString:(id)arg1 options:(unsigned long long)arg2;
- (long long)_abCompare:(id)arg1 ascending:(BOOL)arg2 options:(unsigned long long)arg3;
@end

