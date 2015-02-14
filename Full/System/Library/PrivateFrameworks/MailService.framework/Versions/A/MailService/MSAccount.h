/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailService.framework/Versions/A/MailService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailService/NSSecureCoding.h>

@class NSArray, NSString, NSUUID;

@interface MSAccount : NSObject <NSSecureCoding> {

	char _disableRecentsSync;
	NSArray* _addresses;
	NSString* _userName;
	NSUUID* _uniqueID;

}

@property (copy) NSArray * addresses;                    //@synthesize addresses=_addresses - In the implementation block
@property (copy) NSString * userName;                    //@synthesize userName=_userName - In the implementation block
@property (copy) NSUUID * uniqueID;                      //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign) char disableRecentsSync;              //@synthesize disableRecentsSync=_disableRecentsSync - In the implementation block
+(char)supportsSecureCoding;
-(char)disableRecentsSync;
-(void)setDisableRecentsSync:(char)arg1 ;
-(void)setUniqueID:(NSUUID *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueID;
-(NSString *)userName;
-(void)setUserName:(NSString *)arg1 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(id)initWithAddresses:(id)arg1 userName:(id)arg2 uniqueID:(id)arg3 ;
-(NSArray *)addresses;
@end

