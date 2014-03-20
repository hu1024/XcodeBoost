//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface NSHyphenator : NSObject
{
    NSMapTable *exceptionsTable;
    NSMapTable *patternTable;
    char *patternMemory;
    unsigned long long maxPatternLength;
}

+ (id)sharedInstance;
- (unsigned long long)getHyphenLocations:(unsigned long long *)arg1 inString:(id)arg2 wordAtIndex:(unsigned long long)arg3;
- (unsigned long long)getHyphenLocations:(unsigned long long *)arg1 inString:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

