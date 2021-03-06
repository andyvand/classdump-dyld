/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSURL, NSData, NSString;


@protocol MCCIDURLProtocolDataProvider <NSObject>
@property (readonly) NSURL * cidURL; 
@property (copy,readonly) NSData * data; 
@property (copy,readonly) NSString * mimeType; 
@property (readonly) long long fileSize; 
@optional
-(long long)fileSize;

@required
-(NSString *)mimeType;
-(NSURL *)cidURL;
-(NSData *)data;

@end

