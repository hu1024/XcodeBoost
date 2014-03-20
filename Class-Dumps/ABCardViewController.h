//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABCardViewDataSourceDelegate.h"
#import "ABCardViewDelegate.h"
#import "ABCardViewSaveHelperDelegate.h"

@class ABCDContact, ABCardView, ABCardViewSaveHelper, ABCardViewUndoableDataSource, ABCommandExecutor, ABPerson, ABRemovesEmptyCardViewData, AKCardViewDataSource, AKCardViewDataSourceFactory, NSUndoManager;

@interface ABCardViewController : NSObject <ABCardViewDelegate, ABCardViewDataSourceDelegate, ABCardViewSaveHelperDelegate>
{
    ABCDContact *_contact;
    AKCardViewDataSource *_dataSource;
    ABCardViewUndoableDataSource *_undoableDataSource;
    ABCardView *_cardView;
    BOOL _shouldShowLinkedPeople;
    AKCardViewDataSourceFactory *_dataSourceFactory;
    ABRemovesEmptyCardViewData *_emptyDataRemover;
    NSUndoManager *_undoManager;
    ABCommandExecutor *_cardViewCommandExecutor;
    ABCommandExecutor *_commandExecutor;
    ABCardViewSaveHelper *_saveHelper;
    BOOL _shouldSave;
    BOOL _shouldDeferUpdates;
    BOOL _updateDeferred;
    ABPerson *_deferredPerson;
    BOOL _deferredShouldShowLinkedPeople;
}

@property(retain, nonatomic) ABPerson *deferredPerson; // @synthesize deferredPerson=_deferredPerson;
@property(retain, nonatomic) AKCardViewDataSourceFactory *dataSourceFactory; // @synthesize dataSourceFactory=_dataSourceFactory;
@property(nonatomic) BOOL shouldSave; // @synthesize shouldSave=_shouldSave;
@property(retain, nonatomic) ABCDContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) ABCardView *cardView; // @synthesize cardView=_cardView;
@property BOOL shouldShowLinkedPeople; // @synthesize shouldShowLinkedPeople=_shouldShowLinkedPeople;
@property(retain, nonatomic) ABRemovesEmptyCardViewData *emptyDataRemover; // @synthesize emptyDataRemover=_emptyDataRemover;
- (void)saveController:(id)arg1 didDeletePersonIdentifiers:(id)arg2;
@property(readonly, nonatomic) BOOL isSaving;
- (void)deferUpdates:(BOOL)arg1;
- (void)runWithDeferredUpdates:(CDUnknownBlockType)arg1;
- (void)applyCNContact:(id)arg1 toABPerson:(id)arg2;
- (void)dataSourceDidChangeValueForKey:(id)arg1;
- (void)dataSourceWillChangeValueForKey:(id)arg1;
- (void)dataSourceDidChange:(id)arg1;
- (void)cardViewPhotoDidChange:(id)arg1;
- (void)cardViewNoteDidChange:(id)arg1;
- (void)cardViewDidEndEditing:(id)arg1;
- (void)cardViewWillEndEditing:(id)arg1;
- (void)cardViewDidBeginEditing:(id)arg1;
- (void)removeEmptyItemsFromDataSource;
- (id)dataSource;
- (void)setUndoableDataSource;
- (BOOL)shouldUnify;
- (void)setDataSource;
- (void)runWithEnabledUndoRegistration:(CDUnknownBlockType)arg1;
- (BOOL)isEmpty;
- (void)finishEditing;
- (void)setDeferredPerson:(id)arg1 shouldShowLinkedPeople:(BOOL)arg2;
- (void)setPerson:(id)arg1 shouldShowLinkedPeople:(BOOL)arg2;
- (void)enableUndoWithManager:(id)arg1 addressBook:(id)arg2;
@property(retain, nonatomic) ABPerson *person;
- (void)refreshCardViewPreservingNoteInsertionPoint;
- (BOOL)canEdit;
- (void)refreshCardView;
- (void)dealloc;
- (id)initWithCardView:(id)arg1;

@end

