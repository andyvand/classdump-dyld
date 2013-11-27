/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:27:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class ABModel, NSArray, NSDictionary, ACAccountStore;

@interface ABStarkGroupsDataSource : NSObject <UITableViewDataSource> {

	ABModel* _model;
	NSArray* _accountIdentifiers;
	NSArray* _accountDisplayNames;
	NSDictionary* _groupsByAccountIdentifier;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) ABModel * model;                            //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(id)groupWrapperForIndexPath:(id)arg1 ;
-(void)setAccountStore:(id)arg1 ;
-(id)accountStore;
-(void)reloadDataIncludingAccountStore:(BOOL)arg1 usingArchivedState:(BOOL)arg2 ;
-(int)numberOfGroupsInAccountAtIndex:(int)arg1 ;
-(id)accountDisplayNameAtIndex:(int)arg1 ;
-(int)numberOfGroupsForAccountIdentifier:(id)arg1 ;
-(void)scheduleRefresh;
-(void)cancelScheduledRefresh;
-(int)numberOfAccounts;
-(id)titleForIndexPath:(id)arg1 ;
-(id)newContactsFilterForIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)model;
-(void)setModel:(id)arg1 ;
@end
