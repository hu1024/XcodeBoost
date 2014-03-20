//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABRecordImplProtocol.h"

@class ABGroup, ABPerson, ABRecord, NSArray, NSString;

@protocol ABGroupImplProtocol <ABRecordImplProtocol>
- (BOOL)nts_SetDistributionIdentifier:(NSString *)arg1 forProperty:(NSString *)arg2 person:(ABPerson *)arg3 inGroup:(ABGroup *)arg4 allowFetching:(BOOL)arg5;
- (NSString *)nts_DistributionIdentifierForProperty:(NSString *)arg1 person:(ABPerson *)arg2 inGroup:(ABGroup *)arg3;
- (BOOL)isGroup:(ABGroup *)arg1 parentOfRecord:(ABRecord *)arg2;
- (NSArray *)nts_SubgroupsOfGroup:(ABGroup *)arg1;
- (BOOL)nts_RemoveSubgroup:(ABGroup *)arg1 fromGroup:(ABGroup *)arg2;
- (BOOL)nts_AddSubgroup:(ABGroup *)arg1 toGroup:(ABGroup *)arg2;
- (BOOL)nts_SetMembers:(NSArray *)arg1 ofGroup:(ABGroup *)arg2;
- (NSArray *)nts_MembersOfGroup:(ABGroup *)arg1;
- (BOOL)nts_RemoveMember:(ABPerson *)arg1 fromGroup:(ABGroup *)arg2;
- (BOOL)nts_AddMember:(ABPerson *)arg1 toGroup:(ABGroup *)arg2;
@end

