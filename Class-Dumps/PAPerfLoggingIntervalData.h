//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PAPerfLoggingResult.h"

@class NSArray, NSString, PAAggregatedStackshot;

@interface PAPerfLoggingIntervalData : NSObject <PAPerfLoggingResult>
{
    NSString *_intervalType;
    NSString *_processName;
    NSString *_operationCategory;
    NSString *_operationName;
    double *_intervalDurationInMsArray;
    double *_intervalStartTimeInSecArray;
    NSArray *_processedContextDataArray;
    double _averageIntervalDurationInMs;
    double _standardDeviationIntervalDurationInMs;
    double _normalizedStandardDeviation;
    unsigned long long _intervalCount;
    unsigned long long _numUnpairedTransitions;
    double _operationStartTimeInSec;
    double _operationEndTimeInSec;
    double _firstIntervalStartInSec;
    NSArray *_aggregatedStackshotsForIntervals;
    PAAggregatedStackshot *_initialDelayStackshot;
    PAAggregatedStackshot *_trailingDelayStackshot;
}

@property(readonly) PAAggregatedStackshot *trailingDelayStackshot; // @synthesize trailingDelayStackshot=_trailingDelayStackshot;
@property(readonly) PAAggregatedStackshot *initialDelayStackshot; // @synthesize initialDelayStackshot=_initialDelayStackshot;
@property(readonly) NSArray *aggregatedStackshotsForIntervals; // @synthesize aggregatedStackshotsForIntervals=_aggregatedStackshotsForIntervals;
@property(readonly) NSArray *processedContextDataArray; // @synthesize processedContextDataArray=_processedContextDataArray;
@property(readonly) const double *intervalStartTimeInSecArray; // @synthesize intervalStartTimeInSecArray=_intervalStartTimeInSecArray;
@property(readonly) double *intervalDurationInMsArray; // @synthesize intervalDurationInMsArray=_intervalDurationInMsArray;
@property(readonly) double operationEndTimeInSec; // @synthesize operationEndTimeInSec=_operationEndTimeInSec;
@property(readonly) double operationStartTimeInSec; // @synthesize operationStartTimeInSec=_operationStartTimeInSec;
@property(retain) NSString *operationName; // @synthesize operationName=_operationName;
@property(retain) NSString *operationCategory; // @synthesize operationCategory=_operationCategory;
@property(retain) NSString *processName; // @synthesize processName=_processName;
@property unsigned long long numUnpairedIntervalEndsOrStarts; // @synthesize numUnpairedIntervalEndsOrStarts=_numUnpairedTransitions;
@property unsigned long long intervalCount; // @synthesize intervalCount=_intervalCount;
@property(readonly) double normalizedStandardDeviation; // @synthesize normalizedStandardDeviation=_normalizedStandardDeviation;
@property(readonly) double standardDeviationIntervalDurationInMs; // @synthesize standardDeviationIntervalDurationInMs=_standardDeviationIntervalDurationInMs;
@property(readonly) double averageIntervalDurationInMs; // @synthesize averageIntervalDurationInMs=_averageIntervalDurationInMs;
@property(retain) NSString *intervalType; // @synthesize intervalType=_intervalType;
- (void)printTimelineToFile:(struct __sFILE *)arg1;
- (void)logIntervalData:(BOOL)arg1;
- (void)addIntervalDataToMessageTracerMessage:(struct __aslmsg *)arg1;
- (void)_addNSStringDataType:(id)arg1 andDoubleValue:(double)arg2 toMessageTracerMessage:(struct __aslmsg *)arg3;
- (char *)_newMessageTracerIntervalSpecificCStringKeyForNSStringDataType:(id)arg1;
- (void)_logPAPerfLoggingDataValue:(double)arg1 uom:(id)arg2 doLocalLogging:(BOOL)arg3;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithIntervalType:(id)arg1 andIntervalDurationInMSArray:(double *)arg2 andIntervalStartTimeInSecArray:(double *)arg3 ofLength:(unsigned long long)arg4 andNumUnpairedTransitions:(unsigned long long)arg5 andTimeOfFirstIntervalStartInSec:(double)arg6 andProcessedMetaDataArray:(id)arg7 andAggregatedStackshotsForIntervals:(id)arg8 andAggregatedStackshotForInitialDelay:(id)arg9 andAggregatedStackshotForTrailingDelay:(id)arg10 withPAPerfLoggingData:(id)arg11;
- (void)_initializeFieldsFromParentOperationInformation:(id)arg1;
@property(readonly) double timeBetweenOperationStartAndFirstIntervalInMs;
@property(readonly) double intervalRateOverOperationIgnoringDelayInIntervalsPerSec;
@property(readonly) double intervalRateOverOperationInIntervalsPerSec;
@property(readonly) double totalOperationDurationInMs;
- (BOOL)_isWSFrameInterval;

@end

