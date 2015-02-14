/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/CNMultiValueUpdate.h>

@class NSString;

@interface CNMultiValueAddUpdate : NSObject <CNMultiValueUpdate> {

	id _value;
	NSString* _label;
	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithValue:(id)arg1 label:(id)arg2 identifier:(id)arg3 ;
-(void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2 ;
-(void)applyToABMutableMultiValue:(id)arg1 transform:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSString *)description;
@end

