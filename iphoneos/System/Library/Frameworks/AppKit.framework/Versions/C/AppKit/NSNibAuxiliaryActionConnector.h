/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSNibConnector.h>

@class NSString;

@interface NSNibAuxiliaryActionConnector : NSNibConnector {

	NSString* _trigger;

}

@property (copy) NSString * trigger;              //@synthesize trigger=_trigger - In the implementation block
+(id)classFallbacksForKeyedArchiver;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)establishConnection;
-(NSString *)trigger;
-(void)setTrigger:(NSString *)arg1 ;
@end

