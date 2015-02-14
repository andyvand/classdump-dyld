/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/NSSecureCoding.h>

@class NSString, NSNumber;

@interface SFRemoteHotspotInfo : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _password;
	NSNumber* _channel;

}

@property (copy) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (copy) NSString * password;               //@synthesize password=_password - In the implementation block
@property (retain) NSNumber * channel;              //@synthesize channel=_channel - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)password;
-(NSNumber *)channel;
-(void)setChannel:(NSNumber *)arg1 ;
-(id)initWithName:(id)arg1 password:(id)arg2 channel:(id)arg3 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setPassword:(NSString *)arg1 ;
@end

