/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Contacts.framework/Contacts
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface CNInstantMessageAddress : NSObject <NSCopying> {

	NSString* _username;
	NSString* _service;

}

@property (readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (readonly) NSString * service;               //@synthesize service=_service - In the implementation block
+(id)instantMessageAddressWithUsername:(id)arg1 service:(id)arg2 ;
-(id)initWithUsername:(id)arg1 service:(id)arg2 ;
-(id)service;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)addressDictionary;
-(id)username;
@end
