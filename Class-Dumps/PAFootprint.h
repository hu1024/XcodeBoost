//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding.h"

@class NSArray, PAGraphicsInfoCollector, PAMemoryObjectOrganizer;

@interface PAFootprint : NSObject <NSCoding>
{
    PAMemoryObjectOrganizer *memoryObjectOrganizer;
    NSArray *processes;
    long long footprintBytes;
    long long swappedBytes;
    PAGraphicsInfoCollector *graphicsInfoCollector;
    BOOL gatherMallocDetails;
    BOOL gatherDetailedProcessInfo;
    BOOL collapseSharing;
    BOOL showSwapped;
    BOOL showCategories;
    BOOL showRegions;
    BOOL gatherGraphicsData;
    int mallocDetailsDisclosureDepth;
    unsigned long long mallocDetailsMinimumBytes;
}

+ (id)footprintForProcessNames:(id)arg1 andPids:(id)arg2;
+ (id)footprintForProcesses:(id)arg1;
+ (id)footprintForProcessNames:(id)arg1 andPids:(id)arg2 withDetailedInfo:(BOOL)arg3 andMallocDetails:(BOOL)arg4 andTargetChildren:(BOOL)arg5 andSkipIdleExitClean:(BOOL)arg6 andGatherGraphicsData:(BOOL)arg7;
+ (id)footprintForProcessNames:(id)arg1 andPids:(id)arg2 withDetailedInfo:(BOOL)arg3 andMallocDetails:(BOOL)arg4 andTargetChildren:(BOOL)arg5;
+ (id)footprintForProcessNames:(id)arg1 andPids:(id)arg2 withDetailedInfo:(BOOL)arg3 andMallocDetails:(BOOL)arg4;
+ (id)footprintForProcesses:(id)arg1 withDetailedInfo:(BOOL)arg2 andMallocDetails:(BOOL)arg3;
+ (id)footprintForAllProcessesAndSkipIdleExitClean:(BOOL)arg1 andGatherGraphicsData:(BOOL)arg2;
+ (id)footprintForAllProcesses;
@property BOOL gatherGraphicsData; // @synthesize gatherGraphicsData;
@property BOOL collapseSharing; // @synthesize collapseSharing;
@property BOOL gatherDetailedProcessInfo; // @synthesize gatherDetailedProcessInfo;
@property unsigned long long mallocDetailsMinimumBytes; // @synthesize mallocDetailsMinimumBytes;
@property int mallocDetailsDisclosureDepth; // @synthesize mallocDetailsDisclosureDepth;
@property BOOL gatherMallocDetails; // @synthesize gatherMallocDetails;
@property BOOL showRegions; // @synthesize showRegions;
@property BOOL showCategories; // @synthesize showCategories;
@property BOOL showSwapped; // @synthesize showSwapped;
@property(readonly) long long swappedBytes; // @synthesize swappedBytes;
@property(readonly) long long footprintBytes; // @synthesize footprintBytes;
@property(readonly) NSArray *processes; // @synthesize processes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_sortedNonZeroProcessGroupsByFlavor:(int)arg1 forGroups:(id)arg2;
- (void)printDetailedMemoryTotalsForMemoryLabelled:(id)arg1 onProcess:(id)arg2 forSortedProcessGroups:(id)arg3 withTotalSize:(long long)arg4 andGroupDifferentiation:(BOOL)arg5 forFlavor:(int)arg6 callOutSwapped:(BOOL)arg7;
- (void)_printCategorySummaryWithDetails:(BOOL)arg1;
- (void)_printGraphicsSummaryForProcess:(id)arg1;
- (void)_printTotal;
- (void)printSummary;
- (id)_sortedProcesses;
- (void)_refreshDataStructures;
- (void)gatherData;
- (id)initWithProcessesNames:(id)arg1 andPids:(id)arg2 andTargetChildren:(BOOL)arg3;
- (id)initWithProcessesNames:(id)arg1 andPids:(id)arg2;
- (long long)footprintBytesForPid:(int)arg1;
- (long long)footprintBytesForProcess:(id)arg1;
- (void)_removeIdleExitCleanProcesses;
- (void)dealloc;
- (id)initWithProcesses:(id)arg1;
- (id)initForAllProcesses;
- (id)init;

@end

