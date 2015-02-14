/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:44 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/CNContactUpdate.h>

@class CNPropertyDescription, CNMultiValueDiff, NSString;

@interface CNContactMultiValueDiffUpdate : NSObject <CNContactUpdate> {

	CNPropertyDescription* _property;
	CNMultiValueDiff* _diff;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)property;
-(id)initWithProperty:(id)arg1 diff:(id)arg2 ;
-(void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2 ;
-(void)applyToABCDContact:(id)arg1 ;
-(id)mutableMultiValueOnContact:(id)arg1 ;
-(void)applyToABPerson:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
@end

