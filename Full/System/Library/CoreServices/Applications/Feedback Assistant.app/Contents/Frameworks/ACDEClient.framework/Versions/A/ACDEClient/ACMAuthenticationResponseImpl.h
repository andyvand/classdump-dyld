/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/Frameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ACDEClient/ACDEAuthenticationResponse.h>
#import <ACDEClient/ACMAuthenticationResponse_URLAccess.h>

@class NSString, NSError, NSURL, NSDictionary;

@interface ACMAuthenticationResponseImpl : NSObject <ACDEAuthenticationResponse, ACMAuthenticationResponse_URLAccess> {

	NSString* _token;
	NSString* _userName;
	NSDictionary* _rawResponseData;
	NSError* _error;
	NSURL* _responseUrl;

}

@property (retain) NSString * token;                                //@synthesize token=_token - In the implementation block
@property (retain) NSString * userName;                             //@synthesize userName=_userName - In the implementation block
@property (retain) NSDictionary * rawResponseData;                  //@synthesize rawResponseData=_rawResponseData - In the implementation block
@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSURL * responseUrl;                             //@synthesize responseUrl=_responseUrl - In the implementation block
+(id)authenticationResponse;
-(void)setRawResponseData:(NSDictionary *)arg1 ;
-(void)setResponseUrl:(NSURL *)arg1 ;
-(NSURL *)responseUrl;
-(NSDictionary *)rawResponseData;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)token;
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)userName;
-(void)setUserName:(NSString *)arg1 ;
@end
