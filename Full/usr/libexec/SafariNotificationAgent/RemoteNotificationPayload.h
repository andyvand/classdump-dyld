/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/SafariNotificationAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface RemoteNotificationPayload : NSObject {

	NSArray* _urlArguments;
	NSString* _alertTitle;
	NSString* _alertBody;
	NSString* _alertActionText;

}

@property (nonatomic,copy,readonly) NSArray * urlArguments;                  //@synthesize urlArguments=_urlArguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * alertTitle;                   //@synthesize alertTitle=_alertTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * alertBody;                    //@synthesize alertBody=_alertBody - In the implementation block
@property (nonatomic,copy,readonly) NSString * alertActionText;              //@synthesize alertActionText=_alertActionText - In the implementation block
-(id)initWithNotificationPayloadDictionary:(id)arg1 error:(id*)arg2 ;
-(NSString *)alertTitle;
-(NSString *)alertActionText;
-(NSArray *)urlArguments;
-(char)_parsePayloadDictionary:(id)arg1 error:(id*)arg2 ;
-(NSString *)alertBody;
@end
