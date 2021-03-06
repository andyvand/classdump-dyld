/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPResponse.h>

@class NSDictionary;

@interface IMAPIDResponse : IMAPResponse {

	NSDictionary* _serverID;

}

@property (nonatomic,copy) NSDictionary * serverID;              //@synthesize serverID=_serverID - In the implementation block
+(char)handlesResponseWithName:(const char*)arg1 ofLength:(unsigned long long)arg2 ;
-(void)setServerID:(NSDictionary *)arg1 ;
-(id)description;
-(NSDictionary *)serverID;
@end

