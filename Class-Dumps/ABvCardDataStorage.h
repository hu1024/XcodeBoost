//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABvCardSerializationStorage.h"

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface ABvCardDataStorage : NSObject <ABvCardSerializationStorage>
{
    NSMutableData *_data;
}

+ (id)storageWithData:(id)arg1;
- (void)insertString:(id)arg1 atMarker:(id)arg2;
- (unsigned long long)estimatedDataLength;
- (id)insertionMarker;
- (unsigned long long)currentLength;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2;
- (void)appendString:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

