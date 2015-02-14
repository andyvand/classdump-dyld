/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/HWMonitor.app/Contents/Frameworks/Growl.framework/Growl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Growl/GrowlApplicationBridgeDelegate.h>

@class NSDictionary, NSString, NSData;

@interface GrowlDelegate : NSObject <GrowlApplicationBridgeDelegate> {

	NSDictionary* registrationDictionary;
	NSString* applicationNameForGrowl;
	NSData* applicationIconDataForGrowl;

}
-(id)registrationDictionaryForGrowl;
-(id)applicationNameForGrowl;
-(id)applicationIconDataForGrowl;
-(void)setApplicationIconDataForGrowl:(id)arg1 ;
-(void)setApplicationNameForGrowl:(id)arg1 ;
-(id)initWithAllNotifications:(id)arg1 defaultNotifications:(id)arg2 ;
-(void)dealloc;
@end

