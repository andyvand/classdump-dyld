/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:18 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/NSCopying.h>

@class NSString;

@interface CNGroupIdentifier : NSObject <NSCopying> {

	NSString* _stringValue;

}

@property (readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
+(id)identifierWithString:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
@end

