/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/NSCoding.h>

@class NSData, NSHTTPURLResponse, NSDictionary;

@interface SLFacebookResponse : NSObject <NSCoding> {

	NSData* _responseData;
	NSHTTPURLResponse* _urlResponse;
	id _untypedResponseParameters;
	long long _httpErrorCode;

}

@property (readonly) NSDictionary * responseParameters; 
@property (readonly) int APIresponseErrorCode; 
@property (readonly) long long httpErrorCode;                        //@synthesize httpErrorCode=_httpErrorCode - In the implementation block
@property (readonly) NSHTTPURLResponse * urlResponse; 
-(NSHTTPURLResponse *)urlResponse;
-(long long)httpStatusCode;
-(id)initWithResponseData:(id)arg1 urlResponse:(id)arg2 ;
-(NSDictionary *)responseParameters;
-(char)hasBadTokenError;
-(long long)httpErrorCode;
-(char)hasHTTPStatusOK;
-(id)untypedResponseParameters;
-(int)APIresponseErrorCode;
-(char)hasMissingTokenOrAppID;
-(id)checkpointURL;
-(char)isBatchResponse;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)hasError;
@end

