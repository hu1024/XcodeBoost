//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSScrollingScore : NSObject
{
    double _averageFrameRateInFPS;
    double _meanFrameDurationInMs;
    double _normalizedFrameDurationStdDev;
    double _holdRate;
    double _slipRate;
    double _scrollDurationInSec;
    double _scrollDelayInMs;
    long long _holdCount;
    long long _slipCount;
}

@property double scrollDelayInMs; // @synthesize scrollDelayInMs=_scrollDelayInMs;
@property(readonly) double scrollDurationInSec; // @synthesize scrollDurationInSec=_scrollDurationInSec;
@property(readonly) double frameRate; // @synthesize frameRate=_averageFrameRateInFPS;
@property long long slipCount; // @synthesize slipCount=_slipCount;
@property long long holdCount; // @synthesize holdCount=_holdCount;
@property double slipRate; // @synthesize slipRate=_slipRate;
@property double holdRate; // @synthesize holdRate=_holdRate;
@property(readonly) double normalizedFrameVariation; // @synthesize normalizedFrameVariation=_normalizedFrameDurationStdDev;
- (long long)comparedToScore:(id)arg1;
- (id)scoreString;
- (id)initWithScrollingResults:(id)arg1;

@end

