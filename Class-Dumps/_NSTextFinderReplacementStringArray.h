//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSArray.h>

@class NSString, _NSTextFinderImpl;

__attribute__((visibility("hidden")))
@interface _NSTextFinderReplacementStringArray : NSArray
{
    struct _NSRange *replacementRanges;
    unsigned long long length;
    NSString *string;
    NSString *replacementString;
    BOOL hasReplacePattern;
    BOOL replacePatternHasBackreferences;
    id replacementStringCache;
    _NSTextFinderImpl *impl;
}

- (void)finalize;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithTextFinder:(id)arg1 replacementRanges:(struct _NSRange *)arg2 length:(unsigned long long)arg3;

@end

