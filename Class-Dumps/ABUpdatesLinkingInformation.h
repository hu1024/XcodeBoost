//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ABUpdatesLinkingInformation : NSObject
{
    id <ABLinkingInfoDataSource> _adapter;
}

- (void)unlinkLoneRemainingPeople;
- (void)updatePreferredPhotoFlags;
- (void)updatePreferredNameFlags;
- (void)linkInsertedPeople;
- (void)updateLinkingInformation;
- (void)dealloc;
- (id)initWithAdapter:(id)arg1;

@end

