/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/findmydeviced
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FMDServerConfig : NSObject {

	NSString* _userAgent;
	NSDictionary* _urlTemplates;

}

@property (nonatomic,retain) NSString * userAgent;                     //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) NSDictionary * urlTemplates;              //@synthesize urlTemplates=_urlTemplates - In the implementation block
+(id)sharedInstance;
-(void)setUrlTemplates:(NSDictionary *)arg1 ;
-(NSDictionary *)urlTemplates;
-(id)urlTemplateForRequestType:(id)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(id)init;
@end

