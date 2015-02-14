/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PubSub.framework/Versions/A/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PubSub/PSOperation.h>

@class NSArray, NSData;

@interface PSPutOperation : PSOperation {

	NSArray* _messages;
	char _isPageFlip;

}

@property (readonly) NSData * requestData; 
@property (copy) NSArray * messages;                    //@synthesize messages=_messages - In the implementation block
@property (assign) char isPageFlip;                     //@synthesize isPageFlip=_isPageFlip - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 URL:(id)arg3 eTag:(id)arg4 start:(unsigned)arg5 data:(id)arg6 ;
-(NSData *)requestData;
-(char)isPageFlip;
-(void)setIsPageFlip:(char)arg1 ;
-(void)_gotResponse;
-(void)setMessages:(NSArray *)arg1 ;
-(NSArray *)messages;
@end

