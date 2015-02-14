/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIPromiseInvocation : NSObject {

	CIPromisePrivate* _priv;
	id _contextImpl;
	CGRect _bounds;
	CGAffineTransform _matrix;

}
-(id)initWith:(CIPromisePrivate*)arg1 :(id)arg2 :(CGAffineTransform)arg3 ;
-(id)contextObjectForKey:(id)arg1 ;
-(char)contextIsOpenGLGPU;
-(CGAffineTransform)affineTransform;
-(void)finalize;
-(void)dealloc;
-(void)setAffineTransform:(CGAffineTransform)arg1 ;
-(id)context;
@end

