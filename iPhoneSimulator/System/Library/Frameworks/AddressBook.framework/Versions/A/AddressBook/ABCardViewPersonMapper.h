/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CNContact, CNContactStore, ABMultiDictionary, NSDictionary;

@interface ABCardViewPersonMapper : NSObject {

	CNContact* _person;
	CNContactStore* _addressBook;
	ABMultiDictionary* _multiValueIdentifierMap;
	NSDictionary* _personIdentifierToAccountMap;

}

@property (retain) ABMultiDictionary * multiValueIdentifierMap;                       //@synthesize multiValueIdentifierMap=_multiValueIdentifierMap - In the implementation block
@property (retain,readonly) NSDictionary * personIdentifierToAccountMap;              //@synthesize personIdentifierToAccountMap=_personIdentifierToAccountMap - In the implementation block
+(id)mapperWithPerson:(id)arg1 addressBook:(id)arg2 ;
-(char)isUnified;
-(id)initWithPerson:(id)arg1 addressBook:(id)arg2 ;
-(id)accountForPersonIdentifier:(id)arg1 ;
-(ABMultiDictionary *)multiValueIdentifierMap;
-(id)personIdentifiers;
-(void)buildIdentifierMap;
-(void)buildPersonToAccountMap;
-(id)personWithPersonIdentifier:(id)arg1 ;
-(id)peopleWithMultiValueIdentifier:(id)arg1 forKey:(id)arg2 ;
-(id)peopleWithIdentifier:(id)arg1 key:(id)arg2 ;
-(id)personIdentifiersWithIdentifier:(id)arg1 key:(id)arg2 ;
-(void)setMultiValueIdentifierMap:(ABMultiDictionary *)arg1 ;
-(NSDictionary *)personIdentifierToAccountMap;
-(void)dealloc;
-(id)people;
@end

