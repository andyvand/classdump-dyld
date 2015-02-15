/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class NSMutableDictionary, NSMutableArray;

@interface IKHardwareCapsChangeNotifier : NSObject {

	IONotificationPortRef _notificationPort;
	NSMutableDictionary* _notifierMap;
	NSMutableArray* _cameraCallbackObjs;
	char _hasQ8;
	char _hasDV;
	id _delegate;

}
+(id)hardwareCapsChangeNotifier;
-(void)registerForHardwareNotification;
-(void)unregisterForHardwareNotification;
-(void)initIOKitNotifications;
-(void)_broadcastHardwareCaps;
-(void)createNotification:(CFDictionaryRef)arg1 callback:(/*function pointer*/void*)arg2 ;
-(IONotificationPortRef)notificationPort;
-(id)notifierMap;
-(void)audioHardwareChanged:(id)arg1 ;
-(unsigned)cameraCallbackFindParent:(unsigned)arg1 parentClass:(const char*)arg2 ;
-(unsigned)cameraCallbackCreateNotifier:(unsigned)arg1 ;
-(char)_isGUIDUnique:(id)arg1 ;
-(id)vcHardwareCaps;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)initialize;
-(id)delegate;
@end

