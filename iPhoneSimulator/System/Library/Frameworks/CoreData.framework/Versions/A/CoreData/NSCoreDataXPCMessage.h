/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:15 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSecureCoding.h>

@class NSData, NSString;

@interface NSCoreDataXPCMessage : NSObject <NSSecureCoding> {

	unsigned long long _messageCode;
	NSData* _messageBody;
	NSString* _token;

}

@property (assign) unsigned long long messageCode;              //@synthesize messageCode=_messageCode - In the implementation block
@property (retain) NSData * messageBody;                        //@synthesize messageBody=_messageBody - In the implementation block
@property (retain) NSString * token;                            //@synthesize token=_token - In the implementation block
+(char)supportsSecureCoding;
-(void)setToken:(NSString *)arg1 ;
-(unsigned long long)messageCode;
-(void)setMessageCode:(unsigned long long)arg1 ;
-(void)setMessageBody:(NSData *)arg1 ;
-(NSString *)token;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)messageBody;
@end

