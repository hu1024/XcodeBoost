//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAccount, ABGroupEntry, NSArray;

__attribute__((visibility("hidden")))
@interface ABAccountGroupEntries : NSObject
{
    ABAccount *_account;
    ABGroupEntry *_entryForAllContacts;
    NSArray *_entriesForGroups;
    ABGroupEntry *_entryForSearching;
}

+ (id)entriesWithAccount:(id)arg1 addressBook:(id)arg2;
@property(readonly) ABGroupEntry *entryForSearching; // @synthesize entryForSearching=_entryForSearching;
@property(readonly) NSArray *entriesForGroups; // @synthesize entriesForGroups=_entriesForGroups;
@property(readonly) ABGroupEntry *entryForAllContacts; // @synthesize entryForAllContacts=_entryForAllContacts;
@property(readonly) ABAccount *account; // @synthesize account=_account;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 entryForAllContacts:(id)arg2 entriesForGroups:(id)arg3 entryForSearching:(id)arg4;

@end

