/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QCGraphicsRenderState.h>

@interface QCOpenGLRenderState : QCGraphicsRenderState {

	long long currentVirtualScreen;
	float currentFieldOfView;
	float saveFieldOfView;
	char saveFlipped;
	char saveResetMatrices;
	int saveFace;
	int saveMode;
	double saveModelView[16];
	double saveProjection[16];
	int saveScissorFrame[4];
	char saveScissorEnabled;

}
-(id)initWithContext:(id)arg1 patch:(id)arg2 ;
@end

