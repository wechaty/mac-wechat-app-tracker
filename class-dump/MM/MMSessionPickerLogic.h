//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseSearchLogic.h"

@class MessageData, NSArray, NSCharacterSet, NSMutableArray, WCContactData;

@interface MMSessionPickerLogic : MMBaseSearchLogic
{
    NSMutableArray *_displayedRows;
    NSMutableArray *_selectedRows;
    NSMutableArray *_availableRows;
    NSMutableArray *_reservedRows;
    NSMutableArray *_searchedRows;
    NSArray *_groupsForSearch;
    NSArray *_contactsForSearch;
    BOOL _needsDetermineAvailable;
    BOOL _needsDetermineDisplayed;
    NSCharacterSet *_strictLetterCharacterSet;
    BOOL _allowsMultipleSelection;
    BOOL _showsGroupChats;
    BOOL _showsTags;
    BOOL _showsOfficialAccounts;
    BOOL _showsOtherNonhumanChats;
    unsigned int _categoryLabelIndex;
    unsigned long long _type;
    WCContactData *_preSelectedContact;
    WCContactData *_assignedContact;
    NSArray *_filteredUserNames;
    NSArray *_preSelectedUserNames;
    NSArray *_initialSelectedResults;
    unsigned long long _keyboardFocusedRow;
    MessageData *_messData;
    NSArray *_assignedUserNames;
}

+ (id)genAppFinderMessageData:(id)arg1;
+ (id)genAppURLMessageData:(id)arg1 url:(id)arg2 desc:(id)arg3;
+ (id)initWithMessageData:(id)arg1;
+ (id)wrapMessageDataByMessageList:(id)arg1 isNeedMerge:(BOOL)arg2 isToWeWork:(BOOL)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *assignedUserNames; // @synthesize assignedUserNames=_assignedUserNames;
@property(retain, nonatomic) MessageData *messData; // @synthesize messData=_messData;
@property(nonatomic) unsigned long long keyboardFocusedRow; // @synthesize keyboardFocusedRow=_keyboardFocusedRow;
@property(retain, nonatomic) NSArray *initialSelectedResults; // @synthesize initialSelectedResults=_initialSelectedResults;
@property(retain, nonatomic) NSArray *preSelectedUserNames; // @synthesize preSelectedUserNames=_preSelectedUserNames;
@property(nonatomic) BOOL showsOtherNonhumanChats; // @synthesize showsOtherNonhumanChats=_showsOtherNonhumanChats;
@property(nonatomic) BOOL showsOfficialAccounts; // @synthesize showsOfficialAccounts=_showsOfficialAccounts;
@property(nonatomic) BOOL showsTags; // @synthesize showsTags=_showsTags;
@property(nonatomic) BOOL showsGroupChats; // @synthesize showsGroupChats=_showsGroupChats;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) unsigned int categoryLabelIndex; // @synthesize categoryLabelIndex=_categoryLabelIndex;
@property(retain, nonatomic) NSArray *filteredUserNames; // @synthesize filteredUserNames=_filteredUserNames;
@property(retain, nonatomic) WCContactData *assignedContact; // @synthesize assignedContact=_assignedContact;
@property(retain, nonatomic) WCContactData *preSelectedContact; // @synthesize preSelectedContact=_preSelectedContact;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)handleSearchResults:(id)arg1 withKeyWord:(id)arg2;
- (void)reloadSearchResultDataWithKeyword:(id)arg1 resultContainer:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)doSearchWithKeyword:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getContactSelectedEnableTitleForMsg:(id)arg1;
- (BOOL)isContactSelectedEnableForGroup:(id)arg1;
- (id)_normalizeNameString:(id)arg1;
- (id)generateGroupMemberList:(id)arg1 filterSelf:(BOOL)arg2;
- (id)generateAvailableTags;
- (id)generateAvailableContacts;
- (BOOL)shouldFilterContact:(id)arg1;
- (void)updatePickerRow:(id)arg1 withContact:(id)arg2;
- (void)updatePickerRow:(id)arg1 withTag:(id)arg2;
- (id)pickerRowFromContact:(id)arg1;
- (unsigned long long)firstKeyboardFocusableRow;
- (BOOL)focusPreviousRow;
- (BOOL)focusNextRow;
- (void)deselectedContact:(id)arg1;
- (void)deselectedTag:(id)arg1;
- (void)dePreSelectUserName:(id)arg1;
- (void)setChosen:(BOOL)arg1 andIsSingleChoice:(BOOL)arg2 forRow:(id)arg3;
- (void)resetGroupContactsForSearch;
- (void)resetContactsForSearch;
- (void)resetAllContactsForSearch;
- (void)resetDetermineDisplayedRows;
- (void)resetCommonData;
- (void)removeAllSelectedUser;
- (void)clearLogicData;
@property(readonly, nonatomic) BOOL isSearching;
- (void)setKeyword:(id)arg1;
@property(readonly, nonatomic) NSArray *contactsForSearch;
@property(readonly, nonatomic) NSArray *selectedRows;
@property(readonly, nonatomic) NSArray *displayedRows;
- (void)_determineSearchedRows;
- (void)_determineDisplayedRows;
- (void)_determineAvailableRows;
- (id)init;

@end
