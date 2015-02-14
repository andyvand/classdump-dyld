/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, MCError;

@interface IMAPResponse : NSObject {

	char _wasHandled;
	NSString* _tag;
	MCError* _error;

}

@property (assign,nonatomic) char wasHandled;                //@synthesize wasHandled=_wasHandled - In the implementation block
@property (nonatomic,copy) NSString * tag;                   //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) MCError * error;                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) char isUntagged; 
+(char)handlesResponseWithName:(const char*)arg1 ofLength:(unsigned long long)arg2 ;
+(id)newIMAPResponseWithConnection:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(void)setTag:(NSString *)arg1 ;
-(NSString *)tag;
-(MCError *)error;
-(void)setError:(MCError *)arg1 ;
-(char)isUntagged;
-(void)setWasHandled:(char)arg1 ;
-(char)wasHandled;
@end

