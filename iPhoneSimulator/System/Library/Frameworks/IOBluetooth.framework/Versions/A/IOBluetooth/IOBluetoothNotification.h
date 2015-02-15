/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IOBluetoothNotification : NSObject {

	/*function pointer*/void* mCallback;
	void* mUserRefCon;
	unsigned mClass;
	unsigned mSubClass;

}
+(id)notificationWithClass:(unsigned)arg1 subClass:(unsigned)arg2 callback:(/*function pointer*/void*)arg3 userRefCon:(void*)arg4 ;
-(void)setClass:(unsigned)arg1 subClass:(unsigned)arg2 callback:(/*function pointer*/void*)arg3 userRefCon:(void*)arg4 ;
-(void)invokeCallbackWithData:(const void*)arg1 dataSize:(unsigned long long)arg2 class:(unsigned)arg3 subClass:(unsigned)arg4 ;
-(void)dealloc;
@end

