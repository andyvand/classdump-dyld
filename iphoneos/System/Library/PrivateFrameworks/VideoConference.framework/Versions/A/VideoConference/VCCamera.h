/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/VideoConference.framework/Versions/A/VideoConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, VCMicrophone;

@interface VCCamera : NSObject {

	NSString* _displayName;
	NSString* _driverName;
	NSString* _inputName;
	NSString* _GUID;
	VCMicrophone* _associatedMicrophone;
	unsigned _deviceID;
	int _type;
	char _visible;
	char _isSuspended;
	char _isWidescreen;

}
-(char)visible;
-(id)initWithDisplayName:(id)arg1 driverName:(id)arg2 inputName:(id)arg3 GUID:(id)arg4 CMIODeviceID:(unsigned)arg5 associatedMicrophone:(id)arg6 ;
-(void)setIsSuspended:(char)arg1 ;
-(id)GUID;
-(void)setIsWidescreen:(char)arg1 ;
-(unsigned)CMIODeviceID;
-(id)associatedMicrophone;
-(char)irisOpen;
-(char)isWidescreen;
-(char)isSuspended;
-(id)init;
-(void)dealloc;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setVisible:(char)arg1 ;
-(id)displayName;
@end

