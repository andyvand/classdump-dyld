/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/NSCopying.h>
#import <AddressBook/NSMutableCopying.h>

@class CNGroupIdentifier, NSString;

@interface CNGroup : NSObject <NSCopying, NSMutableCopying> {

	CNGroupIdentifier* _identifier;
	NSString* _name;
	CNGroup* _snapshot;

}

@property (nonatomic,copy,readonly) CNGroupIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) CNGroup * snapshot; 
+(id)identifierProvider;
+(id)makeIdentifier;
+(id)makeIdentifierString;
+(id)predicateForIdentifiers:(id)arg1 ;
+(id)predicateForNamePrefix:(id)arg1 ;
-(CNGroup *)snapshot;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(CNGroupIdentifier *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)initWithGroup:(id)arg1 ;
@end

