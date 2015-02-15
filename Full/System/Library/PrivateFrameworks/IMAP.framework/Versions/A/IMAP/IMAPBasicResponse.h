/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPResponse.h>

@class NSData;

@interface IMAPBasicResponse : IMAPResponse {

	NSData* _userData;
	long long _responseCode;
	id _responseInfo;

}

@property (assign,nonatomic) long long responseCode;              //@synthesize responseCode=_responseCode - In the implementation block
@property (nonatomic,retain) id responseInfo;                     //@synthesize responseInfo=_responseInfo - In the implementation block
@property (nonatomic,copy) NSData * userData; 
-(void)setResponseCode:(long long)arg1 ;
-(long long)responseCode;
-(id)userString;
-(id)description;
-(NSData *)userData;
-(const char*)_responseName;
-(id)responseInfo;
-(void)setUserData:(NSData *)arg1 ;
-(void)setResponseInfo:(id)arg1 ;
@end

