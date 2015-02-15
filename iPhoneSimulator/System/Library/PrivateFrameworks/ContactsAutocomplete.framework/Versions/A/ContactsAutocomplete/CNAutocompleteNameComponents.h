/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:42 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsAutocomplete/ContactsAutocomplete-Structs.h>
#import <ContactsAutocomplete/NSCopying.h>

@class NSString;

@interface CNAutocompleteNameComponents : NSObject <NSCopying> {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _nickname;
	NSString* _nameSuffix;

}

@property (readonly) NSString * firstName;               //@synthesize firstName=_firstName - In the implementation block
@property (readonly) NSString * lastName;                //@synthesize lastName=_lastName - In the implementation block
@property (readonly) NSString * nickname;                //@synthesize nickname=_nickname - In the implementation block
@property (readonly) NSString * nameSuffix;              //@synthesize nameSuffix=_nameSuffix - In the implementation block
+(id)nameComponentsWithFirstName:(id)arg1 lastName:(id)arg2 nickname:(id)arg3 nameSuffix:(id)arg4 ;
-(NSString *)nameSuffix;
-(NSString *)nickname;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
@end

