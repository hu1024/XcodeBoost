//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContactIdentifier, CNMutableSaveResponse, NSArray;

@protocol CNDataMapperSaveTransaction <NSObject>
- (BOOL)commitChangesWithSaveResponse:(CNMutableSaveResponse *)arg1 error:(id *)arg2;
- (void)deleteGroups:(NSArray *)arg1 withSaveResponse:(CNMutableSaveResponse *)arg2;
- (void)updateGroups:(NSArray *)arg1 withSaveResponse:(CNMutableSaveResponse *)arg2;
- (void)addGroups:(NSArray *)arg1 withSaveResponse:(CNMutableSaveResponse *)arg2;
- (void)setMeCardIdentifier:(CNContactIdentifier *)arg1 withSaveResponse:(CNMutableSaveResponse *)arg2;
- (void)clearMeCardIdentifierWithSaveResponse:(CNMutableSaveResponse *)arg1;
- (void)deleteContacts:(NSArray *)arg1 withSaveResponse:(CNMutableSaveResponse *)arg2;
- (void)updateContacts:(NSArray *)arg1 withSaveResponse:(CNMutableSaveResponse *)arg2;
- (void)addContacts:(NSArray *)arg1 withSaveResponse:(CNMutableSaveResponse *)arg2;
@end

