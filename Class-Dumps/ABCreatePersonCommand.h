//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAccount, ABAddressBook, ABPersonListController, NSArray, NSManagedObjectContext, NSUndoManager;

@interface ABCreatePersonCommand : NSObject
{
    ABPersonListController *_personListController;
    NSManagedObjectContext *_managedObjectContext;
    NSUndoManager *_undoManager;
    NSArray *_parentGroupIDs;
    ABAccount *_destinationAccount;
    id <ABCreatePersonCommandDelegate> _delegate;
    ABAddressBook *_addressBook;
}

@property(retain) ABAccount *destinationAccount; // @synthesize destinationAccount=_destinationAccount;
@property(retain) NSArray *parentGroupIDs; // @synthesize parentGroupIDs=_parentGroupIDs;
@property(retain) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property(retain) id <ABCreatePersonCommandDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property(retain) ABPersonListController *personListController; // @synthesize personListController=_personListController;
- (void)updatePersonListControllerForPerson:(id)arg1;
- (void)setParentGroupsOfPerson:(id)arg1;
- (void)createPerson;
- (void)dealloc;

@end

