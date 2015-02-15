/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:26:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABCardViewController.h>

@class ABPersonListController, NSString;

@interface ABBookCardViewController : ABCardViewController {

	ABPersonListController* _personListController;
	NSString* _nameBeforeEditing;
	char _didSuspendSorting;

}

@property (nonatomic,copy) NSString * nameBeforeEditing;              //@synthesize nameBeforeEditing=_nameBeforeEditing - In the implementation block
-(id)initWithCardView:(id)arg1 personListController:(id)arg2 ;
-(void)setNameBeforeEditing:(NSString *)arg1 ;
-(NSString *)nameBeforeEditing;
-(void)cardViewDidBeginEditing:(id)arg1 ;
-(void)cardViewDidEndEditing:(id)arg1 ;
-(void)dataSourceWillChangeValueForKey:(id)arg1 ;
-(void)dataSourceDidChangeValueForKey:(id)arg1 ;
-(void)dealloc;
@end
