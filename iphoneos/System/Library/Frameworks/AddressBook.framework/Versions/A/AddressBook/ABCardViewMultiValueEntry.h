/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:45 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBook/AddressBook-Structs.h>
@class NSString, NSArray, NSImage;

@interface ABCardViewMultiValueEntry : NSObject {

	NSString* _identifier;
	NSString* _label;
	id _value;
	NSString* _accountName;
	char _isReadOnly;
	char _isDuplicate;
	char _isPrivate;
	NSArray* _personIdentifiers;
	NSArray* _multiValueIdentifiers;
	NSImage* _accountBadge;

}

@property (copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (copy) id value;                                     //@synthesize value=_value - In the implementation block
@property (copy) NSString * accountName;                       //@synthesize accountName=_accountName - In the implementation block
@property (assign) char isReadOnly;                            //@synthesize isReadOnly=_isReadOnly - In the implementation block
@property (assign) char isDuplicate;                           //@synthesize isDuplicate=_isDuplicate - In the implementation block
@property (assign) char isPrivate;                             //@synthesize isPrivate=_isPrivate - In the implementation block
@property (copy) NSArray * personIdentifiers;                  //@synthesize personIdentifiers=_personIdentifiers - In the implementation block
@property (copy) NSArray * multiValueIdentifiers;              //@synthesize multiValueIdentifiers=_multiValueIdentifiers - In the implementation block
@property (retain) NSImage * accountBadge;                     //@synthesize accountBadge=_accountBadge - In the implementation block
+(id)entryWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
-(NSImage *)accountBadge;
-(void)setAccountBadge:(NSImage *)arg1 ;
-(id)initWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
-(char)isEqualIgnoringIdentifiers:(id)arg1 ;
-(NSArray *)personIdentifiers;
-(NSArray *)multiValueIdentifiers;
-(void)setPersonIdentifiers:(NSArray *)arg1 ;
-(void)setIsPrivate:(char)arg1 ;
-(void)setMultiValueIdentifiers:(NSArray *)arg1 ;
-(char)isReadOnly;
-(void)setAccountName:(NSString *)arg1 ;
-(void)setIsReadOnly:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(char)isDuplicate;
-(void)setIsDuplicate:(char)arg1 ;
-(NSString *)label;
-(id)value;
-(NSString *)accountName;
-(char)isPrivate;
@end

