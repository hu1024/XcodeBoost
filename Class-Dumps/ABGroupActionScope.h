//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAccount, ABAddressBook, ABGroup, ABRecordContext;

__attribute__((visibility("hidden")))
@interface ABGroupActionScope : NSObject
{
    ABAccount *_account;
    ABAddressBook *_addressBook;
    ABRecordContext *_recordContext;
    ABGroup *_group;
}

@property(readonly) ABRecordContext *recordContext; // @synthesize recordContext=_recordContext;
@property(readonly) ABGroup *group; // @synthesize group=_group;
@property(readonly) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(readonly) ABAccount *account; // @synthesize account=_account;
- (id)groups;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 addressBook:(id)arg2 group:(id)arg3;
- (id)initWithGroup:(id)arg1;

@end

