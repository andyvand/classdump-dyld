/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/NSSecureCoding.h>

@class NSString, NSNumber, NSDictionary;

@interface ISSignInPromptResponse : NSObject <NSSecureCoding> {

	long long returnCode;
	NSString* username;
	NSString* password;
	NSNumber* suppressionCheckboxState;
	NSDictionary* serverResponse;

}

@property (assign) long long returnCode; 
@property (retain) NSString * username; 
@property (retain) NSString * password; 
@property (retain) NSNumber * suppressionCheckboxState; 
@property (retain) NSDictionary * serverResponse; 
+(char)supportsSecureCoding;
-(NSString *)password;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setSuppressionCheckboxState:(NSNumber *)arg1 ;
-(NSNumber *)suppressionCheckboxState;
-(long long)returnCode;
-(void)setReturnCode:(long long)arg1 ;
-(NSDictionary *)serverResponse;
-(void)setServerResponse:(NSDictionary *)arg1 ;
@end

