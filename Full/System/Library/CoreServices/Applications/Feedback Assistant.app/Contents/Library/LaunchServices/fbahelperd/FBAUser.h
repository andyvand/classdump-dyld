/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/Library/LaunchServices/fbahelperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FBAUser : NSObject {

	NSString* _lastUsername;

}

@property (retain) NSString * lastUsername;              //@synthesize lastUsername=_lastUsername - In the implementation block
+(id)sharedInstance;
-(void)setLastUsername:(NSString *)arg1 ;
-(NSString *)lastUsername;
-(id)init;
@end
