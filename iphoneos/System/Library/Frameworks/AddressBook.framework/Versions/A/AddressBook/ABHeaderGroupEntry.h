/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABGroupEntry.h>

@class ABAccount, NSArray;

@interface ABHeaderGroupEntry : ABGroupEntry {

	ABAccount* _account;
	NSArray* _children;

}

@property (copy,readonly) NSArray * children;              //@synthesize children=_children - In the implementation block
-(char)canShowStatusForAccountWithIdentifier:(id)arg1 ;
-(char)isGroupItem;
-(char)canShowStatus;
-(id)tableViewIdentifier;
-(id)initWithName:(id)arg1 account:(id)arg2 children:(id)arg3 ;
-(unsigned long long)textAlignment;
-(void)dealloc;
-(id)accessibilityDescription;
-(double)rowHeight;
-(id)initWithName:(id)arg1 ;
-(NSArray *)children;
-(id)account;
@end

