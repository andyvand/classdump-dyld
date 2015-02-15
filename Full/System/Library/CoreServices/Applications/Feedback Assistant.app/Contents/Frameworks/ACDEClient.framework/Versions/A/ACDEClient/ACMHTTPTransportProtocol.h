/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/Frameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSDictionary, NSData;


@protocol ACMHTTPTransportProtocol <NSObject>
@property (nonatomic,retain) NSString * address; 
@property (nonatomic,retain) NSString * httpMethod; 
@property (nonatomic,retain) NSDictionary * httpHeader; 
@property (nonatomic,retain) NSDictionary * httpGETParameters; 
@property (nonatomic,retain) NSData * httpPOSTBody; 
@property (assign,nonatomic) double timeout; 
@property (assign,nonatomic) char isCanceled; 
@required
-(void)setHttpHeader:(id)arg1;
-(void)performRequestWithCompletionBlock:(/*^block*/id)arg1;
-(NSDictionary *)httpHeader;
-(NSDictionary *)httpGETParameters;
-(void)setHttpGETParameters:(id)arg1;
-(NSData *)httpPOSTBody;
-(void)setHttpPOSTBody:(id)arg1;
-(void)setIsCanceled:(char)arg1;
-(void)setHttpMethod:(id)arg1;
-(void)setTimeout:(double)arg1;
-(double)timeout;
-(void)cancelRequest;
-(char)isCanceled;
-(NSString *)address;
-(void)setAddress:(id)arg1;
-(NSString *)httpMethod;

@end

