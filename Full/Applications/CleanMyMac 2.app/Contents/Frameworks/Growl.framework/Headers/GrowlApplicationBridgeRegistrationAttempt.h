/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/Growl.framework/Growl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Growl/GrowlCommunicationAttempt.h>

@class NSString;

@interface GrowlApplicationBridgeRegistrationAttempt : GrowlCommunicationAttempt {

	NSString* applicationName;

}

@property (nonatomic,copy) NSString * applicationName; 
+(unsigned long long)attemptType;
-(void)setApplicationName:(NSString *)arg1 ;
-(void)begin;
-(NSString *)applicationName;
@end

