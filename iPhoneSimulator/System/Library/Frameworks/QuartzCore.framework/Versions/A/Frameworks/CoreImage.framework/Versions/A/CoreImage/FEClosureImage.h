/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/FEImage.h>

@interface FEClosureImage : FEImage {

	CGSRegionObject* shapes[2];
	/*function pointer*/void* callback;
	/*function pointer*/void* destroy;
	void* callback_data;

}
-(id)initWithCallback:(/*function pointer*/void*)arg1 destroyCallback:(/*function pointer*/void*)arg2 callbackInfo:(void*)arg3 options:(const fe_params_struct*)arg4 ;
-(void)_getShape:(FEShape*)arg1 kind:(int)arg2 ;
-(void)setShape:(const FEShape*)arg1 kind:(int)arg2 ;
-(id)applyTransform:(CGAffineTransform*)arg1 withContext:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
@end

