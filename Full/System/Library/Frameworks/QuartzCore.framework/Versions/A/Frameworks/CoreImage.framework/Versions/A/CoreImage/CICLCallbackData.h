/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CICLCallbackData : NSObject {

	void* priv;

}
-(void)setUserValue:(id)arg1 forKey:(id)arg2 ;
-(id)userValueForKey:(id)arg1 ;
-(id)initWithFECallback:(fe_kernel_callback_info_struct*)arg1 ;
-(CGRect)dim;
-(cl_memRef)destStream;
-(unsigned long long)bpp;
-(id)description;
-(cl_contextRef)context;
-(cl_command_queueRef)queue;
-(CGSize)size;
-(char)isFlipped;
-(float*)delta;
-(CGPoint)origin;
-(cl_device_idRef)device;
@end

