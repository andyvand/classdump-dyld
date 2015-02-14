/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWLAN/CoreWLAN-Structs.h>
#import <CoreWLAN/NSCopying.h>
#import <CoreWLAN/NSCoding.h>

@class NSString;

@interface CW8021XProfile : NSObject <NSCopying, NSCoding> {

	NSString* _userDefinedName;
	NSString* _ssid;
	NSString* _username;
	NSString* _password;
	char _alwaysPromptForPassword;

}

@property (copy) NSString * userDefinedName;                  //@synthesize userDefinedName=_userDefinedName - In the implementation block
@property (copy) NSString * ssid;                             //@synthesize ssid=_ssid - In the implementation block
@property (copy) NSString * username;                         //@synthesize username=_username - In the implementation block
@property (copy) NSString * password;                         //@synthesize password=_password - In the implementation block
@property (assign) char alwaysPromptForPassword;              //@synthesize alwaysPromptForPassword=_alwaysPromptForPassword - In the implementation block
+(id)allUser8021XProfiles;
+(id)profile;
-(NSString *)password;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(char)isEqualToProfile:(id)arg1 ;
-(NSString *)userDefinedName;
-(char)alwaysPromptForPassword;
-(void)setUserDefinedName:(NSString *)arg1 ;
-(void)setAlwaysPromptForPassword:(char)arg1 ;
-(void)setSsid:(NSString *)arg1 ;
-(NSString *)ssid;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
@end

