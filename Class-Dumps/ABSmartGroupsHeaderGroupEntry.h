//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABHeaderGroupEntry.h>

@class ABAddressBook, ABGroup;

__attribute__((visibility("hidden")))
@interface ABSmartGroupsHeaderGroupEntry : ABHeaderGroupEntry
{
    ABAddressBook *_addressBook;
    ABGroup *_group;
}

@property(readonly) ABGroup *group; // @synthesize group=_group;
@property(readonly) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (id)createGroupInSectionHelperWithFactory:(id)arg1;
- (BOOL)canCreateGroupInSection;
- (id)iconWithStyleProvider:(id)arg1;
- (id)selectHelperWithFactory:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 children:(id)arg2 addressBook:(id)arg3;

@end

