//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSButton, NSButtonCell, NSMutableArray, NSPanel, NSPopUpButton, NSSecureTextField, NSTableView, NSTextField, NSView;

@interface ABLDAP_ConfigController : NSObject
{
    NSButton *helpButton;
    NSButtonCell *deleteButton;
    NSButtonCell *addButton;
    NSButton *editButton;
    NSButton *cancelButton;
    NSView *configView;
    NSTextField *portField;
    NSButton *sslButton;
    NSButton *saveButton;
    NSPopUpButton *scopePopup;
    NSTextField *searchBaseField;
    NSTextField *serverField;
    NSTableView *serverTableView;
    NSTextField *titleField;
    NSPanel *ldapServerSheet;
    NSTextField *serverAuthUsernameField;
    NSSecureTextField *serverAuthPasswordField;
    NSPopUpButton *serverAuthTypePopup;
    NSMutableArray *_serverList;
    BOOL _editMode;
    BOOL _configuring;
    BOOL _ldapServerIsValid;
}

@property BOOL ldapServerIsValid; // @synthesize ldapServerIsValid=_ldapServerIsValid;
- (id)serverFieldValue;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)useSSL:(id)arg1;
- (void)help:(id)arg1;
- (void)_validateLDAPServer;
- (void)_refreshServerList;
- (void)_loadConfigPanel:(id)arg1;
- (void)_clearConfigPanel;
- (void)editorDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)cancelChanges:(id)arg1;
- (void)acceptChanges:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)_displayLDAPServerSheetOrPanel;
- (void)setupAuthType:(id)arg1;
- (void)addAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)deletionAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)editServerAction:(id)arg1;
- (id)LDAPConfigView;
- (void)finalize;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

@end

