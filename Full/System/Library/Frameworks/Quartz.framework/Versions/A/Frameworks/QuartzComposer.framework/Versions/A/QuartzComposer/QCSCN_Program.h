/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/NSCopying.h>

@class NSString;

@interface QCSCN_Program : NSObject <NSCopying> {

	id _reserved;

}

@property (nonatomic,copy) NSString * vertexShader; 
@property (nonatomic,copy) NSString * fragmentShader; 
@property (assign,nonatomic) id<QCSCN_ProgramDelegate> delegate; 
+(id)program;
-(id)init;
-(void)setDelegate:(id<QCSCN_ProgramDelegate>)arg1 ;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<QCSCN_ProgramDelegate>)delegate;
-(id)parameters;
-(void)setParameters:(id)arg1 ;
-(void)setVertexShader:(NSString *)arg1 ;
-(void)setFragmentShader:(NSString *)arg1 ;
-(id)parameterForSymbol:(id)arg1 ;
-(id)allSymbols;
-(NSString *)vertexShader;
-(NSString *)fragmentShader;
-(void)_programWillChange;
-(void)_programDidChange;
-(void)setParameter:(id)arg1 forSymbol:(id)arg2 ;
-(void)setSemantic:(id)arg1 forSymbol:(id)arg2 options:(id)arg3 ;
-(void)_createParametersIfNeeded;
-(void)_parameterWithSymbolWillChange:(id)arg1 ;
-(void)_parameterWithSymbolDidChange:(id)arg1 ;
-(void)_delegateDidChange;
-(void)setSemantic:(id)arg1 forSymbol:(id)arg2 ;
-(id)semanticForSymbol:(id)arg1 ;
-(id)optionsForSymbol:(id)arg1 ;
@end

