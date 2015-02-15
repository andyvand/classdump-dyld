/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString;

@interface ADAssistantConnectionInfo : NSObject {

	char _prefersWWAN;
	NSURL* _url;
	NSString* _aceHost;
	NSString* _languageCode;
	double _timeout;

}

@property (nonatomic,copy) NSURL * url;                          //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * aceHost;                   //@synthesize aceHost=_aceHost - In the implementation block
@property (nonatomic,copy) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) char prefersWWAN;                   //@synthesize prefersWWAN=_prefersWWAN - In the implementation block
@property (assign,nonatomic) double timeout;                     //@synthesize timeout=_timeout - In the implementation block
-(char)prefersWWAN;
-(void)setPrefersWWAN:(char)arg1 ;
-(NSString *)languageCode;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)setAceHost:(NSString *)arg1 ;
-(NSString *)aceHost;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
@end
