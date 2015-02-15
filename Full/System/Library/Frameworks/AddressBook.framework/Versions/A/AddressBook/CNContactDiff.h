/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface CNContactDiff : NSObject {

	NSArray* _updates;

}

@property (copy,readonly) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
-(void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2 ;
-(void)applyToABCDContact:(id)arg1 ;
-(id)initWithUpdates:(id)arg1 ;
-(id)contactByApplyingUpdatesToContact:(id)arg1 ;
-(void)applyToMutableContacts:(id)arg1 withIdentifierMap:(id)arg2 ;
-(void)applyToABPerson:(id)arg1 inAddressBook:(id)arg2 ;
-(NSArray *)updates;
-(void)dealloc;
-(id)description;
@end

