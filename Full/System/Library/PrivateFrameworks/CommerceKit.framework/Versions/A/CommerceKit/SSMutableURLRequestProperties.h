/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommerceKit/CommerceKit-Structs.h>
#import <CommerceKit/SSURLRequestProperties.h>

@class NSString, NSData, NSURL, NSDictionary;

@interface SSMutableURLRequestProperties : SSURLRequestProperties

@property (assign) long long allowedRetryCount; 
@property (assign) unsigned long long cachePolicy; 
@property (copy) NSString * clientIdentifier; 
@property (copy) NSData * HTTPBody; 
@property (copy) NSString * HTTPMethod; 
@property (getter=isITunesStoreRequest) char ITunesStoreRequest; 
@property (assign) double timeoutInterval; 
@property (copy) NSString * URLBagKey; 
@property (retain) NSURL * URL; 
@property (copy) NSDictionary * HTTPHeaders; 
@property (copy) NSDictionary * requestParameters; 
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(void)setHTTPBody:(NSData *)arg1 ;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setHTTPHeaders:(NSDictionary *)arg1 ;
-(void)setITunesStoreRequest:(char)arg1 ;
-(void)setRequestParameters:(NSDictionary *)arg1 ;
-(void)setURLBagKey:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setAllowedRetryCount:(long long)arg1 ;
@end

