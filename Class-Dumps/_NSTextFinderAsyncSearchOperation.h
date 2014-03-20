//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSCondition, NSIndexSet, NSLock, NSMutableIndexSet, NSMutableRangeArray, NSString, NSTextFinderAsyncSearch;

__attribute__((visibility("hidden")))
@interface _NSTextFinderAsyncSearchOperation : NSOperation
{
    NSTextFinderAsyncSearch *_searchController;
    NSString *_searchString;
    NSString *_contentString;
    unsigned long long _searchOptions;
    unsigned long long _matchOptions;
    NSMutableRangeArray *_matchRanges;
    NSMutableIndexSet *_searchedIndexes;
    NSMutableIndexSet *_allSearchedIndexes;
    NSLock *_accessLock;
    NSCondition *_condition;
    NSIndexSet *_indexesWaitedFor;
    BOOL _finished;
}

@property(copy) NSIndexSet *indexesWaitedFor; // @synthesize indexesWaitedFor=_indexesWaitedFor;
@property(readonly) NSMutableIndexSet *searchedIndexes; // @synthesize searchedIndexes=_searchedIndexes;
@property(readonly) NSMutableRangeArray *matchRanges; // @synthesize matchRanges=_matchRanges;
@property unsigned long long matchOptions; // @synthesize matchOptions=_matchOptions;
@property unsigned long long searchOptions; // @synthesize searchOptions=_searchOptions;
@property(retain) NSString *contentString; // @synthesize contentString=_contentString;
@property(copy) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain) NSTextFinderAsyncSearch *searchController; // @synthesize searchController=_searchController;
- (void)main;
- (void)_sendUpdate;
- (BOOL)searchFinished;
- (BOOL)waitUntilSearchCompletedForRanges:(id)arg1 orTimeout:(double)arg2;
- (BOOL)_searchCompletedForIndexes:(id)arg1;
- (void)_addMatchRange:(struct _NSRange)arg1 searchedRange:(struct _NSRange)arg2;
- (void)accessSearchResultsInBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

