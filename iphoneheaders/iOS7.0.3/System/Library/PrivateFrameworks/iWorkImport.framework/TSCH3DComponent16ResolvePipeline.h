/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DFramebufferCombinePipeline.h>
#import <iWorkImport/TSCH3DFramebufferResolver.h>

@class TSCH3DComponent16ResolveShaderEffect;

@interface TSCH3DComponent16ResolvePipeline : TSCH3DFramebufferCombinePipeline <TSCH3DFramebufferResolver> {

	TSCH3DComponent16ResolveShaderEffect* mResolveEffect;
	float mFactor;

}

@property (assign,nonatomic) float factor; 
@property (assign,nonatomic) int lowColorBits; 
-(id)initWithProcessor:(id)arg1 session:(id)arg2 ;
-(void)updateShaderEffectsStates;
-(void)setFactor:(float)arg1 ;
-(int)lowColorBits;
-(void)setLowColorBits:(int)arg1 ;
-(void)dealloc;
-(float)factor;
@end
