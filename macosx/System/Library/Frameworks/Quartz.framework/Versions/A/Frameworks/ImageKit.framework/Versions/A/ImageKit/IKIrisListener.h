/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@interface IKIrisListener : NSObject {

	id _delegate;
	void* _irisMatcher;
	CFArrayRef _irisListeners;
	char _irisClosedInitialized;
	char _irisClosed;

}
-(void)setIrisClosed:(char)arg1 ;
-(char)isIrisClosed;
-(void)matcher:(IrisMatcher*)arg1 foundService:(unsigned)arg2 ;
-(void)irisOpened;
-(void)irisClosed;
-(void)iSightRanOffWithItsListener:(IrisListener*)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
@end

