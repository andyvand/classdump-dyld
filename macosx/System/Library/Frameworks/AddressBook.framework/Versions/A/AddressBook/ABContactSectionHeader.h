/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface ABContactSectionHeader : NSObject {

	NSDictionary* _info;
	NSString* _nameTransform;

}

@property (readonly) NSString * firstCharacterAfterLanguage; 
@property (readonly) NSString * lastCharacter; 
@property (readonly) NSArray * headers; 
@property (readonly) NSString * nameTransform;                            //@synthesize nameTransform=_nameTransform - In the implementation block
-(NSString *)lastCharacter;
-(NSString *)firstCharacterAfterLanguage;
-(id)initWithInfo:(id)arg1 ;
-(NSString *)nameTransform;
-(NSArray *)headers;
-(void)dealloc;
-(id)description;
@end

