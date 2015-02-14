/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABAbstractGroupEntriesFactory.h>

@class NSMutableArray;

@interface CNGroupListEntriesFactory : ABAbstractGroupEntriesFactory {

	NSMutableArray* _sections;

}
-(void)addSection:(id)arg1 ;
-(id)makeGroupEntries;
-(id)makeGroupEntriesWithHidingPolicy:(id)arg1 ;
-(id)init;
@end

