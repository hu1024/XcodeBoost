//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface CSXCWorkSchedule : NSObject
{
    NSString *_guid;
    NSString *_scheduleType;
    NSString *_entityGUID;
    NSString *_sessionGUID;
    NSNumber *_isEnabled;
    NSString *_workQueueName;
    NSDictionary *_workData;
    NSDictionary *_entitiesData;
    NSArray *_recurrences;
}

+ (void)initialize;
@property(retain) NSArray *recurrences; // @synthesize recurrences=_recurrences;
@property(retain) NSDictionary *entitiesData; // @synthesize entitiesData=_entitiesData;
@property(retain) NSDictionary *workData; // @synthesize workData=_workData;
@property(retain) NSString *workQueueName; // @synthesize workQueueName=_workQueueName;
@property(retain) NSNumber *isEnabled; // @synthesize isEnabled=_isEnabled;
@property(retain) NSString *sessionGUID; // @synthesize sessionGUID=_sessionGUID;
@property(retain) NSString *entityGUID; // @synthesize entityGUID=_entityGUID;
@property(retain) NSString *scheduleType; // @synthesize scheduleType=_scheduleType;
@property(retain) NSString *guid; // @synthesize guid=_guid;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

