/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class TSCH3DLightingModel, NSNumber;

@interface TSCH3DRenderingLightingModel : NSObject {

	TSCH3DLightingModel* mLightingModel;
	NSNumber* mPercentage;
	BOOL mHasTransparency;

}

@property (nonatomic,readonly) TSCH3DLightingModel * lightingModel; 
@property (nonatomic,readonly) BOOL hasTransparency; 
+(id)renderingLightingModelWithFill:(id)arg1 lightings:(id)arg2 ;
+(id)renderingLightingModelWithLightingModel:(id)arg1 percentage:(id)arg2 hasTransparency:(BOOL)arg3 ;
+(id)p_lightingModelFromFill:(id)arg1 lightings:(id)arg2 returningTransparency:(BOOL*)arg3 ;
-(BOOL)hasTransparency;
-(void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4 ;
-(id)lightingModel;
-(id)initWithLightingModel:(id)arg1 percentage:(id)arg2 hasTransparency:(BOOL)arg3 ;
-(void)dealloc;
@end
