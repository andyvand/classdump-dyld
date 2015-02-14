/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _NSExpectedObservingInfo : NSObject {

	unsigned long long _suppressAllNotificationCounter;
	id _allSuppressedObject;
	id _specificSuppressedObject;
	NSString* _specificSuppressedKeyPath;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(char)shouldSuppressNotificationFromObject:(id)arg1 keyPath:(id)arg2 ;
-(void)suppressAllNotifications;
-(void)unsuppressAllNotifications;
-(void)suppressSpecificNotificationFromObject:(id)arg1 keyPath:(id)arg2 ;
-(void)unsuppressSpecificNotificationFromObject:(id)arg1 keyPath:(id)arg2 ;
-(void)suppressAllNotificationsFromObject:(id)arg1 ;
-(void)unsuppressAllNotificationsFromObject:(id)arg1 ;
@end

