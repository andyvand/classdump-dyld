/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Social/Social-Structs.h>
@class ACAccount, OACredential, NSURL, NSMutableDictionary, NSMutableArray, NSString, NSData, SLService, NSDictionary;

@interface SLRequest : NSObject {

	ACAccount* _account;
	OACredential* _OAuthCredential;
	long long _requestMethod;
	NSURL* _url;
	NSMutableDictionary* _parameters;
	NSMutableArray* _multiParts;
	NSString* _multiPartBoundary;
	int _callingPID;
	NSString* _applicationID;
	NSString* _contentType;
	NSData* _payload;
	unsigned long long _networkServiceType;
	SLService* _service;
	OpaqueCFHTTPCookieStorageRef _privateCookieStorage;

}

@property (nonatomic,retain) ACAccount * account; 
@property (nonatomic,readonly) long long requestMethod;                //@synthesize requestMethod=_requestMethod - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                            //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(id)requestForServiceType:(id)arg1 requestMethod:(long long)arg2 URL:(id)arg3 parameters:(id)arg4 ;
-(void)setNetworkServiceType:(unsigned long long)arg1 ;
-(void)setContentType:(id)arg1 ;
-(id)preparedURLRequest;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(id)_parameterString;
-(id)_urlEncodedString:(id)arg1 ;
-(id)initWithServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 requestMethod:(long long)arg4 ;
-(void)removeParameterForKey:(id)arg1 ;
-(id)parameterForKey:(id)arg1 ;
-(void)setMultiPartBoundary:(id)arg1 ;
-(void)addMultipartData:(id)arg1 withName:(id)arg2 type:(id)arg3 filename:(id)arg4 ;
-(id)multiPartBoundary;
-(id)_allParameters;
-(void)_addAuthenticationParameters:(id)arg1 ;
-(char)_shouldAppendLinkedInChildAccessTokenToRequest;
-(char)_shouldAppendTencentWeiboParametersToRequest;
-(char)shouldIncludeParameterString;
-(id)_preparedURL;
-(id)_HTTPMethodName;
-(id)completeMultiParts;
-(char)_requiresAuthorization;
-(char)_shouldRetryAfterCount:(int)arg1 delay:(float*)arg2 ;
-(id)_commandName;
-(void)performJSONRequestWithHandler:(/*^block*/id)arg1 retryCount:(int)arg2 ;
-(id)multiParts;
-(void)addMultiPart:(id)arg1 ;
-(void)addMultipartData:(id)arg1 withName:(id)arg2 type:(id)arg3 ;
-(id)multiPartBodyData;
-(void)setOAuthCredential:(id)arg1 ;
-(id)OAuthCredential;
-(void)setCallingPID:(int)arg1 ;
-(int)callingPID;
-(void)setApplicationID:(id)arg1 ;
-(void)_appendCoreSig1Signature;
-(id)dictionaryRepresentationForJSONSerialization;
-(void)performJSONRequestWithHandler:(/*^block*/id)arg1 ;
-(long long)requestMethod;
-(id)init;
-(NSURL *)URL;
-(NSDictionary *)parameters;
-(void)setParameterValue:(id)arg1 forKey:(id)arg2 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(unsigned long long)networkServiceType;
-(void)setPayload:(id)arg1 ;
@end

