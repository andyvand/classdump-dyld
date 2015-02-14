/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/ABVCardFileSerializer.h>

@class NSMutableArray, NSFileHandle, NSURL;

@interface ABVCardSingleFileSerializer : ABVCardFileSerializer {

	NSMutableArray* _names;
	char _usePeopleNamesAsName;
	NSFileHandle* _cardHandle;
	NSURL* _cardURL;

}

@property (copy) NSURL * cardURL;              //@synthesize cardURL=_cardURL - In the implementation block
+(id)serializerWithBasePath:(id)arg1 names:(id)arg2 ;
-(void)serializePeople:(id)arg1 addressBook:(id)arg2 ;
-(id)initWithBasePath:(id)arg1 ;
-(id)makeProgress;
-(void)serializePersonWithName:(id)arg1 vCardData:(id)arg2 ;
-(void)overrideNames:(id)arg1 ;
-(void)setCardURL:(NSURL *)arg1 ;
-(NSURL *)cardURL;
-(void)dealloc;
@end

